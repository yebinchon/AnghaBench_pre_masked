
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;

bool FUNC_1(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {
    case 132:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_2);
      }
      break;
    case 133:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_1);
      }
      break;
    case 128:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_6);
      }
      break;
    case 130:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_4);
      }
      break;
    case 129:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_5);
      }
      break;
    case 134:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_0);
      }
      break;
    case 131:
      if (VAR_8->event.pressed) {
        FUNC_0(VAR_3);
      }
      break;
  }
  return 1;
}
