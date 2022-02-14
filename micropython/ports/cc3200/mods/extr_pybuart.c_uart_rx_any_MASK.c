
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ read_buf_tail; scalar_t__ read_buf_head; int reg; } ;
typedef TYPE_1__ pyb_uart_obj_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

uint32_t FUNC_1(pyb_uart_obj_t *VAR_1) {
    if (VAR_1->read_buf_tail != VAR_1->read_buf_head) {

        return (VAR_1->read_buf_head > VAR_1->read_buf_tail) ? VAR_1->read_buf_head - VAR_1->read_buf_tail :
                VAR_0 - VAR_1->read_buf_tail + VAR_1->read_buf_head;
    }
    return FUNC_0(VAR_1->reg) ? 1 : 0;
}
