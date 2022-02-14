
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int pressed; scalar_t__ interrupted; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(qk_tap_dance_state_t *VAR_3) {
  if (VAR_3->interrupted || !VAR_3->pressed) {
    return VAR_3->count == 1 ? VAR_2 : VAR_0;
  } else {
    return VAR_1;
  }
}
