
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_5__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void FUNC_3 (qk_tap_dance_state_t *VAR_3, void *VAR_4) {
  if (VAR_3->count == 1) {
    if (VAR_2->mods & FUNC_0(VAR_0)) {
      FUNC_1 (VAR_0);
    } else {
      FUNC_1 (VAR_1);
    }
  } else if (VAR_3->count == 2) {
    FUNC_2(FUNC_0(VAR_0));
    FUNC_1(VAR_1);
  }
}
