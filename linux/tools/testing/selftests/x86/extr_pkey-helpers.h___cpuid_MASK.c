
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned int *VAR_0, unsigned int *VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3)
{

 asm volatile(
  "cpuid;"
  : "=a" (*VAR_0),
    "=b" (*VAR_1),
    "=c" (*VAR_2),
    "=d" (*VAR_3)
  : "0" (*VAR_0), "2" (*VAR_2));
}
