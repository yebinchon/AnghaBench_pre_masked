
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;

bool FUNC_10(uint16_t VAR_8, keyrecord_t *VAR_9) {
  switch (VAR_8) {

    case 130:
      if (VAR_9->event.pressed) {




      }
      return 0;
      break;
    case 131:
      if (VAR_9->event.pressed) {




      }
      return 0;
      break;
    case 132:
      if (VAR_9->event.pressed) {




      }
      return 0;
      break;
    case 129:
      if (VAR_9->event.pressed) {




      }
      return 0;
      break;
    case 128:
      if (VAR_9->event.pressed) {




      }
      return 0;
      break;
    case 135:
      if (VAR_9->event.pressed) {
        if(VAR_5) {
        FUNC_1();
        VAR_5 = 0;
        } else {
        FUNC_2();
        VAR_5 = 1;
        }
      }
      return 0;
      break;
    case 134:
      if (VAR_9->event.pressed) {
        if(VAR_6) {
        FUNC_3();
        VAR_6 = 0;
        } else {
        FUNC_4();
        VAR_6 = 1;
        }
      }
      return 0;
      break;
    case 133:
      if (VAR_9->event.pressed) {
        if(VAR_7) {
        FUNC_5();
        VAR_7 = 0;
        } else {
        FUNC_6();
        VAR_7 = 1;
        }
      }
      return 0;
      break;
  }
  return 1;
}
