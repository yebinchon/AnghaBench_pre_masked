
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
struct TYPE_7__ {int swap_lalt_lgui; } ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_10, keyrecord_t *VAR_11) {
  switch (VAR_10) {
    case 129:
      if (VAR_11->event.pressed) {



        FUNC_7(VAR_5);
      }
      return 0;
      break;
    case 134:
      if (VAR_11->event.pressed) {



        FUNC_7(VAR_2);
      }
      return 0;
      break;
    case 133:
      if (VAR_11->event.pressed) {



        FUNC_7(VAR_3);
      }
      return 0;
      break;
    case 132:
      if (VAR_11->event.pressed) {



        FUNC_7(VAR_4);
      }
      return 0;
      break;
    case 131:
      if (VAR_11->event.pressed) {
        if(VAR_6.swap_lalt_lgui==0){
          FUNC_4(VAR_1);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_6(VAR_1);
      }
      return 0;
      break;
    case 130:
      if (VAR_11->event.pressed) {
        if(VAR_6.swap_lalt_lgui==0){
          FUNC_4(VAR_0);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_6(VAR_0);
      }
      return 0;
      break;
    case 128:






      break;
  }
  return 1;
}
