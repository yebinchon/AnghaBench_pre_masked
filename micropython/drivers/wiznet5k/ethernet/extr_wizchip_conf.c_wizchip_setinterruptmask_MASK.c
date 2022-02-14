
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ intr_kind ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(intr_kind VAR_0)
{
   uint8_t VAR_1 = (uint8_t)VAR_0;
   uint8_t VAR_2 = (uint8_t)((uint16_t)VAR_0 >> 8);

   VAR_1 &= ~(1<<4);






   VAR_2 &= 0x0F;






   FUNC_0(VAR_1);
   FUNC_1(VAR_2);

}
