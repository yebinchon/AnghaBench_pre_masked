
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;

void FUNC_2 (qk_tap_dance_state_t *VAR_4, void *VAR_5) {
  if (VAR_4->count == 1) {
    FUNC_1(VAR_0);
    if (VAR_3) {
      FUNC_1(VAR_2);
    }
  } else if (VAR_4->count == 2) {
    FUNC_0(2, VAR_1, 0);
  } else if (VAR_4->count == 3) {
    FUNC_0(2, VAR_1, 1);
  }
}
