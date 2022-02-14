
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;

char *FUNC_2(ut32 VAR_1) {
 char *VAR_2 = "tc1";
 if (VAR_1) {
  if (VAR_1 != 1) {
   FUNC_0(VAR_0, "Invalid instruction TC2 or TC1 (%d)\n", VAR_1);
   return ((void*)0);
  }
  VAR_2 = "tc2";
 }
 return FUNC_1 (VAR_2);
}
