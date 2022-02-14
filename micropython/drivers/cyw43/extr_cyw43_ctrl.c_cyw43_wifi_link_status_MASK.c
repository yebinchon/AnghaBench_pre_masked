
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wifi_join_state; } ;
typedef TYPE_1__ cyw43_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_0(cyw43_t *VAR_10, int VAR_11) {
    if (VAR_11 == VAR_0) {
        int VAR_12 = VAR_10->wifi_join_state & 0xf;
        if (VAR_12 == VAR_6) {
            return VAR_4;
        } else if (VAR_12 == VAR_8) {
            return VAR_3;
        } else if (VAR_12 == VAR_9) {
            return VAR_5;
        } else if (VAR_12 == VAR_7) {
            return VAR_1;
        } else {
            return VAR_2;
        }
    } else {
        return VAR_2;
    }
}
