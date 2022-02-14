
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(void)
{

 unsigned int VAR_0, VAR_1;

 asm volatile("rdtsc" : "=a" (VAR_0), "=d" (VAR_1));

 return VAR_0 | ((uint64_t)VAR_1) << 32;



}
