
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int,scalar_t__,int ) ;

uint8_t FUNC_1(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{

 if (VAR_4 < VAR_2)
 {

  VAR_0 = 0;
  VAR_1 = VAR_4;

  uint8_t VAR_6[1];

  VAR_6[0] = (VAR_3 << 1) | 0x01;

  FUNC_0(VAR_6, 1, VAR_5, 0);
 }
 else
 {
  return 0;
 }
 return 1;
}
