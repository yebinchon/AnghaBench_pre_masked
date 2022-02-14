
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



u64 FUNC_0(u64 VAR_0, unsigned int VAR_1)
{
 u64 VAR_2 = 1;

 while (VAR_1) {
  if (VAR_1 & 1)
   VAR_2 *= VAR_0;
  VAR_1 >>= 1;
  VAR_0 *= VAR_0;
 }

 return VAR_2;
}
