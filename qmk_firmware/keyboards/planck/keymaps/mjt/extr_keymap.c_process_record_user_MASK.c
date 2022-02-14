
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int nkro; int raw; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_5__ VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (int,TYPE_2__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;

bool FUNC_15(uint16_t VAR_14, keyrecord_t *VAR_15) {
  uint16_t VAR_16 = (VAR_14 == FUNC_0(VAR_5) ? VAR_0 : VAR_14);
  if (!FUNC_10(VAR_16, VAR_15)) {
    return 0;
  }
  switch (VAR_14) {
    case 129:
      if (VAR_15->event.pressed) {



        FUNC_9(1UL<<VAR_8);
      }
      return 0;
      break;
    case 132:
      if (VAR_15->event.pressed) {
        FUNC_8(VAR_6);
        FUNC_14(VAR_6, VAR_9, VAR_4);
      } else {
        FUNC_7(VAR_6);
        FUNC_14(VAR_6, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 128:
      if (VAR_15->event.pressed) {
        FUNC_8(VAR_9);
        FUNC_14(VAR_6, VAR_9, VAR_4);
      } else {
        FUNC_7(VAR_9);
        FUNC_14(VAR_6, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 134:
      if (VAR_15->event.pressed) {
        FUNC_11(VAR_3);



      } else {
        FUNC_13(VAR_3);
      }
      return 0;
      break;
    case 130:
      if (VAR_15->event.pressed) {




        FUNC_7(VAR_9);
        FUNC_7(VAR_6);
        FUNC_7(VAR_4);
        FUNC_8(VAR_7);
        if (!FUNC_4()) {
            FUNC_3();
        }
        VAR_10.raw = FUNC_5();
        VAR_10.nkro = 1;
        FUNC_6(VAR_10.raw);
      }
      return 0;
      break;
    case 133:
      if (VAR_15->event.pressed) {



        FUNC_7(VAR_7);
      }
      return 0;
      break;
    case 131:
      if (VAR_15->event.pressed) {

          FUNC_11(VAR_3);
          FUNC_11(VAR_2);
          FUNC_11(VAR_1);
          FUNC_13(VAR_1);
          FUNC_13(VAR_2);
          FUNC_13(VAR_3);
      }
      return 0;
      break;
  }
  return 1;
}
