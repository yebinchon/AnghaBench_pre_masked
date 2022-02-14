
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {int buttons; } ;
typedef TYPE_2__ report_mouse_t ;
struct TYPE_8__ {int pressed; } ;
struct TYPE_10__ {TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;
struct TYPE_11__ {int mode; } ;




 int VAR_0 ;




 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 TYPE_2__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__) ;
 TYPE_4__ VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_8, keyrecord_t *VAR_9) {
  report_mouse_t VAR_10 = {};
  switch (VAR_8) {
    case 132:
      if (VAR_9->event.pressed) {
        FUNC_3(1UL<<VAR_4);
      }
      return 0;
    case 134:
      if (VAR_9->event.pressed) {
        FUNC_2(VAR_3);
        FUNC_10(VAR_3, VAR_5, VAR_2);
      } else {
        FUNC_1(VAR_3);
        FUNC_10(VAR_3, VAR_5, VAR_2);
      }
      return 0;
    case 131:
      if (VAR_9->event.pressed) {
        FUNC_2(VAR_5);
        FUNC_10(VAR_3, VAR_5, VAR_2);
      } else {
        FUNC_1(VAR_5);
        FUNC_10(VAR_3, VAR_5, VAR_2);
      }
      return 0;
    case 129:







      return 0;
    case 130:







      break;
    case 133:
      VAR_10 = FUNC_4();
      if (VAR_9->event.pressed) {
        VAR_10.buttons |= VAR_0;
      }
      else {
        VAR_10.buttons &= ~VAR_0;
      }
      FUNC_6(VAR_10);
      FUNC_5();
      return 0;
    case 128:
      if (VAR_9->event.pressed) {
        VAR_6 = 1;
      }
      else {
        VAR_6 = 0;
      }
      return 0;
  }
  return 1;
}
