
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



u64 FUNC_0(void)
{
 unsigned int VAR_0, VAR_1;

 asm volatile("rdtsc" : "=a" (VAR_0), "=d" (VAR_1));

 return VAR_0 | ((u64)VAR_1) << 32;
}
