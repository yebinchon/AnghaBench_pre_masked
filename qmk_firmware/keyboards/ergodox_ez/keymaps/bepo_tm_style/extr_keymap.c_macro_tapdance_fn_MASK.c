
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int count; } ;
typedef TYPE_2__ qk_tap_dance_state_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_8__ {TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3(qk_tap_dance_state_t *VAR_5, void *VAR_6) {
  uint16_t VAR_7;
  keyrecord_t VAR_8;
  FUNC_0("macro_tap_dance_fn %d\n", VAR_5->count);
  if (VAR_4) {
    VAR_7 = VAR_2;
    VAR_4 = 0;
    FUNC_1(VAR_3);
  } else if (VAR_5->count == 1) {
    VAR_7 = VAR_0;
  } else {
    VAR_7 = VAR_1;
    VAR_4 = 1;
    FUNC_1(VAR_3);
  }

  VAR_8.event.pressed = 1;
  FUNC_2(VAR_7, &VAR_8);
  VAR_8.event.pressed = 0;
  FUNC_2(VAR_7, &VAR_8);
}
