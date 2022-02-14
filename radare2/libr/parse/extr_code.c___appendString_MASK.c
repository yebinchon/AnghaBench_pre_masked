
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, char **VAR_1) {
 if (!VAR_1) {
  FUNC_2 ("%s\n", VAR_0);
 } else if (*VAR_1) {
  char *VAR_2 = FUNC_1 (FUNC_5 (VAR_0) + FUNC_5 (*VAR_1) + 1);
  if (VAR_2) {
   FUNC_3 (VAR_2, *VAR_1);
   FUNC_0 (*VAR_1);
   *VAR_1 = VAR_2;
   FUNC_3 (VAR_2 + FUNC_5 (VAR_2), VAR_0);
  }
 } else {
  *VAR_1 = FUNC_4 (VAR_0);
 }
}
