
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,char*,int ,int ,int ) ;
 int VAR_3 ;

void FUNC_2(int8_t VAR_4, int8_t VAR_5, bool VAR_6){
  if(VAR_6){
    FUNC_1(VAR_4 + 1, VAR_5 + 2, "ENC", VAR_1, VAR_0, 0);
  } else {
    VAR_4 -= 22;
  }
  FUNC_0(VAR_4 + 22, VAR_5 + 1, 3 + (3 * 6), 9, VAR_1, VAR_0);
  char* VAR_7 = "";
  switch(VAR_3){
    default:
    case 128:
      VAR_7 = "VOL";
      break;
    case 130:
      VAR_7 = "MED";
      break;
    case 129:
      VAR_7 = "SCR";
      break;
    case 135:
      VAR_7 = "BRT";
      break;
    case 136:
      VAR_7 = "BKL";
      break;
    case 134:
      VAR_7 = "CLK";
      break;
    case 133:
      VAR_7 = "CS0";
      break;
    case 132:
      VAR_7 = "CS1";
      break;
    case 131:
      VAR_7 = "CS2";
      break;
  }
  FUNC_1(VAR_4 + 24, VAR_5 + 2, VAR_7, VAR_1, VAR_2, 0);
}
