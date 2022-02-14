
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 char* FUNC_0 (char*) ;

char *FUNC_1(ut32 VAR_0) {
 char *VAR_1 = ((void*)0);

 switch (VAR_0) {
 case 1: VAR_1 = "ac0, ac2"; break;
 case 2: VAR_1 = "ac1, ac3"; break;
 case 3: VAR_1 = "pair(ac0), pair(ac2)"; break;
 case 4: VAR_1 = "ar0, ar1"; break;
 case 5: VAR_1 = "ar0, ar2"; break;
 case 6: VAR_1 = "ar1, ar3"; break;
 case 7: VAR_1 = "pair(ar0), pair(ar2)"; break;
 case 9: VAR_1 = "t0, t2"; break;
 case 10: VAR_1 = "t1, t3"; break;
 case 11: VAR_1 = "pair(t0), pair(t2)"; break;
 case 21: VAR_1 = "ar4, t0"; break;
 case 22: VAR_1 = "ar5, t1"; break;
 case 23: VAR_1 = "pair(ar4), pair(t0)"; break;
 case 25: VAR_1 = "ar6, t2"; break;
 case 26: VAR_1 = "ar7, t3"; break;
 case 27: VAR_1 = "pair(ar6), pair(t2)"; break;
 case 31: VAR_1 = "block(ar4), block(t0)"; break;
 default: VAR_1 = ((void*)0);
 }

 if (VAR_1 != ((void*)0)) {
  VAR_1 = FUNC_0 (VAR_1);
 }

 return VAR_1;
}
