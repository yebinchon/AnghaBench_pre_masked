
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rdb_pipe_bufflen; int * rdb_pipe_buff; scalar_t__ rdb_pipe_numconns_writing; scalar_t__ rdb_pipe_numconns; int * rdb_pipe_conns; int rdb_pipe_read; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3() {
    FUNC_1(VAR_0.rdb_pipe_read);
    FUNC_2(VAR_0.rdb_pipe_conns);
    VAR_0.rdb_pipe_conns = ((void*)0);
    VAR_0.rdb_pipe_numconns = 0;
    VAR_0.rdb_pipe_numconns_writing = 0;
    FUNC_2(VAR_0.rdb_pipe_buff);
    VAR_0.rdb_pipe_buff = ((void*)0);
    VAR_0.rdb_pipe_bufflen = 0;



    FUNC_0();
}
