
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, const char *VAR_1) {
 if (!VAR_0 || !VAR_1) {
  return ((void*)0);
 }

 char *VAR_2 = FUNC_3 (VAR_0, ".getter_");
 if (!VAR_2) {
  VAR_2 = FUNC_3 (VAR_0, ".setter_");
  if (!VAR_2) {
   VAR_2 = FUNC_3 (VAR_0, ".method_");
  }
 }
 if (VAR_2) {
  char *VAR_3 = FUNC_3 (VAR_0, VAR_1);
  if (VAR_3 && VAR_3[FUNC_2 (VAR_1)] == '.') {
   VAR_3 = FUNC_1 (VAR_3 + FUNC_2 (VAR_1) + 1);
   char *VAR_4 = FUNC_0 (VAR_3, '.');
   if (VAR_4) {
    *VAR_4 = 0;
   }
   return VAR_3;
  }
 }
 return ((void*)0);
}
