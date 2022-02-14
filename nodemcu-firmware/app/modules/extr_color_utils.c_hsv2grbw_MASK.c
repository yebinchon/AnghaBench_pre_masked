
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int,int) ;

uint32_t FUNC_2(uint16_t VAR_0, uint8_t VAR_1, uint8_t VAR_2) {

  uint32_t VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

  uint8_t VAR_4 = ((VAR_3 & 0x00FF0000) >> 16);
  uint8_t VAR_5 = ((VAR_3 & 0x0000FF00) >> 8);
  uint8_t VAR_6 = (VAR_3 & 0x000000FF);


  uint8_t VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
  VAR_4 = VAR_4 - VAR_7;
  VAR_5 = VAR_5 - VAR_7;
  VAR_6 = VAR_6 - VAR_7;
  uint32_t VAR_8 = (VAR_4 << 24) | (VAR_5 << 16) | (VAR_6 << 8) | VAR_7;

  return VAR_8;
}
