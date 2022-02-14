
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_threads_num; int clients_pending_write; int clients_pending_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_6(void) {


    FUNC_1();
    if (VAR_4) { FUNC_3("E"); FUNC_0(VAR_3); }
    if (VAR_4) FUNC_3("--- STOPPING THREADED IO [R%d] [W%d] ---\n",
        (int) FUNC_2(VAR_2.clients_pending_read),
        (int) FUNC_2(VAR_2.clients_pending_write));
    FUNC_5(VAR_0 == 1);
    for (int VAR_5 = 0; VAR_5 < VAR_2.io_threads_num; VAR_5++)
        FUNC_4(&VAR_1[VAR_5]);
    VAR_0 = 0;
}
