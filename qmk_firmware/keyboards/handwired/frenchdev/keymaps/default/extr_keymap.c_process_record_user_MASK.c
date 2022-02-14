
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

bool FUNC_13(uint16_t VAR_17, keyrecord_t *VAR_18) {
  switch(VAR_17) {
    case 135:
      if (VAR_18->event.pressed) {
        FUNC_3(1);
        FUNC_6 (VAR_8);
        VAR_13 = FUNC_11();
      } else {
        if (FUNC_10(VAR_13) < VAR_9) {
           FUNC_8 (VAR_6);
        }
        FUNC_12 (VAR_8);
        FUNC_2(1);
      }
      break;
    case 133:
      if (VAR_18->event.pressed) {
        FUNC_3(2);
        VAR_14 = FUNC_11();
      } else {
        if (FUNC_10(VAR_14) < VAR_10) {
           FUNC_8 (VAR_5);
        }
        FUNC_2(2);
      }
      break;
    case 131:
      if (VAR_18->event.pressed) {
        FUNC_1();
      } else {
        FUNC_7();
      }
      break;
    case 130:
      if (VAR_18->event.pressed) {
        FUNC_1();
        VAR_15 = FUNC_11();
      } else {
        if (FUNC_10(VAR_15) < VAR_9) {
          FUNC_5();
        }
        FUNC_7();
      }
      break;
    case 129:
      if (VAR_18->event.pressed) {
        FUNC_1();
        VAR_15 = FUNC_11();
      } else {
        if (FUNC_10(VAR_15) < VAR_9) {
          FUNC_5();
        }
        FUNC_7();
      }
      break;
    case 136:
      if (VAR_18->event.pressed) {
        FUNC_3(1);
        VAR_11 = FUNC_11();
      } else {
        if (FUNC_10(VAR_11) < VAR_9) {
          FUNC_4();
        }
        FUNC_2(1);
      }
      break;
    case 140:
      if (VAR_18->event.pressed) {
        FUNC_3(2);
        VAR_12 = FUNC_11();
      } else {
        if (FUNC_10(VAR_12) < VAR_9) {
           FUNC_8 (VAR_7);
        }
        VAR_16 = 0;
        FUNC_2(2);
      }
      break;
    case 139:
      if (VAR_18->event.pressed) {
        VAR_12 = FUNC_11();
        FUNC_3(2);
      } else {
        if (FUNC_10(VAR_12) < VAR_9 && VAR_16 == 0) {
          VAR_16 = 1;
          FUNC_3(2);
        } else {
          VAR_16 = 0;
          FUNC_2(2);
        }
      }
      break;
    case 128:
      if (VAR_18->event.pressed) {
        FUNC_9(FUNC_0(VAR_4));
      }
      break;
    case 137:
      if (VAR_18->event.pressed) {
        FUNC_9(FUNC_0(VAR_3));
      }
      break;
    case 138:
      if (VAR_18->event.pressed) {
        FUNC_9(FUNC_0(VAR_0));
      }
      break;
    case 134:
      if (VAR_18->event.pressed) {
        FUNC_9(FUNC_0(VAR_2));
      }
      break;
    case 132:
      if (VAR_18->event.pressed) {
        FUNC_9(FUNC_0(VAR_1));
      }
      break;
  }
  return 1;
}
