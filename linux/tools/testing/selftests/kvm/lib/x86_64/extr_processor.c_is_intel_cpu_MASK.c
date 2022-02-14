
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



bool FUNC_0(void)
{
 int VAR_0, VAR_1, VAR_2, VAR_3;
 const uint32_t *VAR_4;
 const int VAR_5 = 0;

 __asm__ __volatile__(
  "cpuid"
  : "=a"(VAR_0), "=b"(VAR_1),
    "=c"(VAR_2), "=d"(VAR_3)
  : "0"(VAR_5), "2"(0));

 VAR_4 = (const uint32_t *)("GenuineIntel");
 return (VAR_1 == VAR_4[0] && VAR_3 == VAR_4[1] && VAR_2 == VAR_4[2]);
}
