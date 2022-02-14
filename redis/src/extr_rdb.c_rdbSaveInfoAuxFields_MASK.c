
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rio ;
struct TYPE_4__ {int repl_stream_db; } ;
typedef TYPE_1__ rdbSaveInfo ;
struct TYPE_5__ {int master_repl_offset; int replid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int FUNC_4(rio *VAR_3, int VAR_4, rdbSaveInfo *VAR_5) {
    int VAR_6 = (sizeof(void*) == 8) ? 64 : 32;
    int VAR_7 = (VAR_4 & VAR_0) != 0;


    if (FUNC_1(VAR_3,"redis-ver",VAR_1) == -1) return -1;
    if (FUNC_0(VAR_3,"redis-bits",VAR_6) == -1) return -1;
    if (FUNC_0(VAR_3,"ctime",FUNC_2(((void*)0))) == -1) return -1;
    if (FUNC_0(VAR_3,"used-mem",FUNC_3()) == -1) return -1;


    if (VAR_5) {
        if (FUNC_0(VAR_3,"repl-stream-db",VAR_5->repl_stream_db)
            == -1) return -1;
        if (FUNC_1(VAR_3,"repl-id",VAR_2.replid)
            == -1) return -1;
        if (FUNC_0(VAR_3,"repl-offset",VAR_2.master_repl_offset)
            == -1) return -1;
    }
    if (FUNC_0(VAR_3,"aof-preamble",VAR_7) == -1) return -1;
    return 1;
}
