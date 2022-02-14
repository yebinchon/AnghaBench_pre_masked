
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;

char *FUNC_6(void) {
 const char *VAR_0 = FUNC_1("SWAYSOCK");
 if (VAR_0) {
  return FUNC_5(VAR_0);
 }
 char *VAR_1 = ((void*)0);
 size_t VAR_2 = 0;
 FILE *VAR_3 = FUNC_4("sway --get-socketpath 2>/dev/null", "r");
 if (VAR_3) {
  ssize_t VAR_4 = FUNC_2(&VAR_1, &VAR_2, VAR_3);
  FUNC_3(VAR_3);
  if (VAR_4 > 0) {

   if (VAR_1[VAR_4 - 1] == '\n') {
    VAR_1[VAR_4 - 1] = '\0';
   }
   return VAR_1;
  }
 }
 const char *VAR_5 = FUNC_1("I3SOCK");
 if (VAR_5) {
  FUNC_0(VAR_1);
  return FUNC_5(VAR_5);
 }
 VAR_3 = FUNC_4("i3 --get-socketpath 2>/dev/null", "r");
 if (VAR_3) {
  ssize_t VAR_6 = FUNC_2(&VAR_1, &VAR_2, VAR_3);
  FUNC_3(VAR_3);
  if (VAR_6 > 0) {

   if (VAR_1[VAR_6 - 1] == '\n') {
    VAR_1[VAR_6 - 1] = '\0';
   }
   return VAR_1;
  }
 }
 FUNC_0(VAR_1);
 return ((void*)0);
}
