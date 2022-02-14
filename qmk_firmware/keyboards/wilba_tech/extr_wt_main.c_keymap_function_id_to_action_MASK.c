
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;


 int * VAR_0 ;
 int FUNC_1 (int *) ;

uint16_t FUNC_2( uint16_t VAR_1 )
{



 if ( VAR_1 >= 0x0F00 && VAR_1 <= 0x0FFF )
 {
  uint8_t VAR_2 = VAR_1 & 0xFF;
  switch ( VAR_2 ) {
   case 129:
   case 128:
   {
    return FUNC_0(VAR_2);
    break;
   }
   default:
    break;
  }
 }

 return FUNC_1(&VAR_0[VAR_1]);
}
