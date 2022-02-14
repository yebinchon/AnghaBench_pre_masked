
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(void)
{
 unsigned long VAR_0;
 asm volatile ("pushfq\n\tpopq %0" : "=rm" (VAR_0));
 return VAR_0;
}
