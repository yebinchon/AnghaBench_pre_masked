
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
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0 (qk_tap_dance_state_t *VAR_5) {
    if (VAR_5->count == 1) {
      if (VAR_5->interrupted || !VAR_5->pressed) {
        return VAR_3;
      } else {
        return VAR_2;
      }
    }
    if (VAR_5->count == 2) {
      if (VAR_5->interrupted) {
        return VAR_0;
      } else if (!VAR_5->pressed) {
        return VAR_1;
      }
    }
    return VAR_4;
}
