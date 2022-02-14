
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {size_t read_buf_tail; size_t read_buf_head; scalar_t__ char_width; int* read_buf; int read_buf_len; int char_mask; TYPE_3__* uartx; } ;
typedef TYPE_1__ pyb_uart_obj_t ;
struct TYPE_6__ {int RDR; int DR; int ICR; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;

int FUNC_2(pyb_uart_obj_t *VAR_2) {
    if (VAR_2->read_buf_tail != VAR_2->read_buf_head) {

        int VAR_3;
        if (VAR_2->char_width == VAR_0) {
            VAR_3 = ((uint16_t*)VAR_2->read_buf)[VAR_2->read_buf_tail];
        } else {
            VAR_3 = VAR_2->read_buf[VAR_2->read_buf_tail];
        }
        VAR_2->read_buf_tail = (VAR_2->read_buf_tail + 1) % VAR_2->read_buf_len;
        if (FUNC_0(VAR_2->uartx)) {

            FUNC_1(VAR_2->uartx);
        }
        return VAR_3;
    } else {






        return VAR_2->uartx->DR & VAR_2->char_mask;

    }
}
