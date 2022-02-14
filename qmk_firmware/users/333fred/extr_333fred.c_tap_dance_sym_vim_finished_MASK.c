
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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(qk_tap_dance_state_t *VAR_5, void *VAR_6) {

    if (VAR_5->count == 1) {
        if (VAR_5->interrupted || VAR_5->pressed == 0) VAR_4 = 128;
        else VAR_4 = 129;
    } else {

        VAR_4 = 130;
    }

    switch (VAR_4) {
        case 128:
            if (VAR_3) {
                FUNC_1();
                VAR_3 = 0;
            } else {
                FUNC_2(VAR_1, VAR_0);
                VAR_3 = 1;
            }
            break;
        case 129:
            FUNC_0(VAR_1);
            break;
        case 130:
            FUNC_0(VAR_2);
            break;
    }
}
