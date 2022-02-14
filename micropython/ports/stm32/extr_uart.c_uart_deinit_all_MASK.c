
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_static; } ;
typedef TYPE_1__ pyb_uart_obj_t ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void) {
    for (int VAR_1 = 0; VAR_1 < FUNC_0(FUNC_1(VAR_0)); VAR_1++) {
        pyb_uart_obj_t *VAR_2 = FUNC_1(VAR_0)[VAR_1];
        if (VAR_2 != ((void*)0) && !VAR_2->is_static) {
            FUNC_2(VAR_2);
            FUNC_1(VAR_0)[VAR_1] = ((void*)0);
        }
    }
}
