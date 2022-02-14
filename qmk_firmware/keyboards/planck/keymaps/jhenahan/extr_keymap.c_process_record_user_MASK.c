
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int nkro; int raw; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_4__ VAR_15 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (int ,int ,int ) ;

bool FUNC_14(uint16_t VAR_20, keyrecord_t *VAR_21) {
  switch (VAR_20) {
    case 128:
      if (VAR_21->event.pressed) {



        FUNC_9(1UL<<VAR_14);
      }
      return 0;
      break;
    case 135:
      if (VAR_21->event.pressed) {
        FUNC_8(VAR_9);
        FUNC_11(VAR_9, VAR_7);
        FUNC_2(VAR_6);
      }
      return 0;
      break;
    case 131:
      if (VAR_21->event.pressed) {



        FUNC_9(1UL<<VAR_12);
      }
      return 0;
      break;
    case 133:
      if (VAR_21->event.pressed) {
        FUNC_8(VAR_10);
        FUNC_13(VAR_10, VAR_13, VAR_8);
      } else {
        FUNC_7(VAR_10);
        FUNC_13(VAR_10, VAR_13, VAR_8);
      }
      return 0;
      break;
    case 130:
      if (VAR_21->event.pressed) {
        FUNC_8(VAR_13);
        FUNC_13(VAR_10, VAR_13, VAR_8);
      } else {
        FUNC_7(VAR_13);
        FUNC_13(VAR_10, VAR_13, VAR_8);
      }
      return 0;
      break;
    case 132:
      if (VAR_21->event.pressed) {




        FUNC_7(VAR_13);
        FUNC_7(VAR_10);
        FUNC_7(VAR_8);
        FUNC_8(VAR_11);
        if (!FUNC_4()) {
            FUNC_3();
        }
        VAR_15.raw = FUNC_5();
        VAR_15.nkro = 1;
        FUNC_6(VAR_15.raw);
      }
      return 0;
      break;
    case 134:
      if (VAR_21->event.pressed) {



        FUNC_7(VAR_11);
      }
      return 0;
      break;
  case 129:
    if (VAR_21->event.pressed) {
      FUNC_10(VAR_3);
      FUNC_10(VAR_5);
      FUNC_10(VAR_4);
      FUNC_10(VAR_0);
      FUNC_10(VAR_2);
      FUNC_10(VAR_1);
      FUNC_1();
    }
    return 0;
    break;
  }
  return 1;
}
