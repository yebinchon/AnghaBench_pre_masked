
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int swap_lalt_lgui; } ;
struct TYPE_8__ {int mode; } ;







 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;




 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 TYPE_5__ VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;

bool FUNC_13(uint16_t VAR_15, keyrecord_t *VAR_16) {
  switch (VAR_15) {
    case 131:
      if (VAR_16->event.pressed) {



        FUNC_6(1UL<<VAR_8);
      }
      return 0;
      break;
    case 136:
      if (VAR_16->event.pressed) {



        FUNC_6(1UL<<VAR_5);
      }
      return 0;
      break;
    case 135:
      if (VAR_16->event.pressed) {



        FUNC_6(1UL<<VAR_6);
      }
      return 0;
      break;
    case 132:
      if (VAR_16->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;



        }
        FUNC_5(VAR_7);
        FUNC_12(VAR_7, VAR_9, VAR_4);
      } else {



        VAR_3 = 0;
        FUNC_4(VAR_7);
        FUNC_12(VAR_7, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 130:
      if (VAR_16->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;



        }
        FUNC_5(VAR_9);
        FUNC_12(VAR_7, VAR_9, VAR_4);
      } else {



        FUNC_4(VAR_9);
        VAR_3 = 0;
        FUNC_12(VAR_7, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 137:
        if (VAR_16->event.pressed) {
          FUNC_5(VAR_4);
        } else {
          FUNC_4(VAR_4);
        }
        return 0;
        break;

    case 128:







      return 0;
      break;
    case 134:
      if (VAR_16->event.pressed) {
        if(VAR_10.swap_lalt_lgui==0){
          FUNC_7(VAR_1);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_11(VAR_1);
      }
      return 0;
      break;
    case 133:
      if (VAR_16->event.pressed) {
        if(VAR_10.swap_lalt_lgui==0){
          FUNC_7(VAR_0);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_11(VAR_0);
      }
      return 0;
      break;
    case 129:







      break;
  }
  return 1;
}
