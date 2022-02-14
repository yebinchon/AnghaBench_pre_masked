
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int* VAR_0 ;
 int* VAR_1 ;

void FUNC_0(uint16_t VAR_2, uint8_t *VAR_3, uint8_t *VAR_4) {
  uint8_t VAR_5 = 20, VAR_6 = 20;
  for (uint8_t VAR_7 = 0; VAR_7 < 12; VAR_7++) {
    if ((VAR_2 & 0b1) == 1) {
      if (VAR_5 == 20) {
        VAR_5 = VAR_7;
      } else if (VAR_6 == 20) {
        VAR_6 = VAR_7;
      }
    }
    VAR_2 = VAR_2 >> 1;
  }

  for (uint8_t VAR_8 = 0; VAR_8 < 6; VAR_8++) {
    if (VAR_1[VAR_8] == VAR_5 || VAR_1[VAR_8] == VAR_6) {
      *VAR_4 = VAR_8;
    }
    if (VAR_0[VAR_8] == VAR_5 || VAR_0[VAR_8] == VAR_6) {
      *VAR_3 = VAR_8;
    }
  }
}
