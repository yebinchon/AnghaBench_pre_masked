
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

bool FUNC_1(const char *VAR_0, int VAR_1) {
 if (VAR_1 < 2) {
  return 0;
 }
 int VAR_2 = 0;
 for (; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0 (VAR_0 + VAR_2) && FUNC_0 (VAR_0+ VAR_2 + 1) &&
    VAR_0[VAR_2] == '0' && VAR_0[VAR_2 + 1] == 'x') {
   return 1;
  }
 }
 return 0;
}
