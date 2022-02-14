
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int ** VAR_0 ;
 int* FUNC_2 (size_t) ;

void FUNC_3(uint8_t VAR_1)
{
 volatile uint32_t *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0();
 *VAR_2 = ((*VAR_2 & ~0x000F0000) | 0x01000000);
 VAR_0[VAR_1] = ((void*)0);
 FUNC_1();
}
