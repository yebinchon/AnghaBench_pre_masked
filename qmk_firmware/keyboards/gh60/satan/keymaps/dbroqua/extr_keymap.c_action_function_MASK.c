
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(keyrecord_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2) {
  switch (VAR_1) {
    case 128:
      if (VAR_0->event.pressed) {
        FUNC_7();
      }
      break;
    case 132:
      if (VAR_0->event.pressed) {
        FUNC_3();
      }
      break;
    case 135:
      if (VAR_0->event.pressed) {
        FUNC_0();
      }
      break;
    case 131:
      if (VAR_0->event.pressed) {
        FUNC_4();
      }
      break;
    case 134:
      if (VAR_0->event.pressed) {
        FUNC_1();
      }
      break;
    case 130:
      if (VAR_0->event.pressed) {
        FUNC_5();
      }
      break;
    case 133:
      if (VAR_0->event.pressed) {
        FUNC_2();
      }
      break;
    case 129:
      if (VAR_0->event.pressed) {
        FUNC_6();
      }
      break;
  }
}
