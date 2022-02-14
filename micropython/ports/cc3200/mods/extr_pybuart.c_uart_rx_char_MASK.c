
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t read_buf_tail; size_t read_buf_head; int* read_buf; int reg; } ;
typedef TYPE_1__ pyb_uart_obj_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int FUNC_1(pyb_uart_obj_t *VAR_1) {
    if (VAR_1->read_buf_tail != VAR_1->read_buf_head) {

        int VAR_2 = VAR_1->read_buf[VAR_1->read_buf_tail];
        VAR_1->read_buf_tail = (VAR_1->read_buf_tail + 1) % VAR_0;
        return VAR_2;
    } else {

        return FUNC_0(VAR_1->reg);
    }
}
