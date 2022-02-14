
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
 int FUNC_0 (int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_4__ VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

bool FUNC_15(uint16_t VAR_12, keyrecord_t *VAR_13) {
  switch (VAR_12) {
    case 128:
      if (VAR_13->event.pressed) {
        FUNC_8("mode just switched to qwerty and this is a huge string\n");
        FUNC_10(VAR_7);
      }
      return 0;
      break;
    case 132:
      if (VAR_13->event.pressed) {
        FUNC_10(VAR_3);
      }
      return 0;
      break;
    case 131:
      if (VAR_13->event.pressed) {
        FUNC_10(VAR_4);
      }
      return 0;
      break;
    case 133:
      if (VAR_13->event.pressed) {
        FUNC_9(VAR_1);






      } else {
        FUNC_12(VAR_1);



      }
      return 0;
      break;
    case 129:
      if (VAR_13->event.pressed) {




        FUNC_6(VAR_8);
        FUNC_6(VAR_5);
        FUNC_6(VAR_2);
        FUNC_7(VAR_6);
        if (!FUNC_3()) {
            FUNC_2();
        }
        VAR_9.raw = FUNC_4();
        VAR_9.nkro = 1;
        FUNC_5(VAR_9.raw);
      }
      return 0;
      break;
    case 130:
      if (VAR_13->event.pressed) {



        FUNC_6(VAR_6);
      }
      return 0;
      break;
  }
  return 1;
}
