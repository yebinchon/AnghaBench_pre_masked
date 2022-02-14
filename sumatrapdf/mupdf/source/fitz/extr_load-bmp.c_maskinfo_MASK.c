
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0, int *VAR_1, int *VAR_2)
{
 *VAR_2 = 0;
 *VAR_1 = 0;
 if (VAR_0) {
  while ((VAR_0 & 1) == 0) {
   *VAR_1 += 1;
   VAR_0 >>= 1;
  }
  while ((VAR_0 & 1) == 1) {
   *VAR_2 += 1;
   VAR_0 >>= 1;
  }
 }
}
