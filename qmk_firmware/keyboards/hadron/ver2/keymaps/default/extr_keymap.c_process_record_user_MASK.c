
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;





 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

bool FUNC_10(uint16_t VAR_10, keyrecord_t *VAR_11) {
  switch (VAR_10) {
    case 130:
      if (VAR_11->event.pressed) {
        FUNC_7(VAR_7);
      }
      return 0;
      break;
    case 133:
      if (VAR_11->event.pressed) {
        FUNC_7(VAR_5);
      }
      return 0;
      break;
    case 131:
      if (VAR_11->event.pressed) {


        if (VAR_1) {} else {
          VAR_2 = VAR_9.mode;
          VAR_1 = 1;
        }
        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;
          FUNC_5(16);
        }
        FUNC_3(VAR_6);
        FUNC_9(VAR_6, VAR_8, VAR_4);
      } else {
        FUNC_5(VAR_2);
        VAR_3 = 0;
        FUNC_2(VAR_6);
        FUNC_9(VAR_6, VAR_8, VAR_4);
      }
      return 0;
      break;
    case 129:
      if (VAR_11->event.pressed) {


        if (VAR_1) {} else {
          VAR_2 = VAR_9.mode;
          VAR_1 = 1;
        }
        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;
          FUNC_5(15);
        }
        FUNC_3(VAR_8);
        FUNC_9(VAR_6, VAR_8, VAR_4);
      } else {
        FUNC_5(VAR_2);
        FUNC_2(VAR_8);
        VAR_3 = 0;
        FUNC_9(VAR_6, VAR_8, VAR_4);
      }
      return 0;
      break;
    case 134:
      if (VAR_11->event.pressed) {
        FUNC_4(VAR_0);



      } else {
        FUNC_8(VAR_0);
      }
      return 0;
      break;
    case 128:

      if (VAR_11->event.pressed) {
        FUNC_5(VAR_2);
        FUNC_6();
        VAR_2 = VAR_9.mode;
      }
      return 0;
      break;
    case 132:
      if (VAR_11->event.pressed) {
        FUNC_0("hello world");
      }
      return 0;
      break;
  }
  return 1;
}
