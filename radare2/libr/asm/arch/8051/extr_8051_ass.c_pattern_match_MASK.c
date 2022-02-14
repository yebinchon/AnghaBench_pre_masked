
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static bool FUNC_2(char const*VAR_0, char const*VAR_1) {
 int VAR_2 = 0;
 int VAR_3 = 0;
 if (!VAR_1) {
  return 1;
 }

 while (VAR_1[VAR_3] != '\0') {
  while (FUNC_0 (VAR_0[VAR_2]) && !FUNC_0 (VAR_1[VAR_3])) {
   VAR_2 += 1;
  }
  if (FUNC_0 (VAR_1[VAR_3])) {
   VAR_3 += 1;
   continue;
  }
  if (FUNC_1 (VAR_1[VAR_3]) == FUNC_1 (VAR_0[VAR_2])) {
   VAR_2 += 1;
   VAR_3 += 1;
  }
  else {
   return 0;
  }
 }
 return 1;
}
