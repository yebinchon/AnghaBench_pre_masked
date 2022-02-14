
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kc2; int kc1; } ;
typedef TYPE_1__ videck_tap_dance_tuple_t ;
struct TYPE_5__ {int count; } ;
typedef TYPE_2__ qk_tap_dance_state_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1 (qk_tap_dance_state_t *VAR_0, void *VAR_1) {
  videck_tap_dance_tuple_t *const VAR_2 = (videck_tap_dance_tuple_t *)VAR_1;

  if (VAR_0->count == 1) {
    FUNC_0 (VAR_2->kc1);
  } else if (VAR_0->count == 2) {
    FUNC_0 (VAR_2->kc2);
  }
}
