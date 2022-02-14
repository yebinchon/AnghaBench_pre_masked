
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



 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

bool FUNC_10(uint16_t VAR_8, keyrecord_t *VAR_9) {
  switch (VAR_8) {
    case 128:
      if (VAR_9->event.pressed) {
        FUNC_7("mode just switched to qwerty and this is a huge string\n");
        FUNC_8(VAR_3);
      }
      return 0;
      break;
    case 129:
      if (VAR_9->event.pressed) {




        FUNC_5(VAR_4);
        FUNC_5(VAR_1);
        FUNC_5(VAR_0);
        FUNC_6(VAR_2);
        if (!FUNC_2()) {
            FUNC_1();
        }
        VAR_5.raw = FUNC_3();
        VAR_5.nkro = 1;
        FUNC_4(VAR_5.raw);
      }
      return 0;
      break;
    case 130:
      if (VAR_9->event.pressed) {



        FUNC_5(VAR_2);
      }
      return 0;
      break;
  }
  return 1;
}
