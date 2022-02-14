
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
 int FUNC_0 (int ,TYPE_3__*) ;

void FUNC_1( qk_tap_dance_state_t *VAR_3, void *VAR_4 ) {
  if ( VAR_3->count > 3 )
    return;

  keyrecord_t VAR_5;
  VAR_5.event.pressed = 0;
  uint16_t VAR_6 = VAR_2;

  if ( VAR_3->count == 1 ) {
    VAR_6 = VAR_0;
  }
  else if ( VAR_3->count == 2 ) {
    VAR_6 = VAR_2;
    VAR_5.event.pressed = 1;
  }
  else if ( VAR_3->count == 3 ) {
    VAR_6 = VAR_1;
  }

  FUNC_0( VAR_6, &VAR_5 );
}
