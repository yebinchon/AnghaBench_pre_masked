
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;

__attribute__((used)) static void FUNC_4(REgg *VAR_0, const char *VAR_1, const char *VAR_2) {
 if (!*VAR_2) {
  return;
 }
 if (VAR_2[1] != ' ') {
  char *VAR_3 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_3) {
   FUNC_1 (VAR_3);
   FUNC_0 (VAR_3);
  }
 } else {
  FUNC_3 (VAR_0, VAR_1, VAR_2 + 2);
 }
}
