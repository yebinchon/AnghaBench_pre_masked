
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;
typedef int atomic_int_t ;



__attribute__((used)) static inline atomic_int_t FUNC_0(atomic_t *VAR_0, atomic_int_t VAR_1)
{
 __asm__ volatile ( "lock;" "xaddq %0, %1;" :
  "+r" (VAR_1) : "m" (*VAR_0) : "memory");

 return VAR_1;
}
