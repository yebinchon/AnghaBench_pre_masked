
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char atomic_uint_t ;
typedef int atomic_t ;



__attribute__((used)) static inline atomic_uint_t FUNC_0(atomic_t *VAR_0, atomic_uint_t VAR_1, atomic_uint_t VAR_2)
{
 unsigned char VAR_3;

 __asm__ volatile ( "lock;" "cmpxchgq %3, %1;" "sete %0;" :
  "=a" (VAR_3) : "m" (*VAR_0), "a" (VAR_1), "r" (VAR_2) : "memory");

 return VAR_3;
}
