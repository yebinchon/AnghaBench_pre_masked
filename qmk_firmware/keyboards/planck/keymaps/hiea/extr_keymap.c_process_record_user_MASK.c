
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int pressed; } ;
struct TYPE_11__ {TYPE_1__ event; } ;
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
 int FUNC_0 () ;
 int VAR_26 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int VAR_27 ;

bool FUNC_8(uint16_t VAR_28, keyrecord_t *VAR_29)
{
  switch (VAR_28) {
    case 165:
      if (VAR_29->event.pressed) {
        VAR_26 = VAR_26 | VAR_0;
        if (VAR_26 == VAR_1) {
          FUNC_0();
        }
      }
      else {
        VAR_26 = VAR_26 & ~VAR_0;
      }
      return 0;
    case 164:
      if (VAR_29->event.pressed) {
        VAR_26 = VAR_26 | VAR_2;
        if (VAR_26 == VAR_1) {
          FUNC_0();
        }
      }
      else {
        VAR_26 = VAR_26 & ~VAR_2;
      }
      return 0;
    case 166:




      FUNC_6(VAR_29, VAR_9);
      break;
    case 157:




      FUNC_6(VAR_29, VAR_12);
      break;
    case 156:




      FUNC_6(VAR_29, VAR_10);
      break;
    case 146:






      FUNC_5(VAR_29, VAR_23);
      break;
    case 145:
    case 132:
      FUNC_5(VAR_29, VAR_25);

      FUNC_7(VAR_29, VAR_18, 0, 0, VAR_25, VAR_21);
      break;
    case 144:
      FUNC_6(VAR_29, VAR_9);
      break;
    case 143:
      FUNC_6(VAR_29, VAR_10);
      break;
    case 142:
      FUNC_6(VAR_29, VAR_12);
      break;
    case 138:

      FUNC_3(VAR_29, VAR_12, 0, VAR_5);
      break;
    case 137:

      FUNC_3(VAR_29, VAR_13, 0, VAR_3);
      break;
    case 136:

      FUNC_3(VAR_29, VAR_9, VAR_13, VAR_7);
      break;
    case 135:

      FUNC_3(VAR_29, VAR_10, VAR_13, VAR_8);
      break;
    case 133:

      FUNC_3(VAR_29, VAR_12, VAR_13, VAR_15);
      break;
    case 134:

      FUNC_3(VAR_29, VAR_9, 0, VAR_4);
      break;
    case 147:
      FUNC_5(VAR_29, VAR_22);

      FUNC_7(VAR_29, VAR_16, 0, 0, VAR_22, VAR_25);
      break;
    case 140:
      FUNC_5(VAR_29, VAR_22);

      FUNC_7(VAR_29, VAR_18, VAR_19, VAR_11, VAR_22, VAR_21);
      break;
    case 131:
      FUNC_5(VAR_29, VAR_22);

      FUNC_7(VAR_29, VAR_18, VAR_17, VAR_6, VAR_22, VAR_21);
      break;
    case 139:

      FUNC_2(VAR_29, VAR_14, VAR_20);
      break;
    case 130:
      FUNC_5(VAR_29, VAR_24);

      break;
    case 129:
      FUNC_5(VAR_29, VAR_21);

      FUNC_7(VAR_29, VAR_16, 0, 0, VAR_21, VAR_25);
      break;
    case 141:
      FUNC_4(VAR_29);
      return 0;
  }
  return 1;
}
