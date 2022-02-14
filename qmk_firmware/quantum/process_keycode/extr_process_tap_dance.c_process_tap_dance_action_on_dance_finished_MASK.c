
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int on_dance_finished; } ;
struct TYPE_7__ {int finished; int weak_mods; int oneshot_mods; } ;
struct TYPE_6__ {TYPE_1__ fn; int user_data; TYPE_4__ state; } ;
typedef TYPE_2__ qk_tap_dance_action_t ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(qk_tap_dance_action_t *VAR_0) {
    if (VAR_0->state.finished) return;
    VAR_0->state.finished = 1;
    FUNC_1(VAR_0->state.oneshot_mods);
    FUNC_2(VAR_0->state.weak_mods);
    FUNC_3();
    FUNC_0(&VAR_0->state, VAR_0->user_data, VAR_0->fn.on_dance_finished);
}
