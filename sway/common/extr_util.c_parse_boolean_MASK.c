
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

bool FUNC_1(const char *VAR_0, bool VAR_1) {
 if (FUNC_0(VAR_0, "1") == 0
   || FUNC_0(VAR_0, "yes") == 0
   || FUNC_0(VAR_0, "on") == 0
   || FUNC_0(VAR_0, "true") == 0
   || FUNC_0(VAR_0, "enable") == 0
   || FUNC_0(VAR_0, "enabled") == 0
   || FUNC_0(VAR_0, "active") == 0) {
  return 1;
 } else if (FUNC_0(VAR_0, "toggle") == 0) {
  return !VAR_1;
 }

 return 0;
}
