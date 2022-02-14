
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char*,int) ;
 char* FUNC_3 (char const*,char*) ;

const char *FUNC_4(const char *VAR_0) {
 if (!FUNC_2 (VAR_0, "/*", 2)) {
  char *VAR_1 = FUNC_3 (VAR_0, "*/");
  if (VAR_1) {
   VAR_0 = VAR_1 + 2;
  } else {
   FUNC_0 ("Missing closing comment\n");
  }
 } else if (!FUNC_2 (VAR_0, "//", 2)) {
  char *VAR_2 = FUNC_1 (VAR_0, '\n');
  if (VAR_2) {
   VAR_0 = VAR_2 + 2;
  }
 }
 return VAR_0;
}
