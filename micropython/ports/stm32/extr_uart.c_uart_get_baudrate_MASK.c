
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int uart_id; TYPE_1__* uartx; } ;
typedef TYPE_2__ pyb_uart_obj_t ;
struct TYPE_7__ {int DCKCFGR2; int D2CCIP2R; } ;
struct TYPE_5__ {int BRR; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;

uint32_t FUNC_3(pyb_uart_obj_t *VAR_4) {
    uint32_t VAR_5 = 0;
    if (VAR_4->uart_id == 1
        ) {
        VAR_5 = FUNC_1();
    } else {
        VAR_5 = FUNC_0();
    }



    uint32_t VAR_6 = VAR_5 / VAR_4->uartx->BRR;

    return VAR_6;
}
