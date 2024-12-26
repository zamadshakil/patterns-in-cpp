//Below is a square type pattern of stars

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout << "Enter number for lenght of pattern: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------



//Below is left side pyramid pattern of stars

//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cout << "Enter number for pattern lenght.";
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//
//	}
//	return 0;
//}


//----------------------------------------------------------------------------------------------------------------------------
 
 
// Below is right side pyramid pattern of stars

//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cout << "Enter number for pattern lenght: ";
//	cin >> n;
//	int veri = n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= (veri-1); j++) {
//			cout << " ";
//		}
//		for (int k = 1; k <= i; k++) {
//			cout << "*";
//		}
//		veri--;
//		cout << endl;
//	}
//	return 0;
//}


//----------------------------------------------------------------------------------------------------------------------------

//Below is pyramid pattern of stars

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number for pattern lenght: ";
	cin >> n;
	int veri = n, incr=1;	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < veri ; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		for(int l=1; l<incr; l++){
			cout << "*";
		}
		incr++;
		veri--;
		cout << endl;
	}
	return 0;
}
//hollow diamond shape in cpp
	/*
#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int s1_incr=1, decr1=n; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=decr1; j++){
            cout<<"*";
        }
        
        for(int k=1; k<=s1_incr; k++){
            cout<<" ";
        }
        for(int l=1; l<s1_incr; l++){
            cout<<" ";
        }
        for(int m=1; m<=decr1; m++){
            cout<<"*";
        }
        cout<<endl;
        s1_incr++;
        decr1--;
        
    }
    int incr2=1, decr2=n; 
    for(int a=1; a<=n; a++){
        for(int b=1; b<=incr2; b++ ){
            cout<<"*";
        }
        for(int c=1; c<=decr2; c++ ){
            cout<<" ";
        }
        for(int d=1; d<decr2; d++){
            cout<<" ";
        }
        for(int f=1; f<=incr2; f++){
            cout<<"*";
        }
        cout<<endl;
        decr2--;
        incr2++;
    }
    return 0;
}
	*/

/*lab work
	 #include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int decr = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= decr; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << k;
		}
		for (int m = i-1; m >= 1; m--) {
			cout << m;
		}
		cout << endl;
		decr--;
	}

	return 0;
}
*/
	return 0;
}
