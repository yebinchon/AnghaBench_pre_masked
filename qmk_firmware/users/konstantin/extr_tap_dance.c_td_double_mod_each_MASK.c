
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int weak_mods; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_5__ {int kc2; int kc1; } ;
typedef TYPE_2__ qk_tap_dance_pair_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(qk_tap_dance_state_t *VAR_0, void *VAR_1) {
    qk_tap_dance_pair_t *VAR_2 = (qk_tap_dance_pair_t *)VAR_1;


    if (VAR_0->count == 1 || VAR_0->count == 3) {
        FUNC_1(VAR_2->kc1);
    } else if (VAR_0->count == 2) {
        FUNC_2(VAR_2->kc1);
        FUNC_1(VAR_2->kc2);
    }

    VAR_0->weak_mods &= ~(FUNC_0(VAR_2->kc1) | FUNC_0(VAR_2->kc2));
}
