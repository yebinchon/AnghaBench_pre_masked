
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repl_state; int repl_transfer_fd; int * repl_transfer_tmpfile; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void) {
    FUNC_1(VAR_1.repl_state == VAR_0);
    FUNC_2();
    if (VAR_1.repl_transfer_fd!=-1) {
        FUNC_0(VAR_1.repl_transfer_fd);
        FUNC_3(VAR_1.repl_transfer_tmpfile);
        FUNC_4(VAR_1.repl_transfer_tmpfile);
        VAR_1.repl_transfer_tmpfile = ((void*)0);
        VAR_1.repl_transfer_fd = -1;
    }
}
