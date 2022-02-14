
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ master_repl_offset; size_t repl_backlog_size; size_t repl_backlog_idx; size_t repl_backlog; scalar_t__ repl_backlog_histlen; scalar_t__ repl_backlog_off; } ;


 int FUNC_0 (size_t,unsigned char*,size_t) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void *VAR_1, size_t VAR_2) {
    unsigned char *VAR_3 = VAR_1;

    VAR_0.master_repl_offset += VAR_2;



    while(VAR_2) {
        size_t VAR_4 = VAR_0.repl_backlog_size - VAR_0.repl_backlog_idx;
        if (VAR_4 > VAR_2) VAR_4 = VAR_2;
        FUNC_0(VAR_0.repl_backlog+VAR_0.repl_backlog_idx,VAR_3,VAR_4);
        VAR_0.repl_backlog_idx += VAR_4;
        if (VAR_0.repl_backlog_idx == VAR_0.repl_backlog_size)
            VAR_0.repl_backlog_idx = 0;
        VAR_2 -= VAR_4;
        VAR_3 += VAR_4;
        VAR_0.repl_backlog_histlen += VAR_4;
    }
    if (VAR_0.repl_backlog_histlen > VAR_0.repl_backlog_size)
        VAR_0.repl_backlog_histlen = VAR_0.repl_backlog_size;

    VAR_0.repl_backlog_off = VAR_0.master_repl_offset -
                              VAR_0.repl_backlog_histlen + 1;
}
