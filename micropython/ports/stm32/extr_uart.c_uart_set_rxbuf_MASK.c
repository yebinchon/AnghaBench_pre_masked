
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t read_buf_len; int uartx; void* read_buf; scalar_t__ read_buf_tail; scalar_t__ read_buf_head; } ;
typedef TYPE_1__ pyb_uart_obj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(pyb_uart_obj_t *VAR_0, size_t VAR_1, void *VAR_2) {
    VAR_0->read_buf_head = 0;
    VAR_0->read_buf_tail = 0;
    VAR_0->read_buf_len = VAR_1;
    VAR_0->read_buf = VAR_2;
    if (VAR_1 == 0) {
        FUNC_0(VAR_0->uartx);
    } else {
        FUNC_1(VAR_0->uartx);
    }
}
