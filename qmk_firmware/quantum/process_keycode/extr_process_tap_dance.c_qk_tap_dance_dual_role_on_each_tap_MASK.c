
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int finished; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_5__ {int layer; } ;
typedef TYPE_2__ qk_tap_dance_dual_role_t ;


 int FUNC_0 (int ) ;

void FUNC_1(qk_tap_dance_state_t *VAR_0, void *VAR_1) {
    qk_tap_dance_dual_role_t *VAR_2 = (qk_tap_dance_dual_role_t *)VAR_1;

    if (VAR_0->count == 2) {
        FUNC_0(VAR_2->layer);
        VAR_0->finished = 1;
    }
}
