
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, char **VAR_1, char **VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_0, '.');





 if (VAR_3 == ((void*)0) || VAR_3 == VAR_0) {
  FUNC_0("The config variable does not contain a section name: %s\n", VAR_0);
  return -1;
 }
 if (!VAR_3[1]) {
  FUNC_0("The config variable does not contain a variable name: %s\n", VAR_0);
  return -1;
 }

 *VAR_2 = FUNC_1(VAR_0, '=');
 if (*VAR_2 == ((void*)0))
  *VAR_1 = VAR_0;
 else if (!FUNC_2(*VAR_2, "=")) {
  FUNC_0("The config variable does not contain a value: %s\n", VAR_0);
  return -1;
 } else {
  *VAR_2 = *VAR_2 + 1;
  *VAR_1 = FUNC_3(&VAR_0, "=");
  if (*VAR_1[0] == '\0') {
   FUNC_0("invalid config variable: %s\n", VAR_0);
   return -1;
  }
 }

 return 0;
}
