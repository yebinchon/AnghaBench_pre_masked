
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_1) {
 char *VAR_2;

 if (!VAR_1) {
  FUNC_2(FUNC_0("overview!"));
  return;
 }

 VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || FUNC_1(VAR_2, "", sizeof("")) == VAR_0) {
  FUNC_2(FUNC_0("overview!"));
  FUNC_2(
   "\nrequested help page could not be found");
  return;
 }

 FUNC_2(VAR_2);
}
