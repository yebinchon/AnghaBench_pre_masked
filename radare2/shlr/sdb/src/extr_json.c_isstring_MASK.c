
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
 if (!FUNC_0 (VAR_0, "true")) {
  return 0;
 }
 if (!FUNC_0 (VAR_0, "false")) {
  return 0;
 }
 for (; *VAR_0; VAR_0++) {
  if (*VAR_0 < '0' || *VAR_0 > '9') {
   return 1;
  }
 }
 return 0;
}
