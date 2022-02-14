
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
 if (FUNC_0 (VAR_0, "_cstring")) {
  return 1;
 }
 if (FUNC_0 (VAR_0, "_os_log")) {
  return 1;
 }
 if (FUNC_0 (VAR_0, "_objc_methname")) {
  return 1;
 }
 if (FUNC_0 (VAR_0, "_objc_classname")) {
  return 1;
 }
 if (FUNC_0 (VAR_0, "_objc_methtype")) {
  return 1;
 }
 return 0;
}
