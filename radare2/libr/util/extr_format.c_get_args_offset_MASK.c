
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0) {
 char *VAR_1 = FUNC_0 (VAR_0, ' ');
 char *VAR_2 = FUNC_0 (VAR_0, '[');
 int VAR_3 = 30;
 if (VAR_1 && VAR_2) {
  char *VAR_4 = FUNC_0 (VAR_0, ']');
  while (VAR_1 && VAR_4 && VAR_4 > VAR_1 && VAR_3--) {
   VAR_1 = FUNC_0 (VAR_4, ' ');
  }
 }
 return VAR_1;
}
