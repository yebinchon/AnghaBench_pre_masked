
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline long FUNC_0(long VAR_0, long VAR_1, long VAR_2, long VAR_3)
{
 long VAR_4;

 asm volatile ("syscall" : "=a" (VAR_4) : "a" (VAR_0),
        "D" (VAR_1), "S" (VAR_2), "d" (VAR_3) :
        "cc", "memory", "rcx",
        "r8", "r9", "r10", "r11" );





 return VAR_4;
}
