
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* uartx; } ;
typedef TYPE_2__ pyb_uart_obj_t ;
struct TYPE_4__ {int SR; int ISR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(pyb_uart_obj_t *VAR_3) {





    return VAR_3->uartx->ISR & VAR_0;

}
