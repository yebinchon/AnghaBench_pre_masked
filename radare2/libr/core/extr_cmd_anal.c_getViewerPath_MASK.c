
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static char *FUNC_3() {
 int VAR_0;
 const char *VAR_1[] = {



  "open",
  "geeqie",
  "gqview",
  "eog",
  "xdg-open",

  ((void*)0)
 };
 for (VAR_0 = 0; VAR_1[VAR_0]; VAR_0++) {
  char *VAR_2 = FUNC_1 (VAR_1[VAR_0]);
  if (VAR_2 && FUNC_2 (VAR_2, VAR_1[VAR_0])) {
   return VAR_2;
  }
  FUNC_0 (VAR_2);
 }
 return ((void*)0);
}
