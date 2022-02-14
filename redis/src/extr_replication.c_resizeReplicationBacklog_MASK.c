
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long repl_backlog_size; scalar_t__ master_repl_offset; scalar_t__ repl_backlog_off; scalar_t__ repl_backlog_idx; scalar_t__ repl_backlog_histlen; int * repl_backlog; } ;


 long long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (long long) ;

void FUNC_2(long long VAR_2) {
    if (VAR_2 < VAR_0)
        VAR_2 = VAR_0;
    if (VAR_1.repl_backlog_size == VAR_2) return;

    VAR_1.repl_backlog_size = VAR_2;
    if (VAR_1.repl_backlog != ((void*)0)) {





        FUNC_0(VAR_1.repl_backlog);
        VAR_1.repl_backlog = FUNC_1(VAR_1.repl_backlog_size);
        VAR_1.repl_backlog_histlen = 0;
        VAR_1.repl_backlog_idx = 0;

        VAR_1.repl_backlog_off = VAR_1.master_repl_offset+1;
    }
}
