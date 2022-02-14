
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int pressed; } ;
typedef TYPE_1__ keyevent_t ;



 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;


 int const VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int const VAR_22 ;
 int VAR_23 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(const uint16_t VAR_24, const uint8_t VAR_25, const keyevent_t VAR_26)
{

  if(!VAR_26.pressed)
  {
    switch(VAR_24)
    {

      case 131:
      case 135:
        return 0;
        break;
    }

    return -1;
  }


  char VAR_27;
  if((FUNC_0() & VAR_23))
  {
    switch(VAR_24)
    {
      case 147:
        VAR_27 = VAR_4;
        break;
      case 150:
        VAR_27 = VAR_8;
        break;
      case 142:
        VAR_27 = VAR_1;
        break;
      case 138:
        VAR_27 = VAR_1;
        break;
      case 149:
        VAR_27 = VAR_10;
        break;
      case 148:
        VAR_27 = VAR_13;
        break;
      case 141:
        VAR_27 = VAR_13;
        break;
      case 130:
        VAR_27 = VAR_2;
        break;
      case 145:
        VAR_27 = VAR_0;
        break;
      case 128:
        VAR_27 = VAR_3;
        break;
      case 136:
        VAR_27 = VAR_12;
        break;
      default:
        return -1;
        break;
    }
    return VAR_27;
  }




  if (VAR_24 == VAR_20 || VAR_24 == 150) {
    return '0';
  } else if (VAR_24 >= VAR_21 && VAR_24 <= VAR_22) {
    return VAR_24 - VAR_21 +1 + '0';
  } else if (VAR_24 >= VAR_19 && VAR_24 <= 147) {
    return VAR_24 - VAR_19 +1 + '0';
  }


  switch (VAR_24) {
    case 134:
    case 139:
      return VAR_27 = VAR_17;
    case 129:
    case 137:
      return VAR_27 = VAR_7;
    case 130:
      return VAR_27 = VAR_15;
    case 145:
      return VAR_27 = VAR_5;
    case 128:
      return VAR_27 = VAR_18;
    case 132:
      return VAR_27 = VAR_16;
    case 136:
      return VAR_27 = VAR_11;
    case 144:
    case 140:
      return VAR_27 = VAR_6;
    case 133:
      return VAR_27 = VAR_14;
    case 143:
      return VAR_27 = VAR_9;
    case 146:
      return -2;
    case 131:
      return 0;
    case 135:
      return 0;
    case 152:
      return -3;
    case 151:
      return -4;
    default:
      return -1;
  }
}
