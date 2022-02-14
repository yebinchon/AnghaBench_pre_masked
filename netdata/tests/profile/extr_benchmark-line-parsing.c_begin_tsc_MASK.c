
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
  unsigned long VAR_1, VAR_2;
  asm volatile ("cpuid\nrdtsc" : "=a" (VAR_1), "=d" (VAR_2) : "0" (0) : "ebx", "ecx");
  VAR_0 = ((unsigned long)VAR_2 << 32) | (unsigned long)VAR_1;
}
