
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


 int FUNC_0 (int ) ;



 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_4__ VAR_8 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int ) ;

bool FUNC_12(uint16_t VAR_14, keyrecord_t *VAR_15) {
  switch (VAR_14) {
    case 129:
      if (VAR_15->event.pressed) {



        FUNC_8(1UL<<VAR_6);
      }
      return 0;
      break;
    case 131:
      if (VAR_15->event.pressed) {



        FUNC_8(1UL<<VAR_4);
      }
      return 0;
      break;
    case 128:
      if (VAR_15->event.pressed) {



        FUNC_8(1UL<<VAR_7);
      }
      return 0;
      break;
    case 130:
      if (VAR_15->event.pressed) {




        FUNC_6(VAR_4);
        FUNC_6(VAR_7);
        FUNC_6(VAR_3);
        FUNC_7(VAR_5);
        if (!FUNC_3()) {
            FUNC_2();
        }
        VAR_8.raw = FUNC_4();
        VAR_8.nkro = 1;
        FUNC_5(VAR_8.raw);
      }
      return 0;
      break;
    case 133:
      if (VAR_15->event.pressed) {



        FUNC_6(VAR_5);
      }
      return 0;
      break;
    case 132:
      if (VAR_15->event.pressed) {

          FUNC_9(VAR_2);
          FUNC_9(VAR_1);
          FUNC_9(VAR_0);
          FUNC_11(VAR_0);
          FUNC_11(VAR_1);
          FUNC_11(VAR_2);
      }
      return 0;
      break;
    case 134:
      if (VAR_15->event.pressed) {
        FUNC_9(VAR_2);



      } else {
        FUNC_11(VAR_2);
      }
      return 0;
      break;
    }
    return 1;
}
