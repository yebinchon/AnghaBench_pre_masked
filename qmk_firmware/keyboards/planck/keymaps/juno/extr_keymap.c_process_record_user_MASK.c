
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
 int FUNC_0 (int ) ;

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
 int FUNC_1 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_4__ VAR_16 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

bool FUNC_14(uint16_t VAR_19, keyrecord_t *VAR_20) {
  switch (VAR_19) {
    case 128:
      if (VAR_20->event.pressed) {
        FUNC_9("mode just switched to qwerty and this is a huge string\n");
        FUNC_11(VAR_10);
      }
      return 0;
      break;
    case 135:
      if (VAR_20->event.pressed) {
        FUNC_11(VAR_4);
      }
      return 0;
      break;
    case 132:
      if (VAR_20->event.pressed) {
        FUNC_11(VAR_6);
      }
      return 0;
      break;
    case 136:
      if (VAR_20->event.pressed) {
        FUNC_10(VAR_0);






      } else {
        FUNC_13(VAR_0);



      }
      return 0;
      break;
    case 129:
      if (VAR_20->event.pressed) {




        FUNC_7(VAR_11);
        FUNC_7(VAR_8);
        FUNC_7(VAR_3);
        FUNC_8(VAR_9);
        if (!FUNC_3()) {
            FUNC_2();
        }
        VAR_16.raw = FUNC_4();
        VAR_16.nkro = 1;
        FUNC_5(VAR_16.raw);
      }
      return 0;
      break;
    case 131:
      if (VAR_20->event.pressed) {



        FUNC_7(VAR_9);
      }
      return 0;
      break;




 case 130:
  if (VAR_20->event.pressed) {







  }
  return 1;

 case 133:
  if (VAR_20->event.pressed) {

  } else {




   FUNC_7(VAR_7);
   FUNC_8(VAR_5);
  }

 case 134:
  if (VAR_20->event.pressed) {




   FUNC_7(VAR_5);
  }
    }
  return 1;
}
