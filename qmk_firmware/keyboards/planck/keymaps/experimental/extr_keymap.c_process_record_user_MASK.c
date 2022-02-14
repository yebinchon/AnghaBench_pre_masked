
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

 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;

bool FUNC_19(uint16_t VAR_13, keyrecord_t *VAR_14) {
  switch (VAR_13) {
        case 137:
          if (VAR_14->event.pressed) {



            FUNC_6(1UL<<VAR_6);
          }
          break;
      return 0;
        case 142:
          if (VAR_14->event.pressed) {



            FUNC_6(1UL<<VAR_2);
          }
          break;
      return 0;
        case 141:
          if (VAR_14->event.pressed) {



            FUNC_6(1UL<<VAR_3);
          }
          break;
      return 0;
        case 139:
          if (VAR_14->event.pressed) {
            FUNC_5(VAR_4);




            FUNC_18(VAR_4, VAR_7, VAR_1);
          } else {
            FUNC_4(VAR_4);
            FUNC_18(VAR_4, VAR_7, VAR_1);
          }
          break;
      return 0;
        case 136:
          if (VAR_14->event.pressed) {
            FUNC_5(VAR_7);




            FUNC_18(VAR_4, VAR_7, VAR_1);
          } else {
            FUNC_4(VAR_7);
            FUNC_18(VAR_4, VAR_7, VAR_1);
          }
          break;
      return 0;
        case 143:
          if (VAR_14->event.pressed) {
            FUNC_7(VAR_0);



          } else {
            FUNC_17(VAR_0);
          }
        break;
      return 0;
        case 138:
          if (!VAR_14->event.pressed) {




            FUNC_5(VAR_5);
          }
        break;
      return 0;
        case 140:
          if (VAR_14->event.pressed) {



            FUNC_4(VAR_5);
          }
        break;
      return 0;

    case 128:

      if (VAR_14->event.pressed) {
        FUNC_15();
      }
      return 0;
      break;
    case 132:
      if (VAR_14->event.pressed) {
        FUNC_11();
      }
      return 0;
      break;
    case 135:
      if (VAR_14->event.pressed) {
        FUNC_8();
      }
      return 0;
      break;
    case 131:
      if (VAR_14->event.pressed) {
        FUNC_12();
      }
      return 0;
      break;
    case 134:
      if (VAR_14->event.pressed) {
        FUNC_9();
      }
      return 0;
      break;
    case 130:
      if (VAR_14->event.pressed) {
        FUNC_13();
      }
      return 0;
      break;
    case 133:
      if (VAR_14->event.pressed) {
        FUNC_10();
      }
      return 0;
      break;
    case 129:
      if (VAR_14->event.pressed) {
        FUNC_14();
      }
      return 0;
      break;


      }
  return 1;
}
