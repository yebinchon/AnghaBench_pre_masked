
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int,int,int) ;

void FUNC_1(uint8_t VAR_0, uint16_t VAR_1, uint8_t VAR_2, uint8_t VAR_3) {
  uint8_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

  if (VAR_2 == 0) {
    VAR_4 = VAR_3;
    VAR_5 = VAR_3;
    VAR_6 = VAR_3;
  } else {
    VAR_7 = ((255 - VAR_2) * VAR_3) >> 8;
    VAR_8 = (VAR_3 - VAR_7) * (VAR_1 % 60) / 60;

    switch (VAR_1 / 60) {
      case 0:
        VAR_4 = VAR_3;
        VAR_5 = VAR_7 + VAR_8;
        VAR_6 = VAR_7;
        break;
      case 1:
        VAR_4 = VAR_3 - VAR_8;
        VAR_5 = VAR_3;
        VAR_6 = VAR_7;
        break;
      case 2:
        VAR_4 = VAR_7;
        VAR_5 = VAR_3;
        VAR_6 = VAR_7 + VAR_8;
        break;
      case 3:
        VAR_4 = VAR_7;
        VAR_5 = VAR_3 - VAR_8;
        VAR_6 = VAR_3;
        break;
      case 4:
        VAR_4 = VAR_7 + VAR_8;
        VAR_5 = VAR_7;
        VAR_6 = VAR_3;
        break;
      case 5:
        VAR_4 = VAR_3;
        VAR_5 = VAR_7;
        VAR_6 = VAR_3 - VAR_8;
        break;
    }
  }

  FUNC_0(VAR_0, VAR_4, VAR_5, VAR_6);
}
