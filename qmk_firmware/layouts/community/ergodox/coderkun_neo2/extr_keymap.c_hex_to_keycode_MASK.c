
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

uint16_t FUNC_0(uint8_t VAR_9)
{
  if(VAR_9 == 0x0) {
    return VAR_0;
  }
  else if(VAR_9 >= 0xA) {
    switch(VAR_9) {
      case 0xA:
        return VAR_3;
      case 0xB:
        return VAR_4;
      case 0xC:
        return VAR_5;
      case 0xD:
        return VAR_6;
      case 0xE:
        return VAR_7;
      case 0xF:
        return VAR_8;
      default:
        return VAR_2;
    }
  }

  return VAR_1 + (VAR_9 - 0x1);
}
