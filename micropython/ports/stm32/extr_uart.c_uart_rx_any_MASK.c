
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read_buf_head; int read_buf_tail; int read_buf_len; int uartx; } ;
typedef TYPE_1__ pyb_uart_obj_t ;
typedef int mp_uint_t ;


 scalar_t__ FUNC_0 (int ) ;

mp_uint_t FUNC_1(pyb_uart_obj_t *VAR_0) {
    int VAR_1 = VAR_0->read_buf_head - VAR_0->read_buf_tail;
    if (VAR_1 < 0) {
        return VAR_1 + VAR_0->read_buf_len;
    } else if (VAR_1 > 0) {
        return VAR_1;
    } else {
        return FUNC_0(VAR_0->uartx) != 0;
    }
}
