
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_threads_num; int clients_pending_write; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

int FUNC_2(void) {
    int VAR_2 = FUNC_0(VAR_1.clients_pending_write);


    if (VAR_1.io_threads_num == 1) return 1;

    if (VAR_2 < (VAR_1.io_threads_num*2)) {
        if (VAR_0) FUNC_1();
        return 1;
    } else {
        return 0;
    }
}
