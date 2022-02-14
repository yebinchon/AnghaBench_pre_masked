
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; scalar_t__ pressed; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;

void FUNC_1 (qk_tap_dance_state_t *VAR_4, void *VAR_5) {
  if (VAR_4->count == 1) {
    if (VAR_4->pressed) {
      VAR_3.state = VAR_0;
      FUNC_0(VAR_2);
    } else {
      FUNC_0(VAR_1);
    }
  }
}
