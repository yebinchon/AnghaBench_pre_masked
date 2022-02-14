
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void
FUNC_0(unsigned int VAR_0, unsigned int *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int *VAR_4)
{
 __asm__ __volatile__ (".byte 0x53\n\tcpuid\n\t"
         "movl %%ebx, %%esi\n\t.byte 0x5b"
   : "=a" (*VAR_1),
   "=S" (*VAR_2),
   "=c" (*VAR_3),
   "=d" (*VAR_4)
   : "a" (VAR_0));
}
