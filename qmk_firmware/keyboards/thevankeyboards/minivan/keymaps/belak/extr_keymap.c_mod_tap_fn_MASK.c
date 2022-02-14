
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; size_t keycode; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int * VAR_3 ;

void FUNC_6(qk_tap_dance_state_t *VAR_4, void *VAR_5) {
    switch (VAR_4->count) {
        case 1:
            FUNC_3(FUNC_0(VAR_3[VAR_4->keycode - VAR_0]));
            FUNC_5();
            break;
        case 2:
            FUNC_2(VAR_2);
            break;
        case 3:
            FUNC_1(VAR_2);
            FUNC_2(VAR_1);
            break;
        default:
            FUNC_4(VAR_4);
    }
}
