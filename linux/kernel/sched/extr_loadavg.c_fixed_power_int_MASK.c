
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = 1UL << VAR_1;

 if (VAR_2) {
  for (;;) {
   if (VAR_2 & 1) {
    VAR_3 *= VAR_0;
    VAR_3 += 1UL << (VAR_1 - 1);
    VAR_3 >>= VAR_1;
   }
   VAR_2 >>= 1;
   if (!VAR_2)
    break;
   VAR_0 *= VAR_0;
   VAR_0 += 1UL << (VAR_1 - 1);
   VAR_0 >>= VAR_1;
  }
 }

 return VAR_3;
}
