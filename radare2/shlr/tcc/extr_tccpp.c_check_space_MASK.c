
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int *VAR_1)
{
 if (FUNC_0 (VAR_0)) {
  if (*VAR_1) {
   return 1;
  }
  *VAR_1 = 1;
 } else {
  *VAR_1 = 0;
 }
 return 0;
}
