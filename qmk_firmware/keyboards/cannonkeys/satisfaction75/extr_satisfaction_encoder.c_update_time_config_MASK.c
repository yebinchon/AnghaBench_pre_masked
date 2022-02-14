
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(int8_t VAR_6){
  uint8_t VAR_7 = 31;
  uint16_t VAR_8 = 1980 + VAR_5;
  switch(VAR_4){
    case 0:
    default:
      VAR_1 = (VAR_1 + VAR_6) % 24;
      if (VAR_1 < 0){
        VAR_1 += 24;
      }
      break;
    case 1:
      VAR_2 = (VAR_2 + VAR_6) % 60;
      if (VAR_2 < 0){
        VAR_2 += 60;
      }
      break;
    case 2:
      VAR_5 += VAR_6;
      break;
    case 3:
      VAR_3 = (VAR_3 % 12) + VAR_6;
      if (VAR_3 <= 0){
        VAR_3 += 12;
      }
      break;
    case 4:
      if (VAR_3 == 9 || VAR_3 == 4 || VAR_3 == 6 || VAR_3 == 11){
        VAR_7 = 30;
      } else if(VAR_3 == 2){
        VAR_7 = VAR_8 % 4 == 0 && !(VAR_8 % 100 == 0 && VAR_8 % 400 != 0) ? 29 : 28;
      }
      VAR_0 = (VAR_0 % VAR_7) + VAR_6;
      if(VAR_0 <= 0){
        VAR_0 += VAR_7;
      }
      break;
  }
}
