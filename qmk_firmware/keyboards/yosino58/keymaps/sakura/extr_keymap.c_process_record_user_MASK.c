
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
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

bool FUNC_7(uint16_t VAR_6, keyrecord_t *VAR_7) {
  switch (VAR_6) {
    case 131:
      if (VAR_7->event.pressed) {
        FUNC_3(1UL<<VAR_3);
      }
      return 0;
      break;
    case 132:
      if (VAR_7->event.pressed) {
        FUNC_2(VAR_2);
      } else {
        FUNC_1(VAR_2);
      }
      return 0;
      break;
    case 130:
      if (VAR_7->event.pressed) {
        FUNC_2(VAR_4);
      } else {
        FUNC_1(VAR_4);
      }
      return 0;
      break;
    case 133:
        if (VAR_7->event.pressed) {
          FUNC_2(VAR_1);
        } else {
          FUNC_1(VAR_1);
        }
        return 0;
        break;
    case 128:







      return 0;
      break;
    case 129:







      break;
  }
  return 1;
}
