
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int is_enabled; int uart_id; TYPE_1__* uartx; } ;
typedef TYPE_2__ pyb_uart_obj_t ;
struct TYPE_4__ {int CR1; } ;


 int FUNC_0 (int ) ;
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
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int FUNC_42 () ;

void FUNC_43(pyb_uart_obj_t *VAR_11) {
    VAR_11->is_enabled = 0;


    VAR_11->uartx->CR1 &= ~VAR_10;


    if (VAR_11->uart_id == 1) {
        FUNC_0(VAR_6);
        FUNC_20();
        FUNC_21();
        FUNC_19();
    }
}
