
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


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_5__ VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;

bool FUNC_14(uint16_t VAR_13, keyrecord_t *VAR_14) {
  uint16_t VAR_15 = (VAR_13 == 132 ? VAR_0 : VAR_13);
  if (!FUNC_9(VAR_15, VAR_14)) {
    return 0;
  }
  switch (VAR_13) {
    case 128:
      if (VAR_14->event.pressed) {



        FUNC_8(1UL<<VAR_8);
      }
      return 0;
      break;
    case 132:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_5);
        FUNC_13(VAR_5, VAR_6, VAR_4);
      } else {
        FUNC_6(VAR_5);
        FUNC_13(VAR_5, VAR_6, VAR_4);
      }
      return 0;
      break;
    case 130:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_6);
        FUNC_13(VAR_5, VAR_6, VAR_4);
      } else {
        FUNC_6(VAR_6);
        FUNC_13(VAR_5, VAR_6, VAR_4);
      }
      return 0;
      break;
    case 134:
      if (VAR_14->event.pressed) {
        FUNC_10(VAR_3);



      } else {
        FUNC_12(VAR_3);
      }
      return 0;
      break;
    case 129:
      if (VAR_14->event.pressed) {




        FUNC_6(VAR_6);
        FUNC_6(VAR_5);
        FUNC_6(VAR_4);
        FUNC_7(VAR_7);
        if (!FUNC_3()) {
            FUNC_2();
        }
        VAR_9.raw = FUNC_4();
        VAR_9.nkro = 1;
        FUNC_5(VAR_9.raw);
      }
      return 0;
      break;
    case 133:
      if (VAR_14->event.pressed) {



        FUNC_6(VAR_7);
      }
      return 0;
      break;
    case 131:
      if (VAR_14->event.pressed) {

          FUNC_10(VAR_3);
          FUNC_10(VAR_2);
          FUNC_10(VAR_1);
          FUNC_12(VAR_1);
          FUNC_12(VAR_2);
          FUNC_12(VAR_3);
      }
      return 0;
      break;
  }
  return 1;
}
