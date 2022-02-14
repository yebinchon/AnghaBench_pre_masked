
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int baudrate; int reg; } ;
typedef TYPE_1__ pyb_uart_obj_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

bool FUNC_4(pyb_uart_obj_t *VAR_1, int VAR_2) {
    uint32_t VAR_3 = 0;
    while (!FUNC_0(VAR_1->reg, VAR_2)) {
        if (VAR_3++ > ((VAR_0 * 1000) / FUNC_1(VAR_1->baudrate))) {
            return 0;
        }
        FUNC_3(FUNC_2(FUNC_1(VAR_1->baudrate)));
    }
    return 1;
}
