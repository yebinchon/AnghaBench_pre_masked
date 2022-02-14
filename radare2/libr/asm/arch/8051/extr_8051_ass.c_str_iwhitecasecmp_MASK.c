
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(char const*VAR_0, char const*VAR_1) {
 if (!VAR_0 && !VAR_1) {
  return *VAR_0 - *VAR_1;
 }
 while (VAR_0 && VAR_1) {
  if (!*VAR_0 && !*VAR_1) {
   break;
  }
  if (!*VAR_0 || !*VAR_1) {
   break;
  }
  if (FUNC_0 (*VAR_0)) {
   VAR_0 += 1;
   continue;
  }
  if (FUNC_0 (*VAR_1)) {
   VAR_1 += 1;
   continue;
  }
  if (FUNC_1 (*VAR_0) == FUNC_1 (*VAR_1)) {
   VAR_0 += 1;
   VAR_1 += 1;
   continue;
  }
  break;
 }
 return *VAR_0 - *VAR_1;
}
