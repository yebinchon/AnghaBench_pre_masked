
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(void)
{
 long VAR_0;
 asm volatile ("tcheck 0" : "=r"(VAR_0) : : "cr0");
 return (VAR_0 >> 28) & 4;
}
