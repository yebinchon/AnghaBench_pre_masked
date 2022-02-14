
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



uint32_t FUNC_0(uint16_t VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
  uint16_t VAR_3 = (VAR_0 % 360) / 60;
  uint16_t VAR_4 = ((255 - VAR_1) * VAR_2)>>8;
  uint16_t VAR_5 = VAR_2;
  uint8_t VAR_6 = ((VAR_5-VAR_4) *(VAR_0%60 ) ) / 60 + VAR_4;
  uint8_t VAR_7 = ((VAR_5-VAR_4) *(60-VAR_0%60) ) / 60 + VAR_4;

  uint8_t VAR_8;
  uint8_t VAR_9;
  uint8_t VAR_10;

  switch(VAR_3) {
  case 0:
    VAR_8 = VAR_5;
    VAR_9 = VAR_6;
    VAR_10 = VAR_4;
    break;

  case 1:
    VAR_8 = VAR_7;
    VAR_9 = VAR_5;
    VAR_10 = VAR_4;
    break;

  case 2:
    VAR_8 = VAR_4;
    VAR_9 = VAR_5;
    VAR_10 = VAR_6;
    break;

  case 3:
    VAR_8 = VAR_4;
    VAR_9 = VAR_7;
    VAR_10 = VAR_5;
    break;

  case 4:
    VAR_8 = VAR_6;
    VAR_9 = VAR_4;
    VAR_10 = VAR_5;
    break;

  case 5:
    VAR_8 = VAR_5;
    VAR_9 = VAR_4;
    VAR_10 = VAR_7;
    break;
  }
  uint32_t VAR_11 = (VAR_9 << 16) | (VAR_8 << 8) | VAR_10;
  return VAR_11;
}
