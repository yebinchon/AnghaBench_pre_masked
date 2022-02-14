
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,long) ;

char *FUNC_2(ut32 VAR_0) {
 ut32 VAR_1 = (VAR_0 >> 4) & 7;
 char *VAR_2 = (char *)FUNC_0 (1, 50);
 if (!VAR_2) {
  return ((void*)0);
 }
 switch (VAR_1) {
 case 0:
  FUNC_1(VAR_2, "*ar-%ld", (long int)VAR_0 & 0xF);
  break;
 case 1:
  FUNC_1(VAR_2, "*ar+%ld", (long int)VAR_0 & 0xF);
  break;
 case 2:
  FUNC_1(VAR_2, "*ar%ld(t0)", (long int)VAR_0 & 0xF);
  break;
 case 3:
  FUNC_1(VAR_2, "*ar%ld", (long int)VAR_0 & 0xF);
  break;
 case 4:
  FUNC_1(VAR_2, "*(ar%ld-t0)", (long int)VAR_0 & 0xF);
  break;
 case 5:
  FUNC_1(VAR_2, "*(ar%ld-t1)", (long int)VAR_0 & 0xF);
  break;
 case 6:
  FUNC_1(VAR_2, "*(ar%ld+t0)", (long int)VAR_0 & 0xF);
  break;
 case 7:
  FUNC_1(VAR_2, "*(ar%ld+t1)", (long int)VAR_0 & 0xF);
  break;
 }
 return VAR_2;
}
