
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(void)
{
 unsigned long VAR_0;

 asm volatile("rdgsbase %0" : "=r" (VAR_0) :: "memory");

 return VAR_0;
}
