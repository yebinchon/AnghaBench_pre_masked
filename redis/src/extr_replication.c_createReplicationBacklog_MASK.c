
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ master_repl_offset; scalar_t__ repl_backlog_off; scalar_t__ repl_backlog_idx; scalar_t__ repl_backlog_histlen; int repl_backlog_size; int * repl_backlog; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

void FUNC_2(void) {
    FUNC_0(VAR_0.repl_backlog == ((void*)0));
    VAR_0.repl_backlog = FUNC_1(VAR_0.repl_backlog_size);
    VAR_0.repl_backlog_histlen = 0;
    VAR_0.repl_backlog_idx = 0;




    VAR_0.repl_backlog_off = VAR_0.master_repl_offset+1;
}
