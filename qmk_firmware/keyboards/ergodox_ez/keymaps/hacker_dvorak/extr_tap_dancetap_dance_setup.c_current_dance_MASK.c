
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; scalar_t__ pressed; scalar_t__ interrupted; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(qk_tap_dance_state_t *VAR_8) {
    int VAR_9 = 0;
    if (VAR_8->count == 1) {
        if (VAR_8->interrupted || !VAR_8->pressed) {
            VAR_9 = VAR_4;
        } else {
            VAR_9 = VAR_3;
        }
    } else if (VAR_8->count == 2) {





        if (VAR_8->interrupted) {
            VAR_9 = VAR_1;
        } else if (VAR_8->pressed) {
            VAR_9 = VAR_0;
        } else {
            VAR_9 = VAR_2;
        }
    } else if (VAR_8->count == 3) {
        if (VAR_8->interrupted) {
            VAR_9 = VAR_6;
        } else if (VAR_8->pressed) {
            VAR_9 = VAR_5;
        } else {
            VAR_9 = VAR_7;
        }
    }
    return VAR_9;
}
