
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;




 int FUNC_0 (int ) ;

 int FUNC_1 () ;
 int FUNC_2 (int) ;






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
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_22 ;

bool FUNC_6(uint16_t VAR_23, keyrecord_t *VAR_24) {

  switch (VAR_23) {

    case 139:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_10);
        FUNC_2(3);
      } else {
        FUNC_3(VAR_1);
        FUNC_4(VAR_10);
        FUNC_1();
      }
      break;

    case 129:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_20);
        FUNC_2(4);
      } else {
        FUNC_3(VAR_7);
        FUNC_4(VAR_20);
        FUNC_1();
      }
      break;

    case 140:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_9);
        FUNC_2(0);
      } else {
        FUNC_3(VAR_0);
        FUNC_4(VAR_9);
        FUNC_1();
      }
      break;

    case 128:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_21);
        FUNC_2(6);
      } else {
        FUNC_3(VAR_8);
        FUNC_4(VAR_21);
        FUNC_1();
      }
      break;

    case 134:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_14);
        FUNC_2(8);
      } else {
        FUNC_3(VAR_5);
        FUNC_4(VAR_14);
        FUNC_1();
      }
      break;
    case 133:
      if (VAR_24->event.pressed) {
        FUNC_5(VAR_15);
        if (FUNC_0(VAR_15) && FUNC_0(VAR_16)) {
          FUNC_5(VAR_17);
        } else {
          FUNC_4(VAR_17);
        }
      } else {
        FUNC_4(VAR_15);
      }
      break;
    case 132:
      if (VAR_24->event.pressed) {
        FUNC_5(VAR_16);
        if (FUNC_0(VAR_15) && FUNC_0(VAR_16)) {
          FUNC_5(VAR_17);
        } else {
          FUNC_4(VAR_17);
        }
      } else {
        FUNC_4(VAR_16);
      }
      break;

    case 130:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_19);
        FUNC_2(5);
      } else {
        FUNC_3(VAR_6);
        FUNC_4(VAR_19);
        FUNC_1();
      }
      break;

    case 135:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_13);
        FUNC_2(1);
      } else {
        FUNC_3(VAR_4);
        FUNC_4(VAR_13);
        FUNC_1();
      }
      break;

    case 137:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_12);
        FUNC_2(7);
      } else {
        FUNC_3(VAR_3);
        FUNC_4(VAR_12);
        FUNC_1();
      }
      break;

    case 138:
      if (VAR_24->event.pressed) {
        VAR_22 = 1;
        FUNC_5(VAR_11);
        FUNC_2(2);
      } else {
        FUNC_3(VAR_2);
        FUNC_4(VAR_11);
        FUNC_1();
      }
      break;

    case 131:
      if (VAR_24->event.pressed) {
        FUNC_1();
        FUNC_5(VAR_18);
      }
      break;
    case 136:
      if (VAR_24->event.pressed) {
        FUNC_4(VAR_18);
      }
      break;
  }

  return 1;
}
