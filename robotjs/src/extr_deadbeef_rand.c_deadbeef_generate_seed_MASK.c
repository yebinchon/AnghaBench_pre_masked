
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

uint32_t FUNC_2(void)
{
   uint32_t VAR_0 = (uint32_t)FUNC_1(((void*)0));
   uint32_t VAR_1 = (uint32_t)FUNC_0();
   return (VAR_0 << 24) ^ (VAR_1 << 11) ^ VAR_0 ^ (size_t) &VAR_1;
}
