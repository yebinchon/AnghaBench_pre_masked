
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__ VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_11, keyrecord_t *VAR_12) {
  switch (VAR_11) {
    case 129:
      if (VAR_12->event.pressed) {
        FUNC_7("mode just switched to qwerty and this is a huge string\n");
        FUNC_8(VAR_6);
      }
      return 0;
      break;
    case 134:
      if (VAR_12->event.pressed) {
        FUNC_8(VAR_2);
      }
      return 0;
      break;
    case 133:
      if (VAR_12->event.pressed) {
        FUNC_8(VAR_3);
      }
      return 0;
      break;
    case 131:
      if (VAR_12->event.pressed) {
        FUNC_6(VAR_4);
        FUNC_10(VAR_4, VAR_7, VAR_0);
      } else {
        FUNC_5(VAR_4);
        FUNC_10(VAR_4, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 128:
      if (VAR_12->event.pressed) {
        FUNC_6(VAR_7);
        FUNC_10(VAR_4, VAR_7, VAR_0);
      } else {
        FUNC_5(VAR_7);
        FUNC_10(VAR_4, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 135:
      if (VAR_12->event.pressed) {
        FUNC_6(VAR_1);

      } else {
        FUNC_5(VAR_1);

      }
      return 0;
      break;
    case 130:
      if (VAR_12->event.pressed) {




        FUNC_5(VAR_7);
        FUNC_5(VAR_4);
        FUNC_5(VAR_0);
        FUNC_6(VAR_5);
        if (!FUNC_2()) {
            FUNC_1();
        }
        VAR_8.raw = FUNC_3();
        VAR_8.nkro = 1;
        FUNC_4(VAR_8.raw);
      }
      return 0;
      break;
    case 132:
      if (VAR_12->event.pressed) {



        FUNC_5(VAR_5);
      }
      return 0;
      break;
  }
  return 1;
}
