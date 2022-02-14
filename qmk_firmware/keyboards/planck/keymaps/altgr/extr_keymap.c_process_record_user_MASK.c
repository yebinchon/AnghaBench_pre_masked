
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int pressed; } ;
struct TYPE_12__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;






 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 () ;
 int VAR_29 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int VAR_30 ;

bool FUNC_9(uint16_t VAR_31, keyrecord_t *VAR_32)
{
  switch (VAR_31) {
    case 171:
      if (VAR_32->event.pressed) {
        VAR_29 = VAR_29 | VAR_0;
        if (VAR_29 == VAR_1) {
          FUNC_0();
        }
      }
      else {
        VAR_29 = VAR_29 & ~VAR_0;
      }
      return 0;
    case 170:
      if (VAR_32->event.pressed) {
        VAR_29 = VAR_29 | VAR_2;
        if (VAR_29 == VAR_1) {
          FUNC_0();
        }
      }
      else {
        VAR_29 = VAR_29 & ~VAR_2;
      }
      return 0;
    case 172:
      FUNC_7(VAR_32, VAR_11);
      break;
    case 163:
      FUNC_7(VAR_32, VAR_14);
      break;
    case 162:
      FUNC_7(VAR_32, VAR_12);
      break;
    case 150:






      FUNC_6(VAR_32, VAR_26);
      break;
    case 149:
    case 132:
      FUNC_6(VAR_32, VAR_28);

      FUNC_8(VAR_32, VAR_20, 0, 0, VAR_28, VAR_24);
      break;
    case 148:
      FUNC_7(VAR_32, VAR_11);
      break;
    case 147:
      FUNC_7(VAR_32, VAR_12);
      break;
    case 146:
      FUNC_7(VAR_32, VAR_14);
      break;
    case 139:

      FUNC_3(VAR_32, VAR_14, 0, VAR_5);
      break;
    case 138:

      FUNC_3(VAR_32, VAR_15, 0, VAR_3);
      break;
    case 137:

      FUNC_3(VAR_32, VAR_11, VAR_15, VAR_9);
      break;
    case 136:

      FUNC_3(VAR_32, VAR_14, VAR_15, VAR_10);
      break;
    case 133:

      FUNC_3(VAR_32, VAR_14, VAR_15, VAR_17);
      break;
    case 135:

      FUNC_3(VAR_32, VAR_12, 0, VAR_6);
      break;
    case 134:

      FUNC_3(VAR_32, VAR_11, 0, VAR_4);
      break;
    case 151:
      FUNC_6(VAR_32, VAR_25);

      FUNC_8(VAR_32, VAR_18, 0, 0, VAR_25, VAR_28);
      break;
    case 142:
      FUNC_6(VAR_32, VAR_25);

      FUNC_8(VAR_32, VAR_20, VAR_21, VAR_13, VAR_25, VAR_24);
      break;
    case 131:
      FUNC_6(VAR_32, VAR_25);

      FUNC_8(VAR_32, VAR_20, VAR_19, VAR_8, VAR_25, VAR_24);
      break;
    case 141:

      FUNC_2(VAR_32, VAR_7, VAR_22);
      break;
    case 140:

      FUNC_2(VAR_32, VAR_16, VAR_23);
      break;
    case 130:
      FUNC_6(VAR_32, VAR_27);

      break;
    case 129:
      FUNC_6(VAR_32, VAR_24);

      FUNC_8(VAR_32, VAR_18, 0, 0, VAR_24, VAR_28);
      break;
    case 143:
      if (VAR_32->event.pressed) {
        FUNC_0();
      }
      return 0;
    case 144:
      FUNC_4(VAR_32);
      return 0;
    case 145:
      FUNC_5(VAR_32);
      return 0;
  }
  return 1;
}
