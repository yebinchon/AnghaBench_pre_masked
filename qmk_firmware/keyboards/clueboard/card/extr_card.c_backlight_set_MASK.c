
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

void FUNC_1(uint8_t VAR_3)
{

 switch (VAR_3)
 {
 case 0:

  VAR_2 = 0xFFFF;
  VAR_1 = 0xFFFF;
  VAR_0 = 0xFFFF;
  break;
 case 1:

  VAR_2 = 0x0000;
  VAR_1 = 0xFFFF;
  VAR_0 = 0xFFFF;
  break;
 case 2:

  VAR_2 = 0xFFFF;
  VAR_1 = 0x0000;
  VAR_0 = 0xFFFF;
  break;
 case 3:

  VAR_2 = 0xFFFF;
  VAR_1 = 0xFFFF;
  VAR_0 = 0x0000;
  break;
 case 4:

  VAR_2 = 0x4000;
  VAR_1 = 0x4000;
  VAR_0 = 0x4000;
  break;
 case 5:

  VAR_2 = 0x0000;
  VAR_1 = 0xFFFF;
  VAR_0 = 0x0000;
  break;
 case 6:

  VAR_2 = 0x0000;
  VAR_1 = 0x0000;
  VAR_0 = 0xFFFF;
  break;
 default:
  FUNC_0("Unknown level: %d\n", VAR_3);
 }
}
