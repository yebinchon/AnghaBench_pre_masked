
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
struct TYPE_2__ {int aof_child_pid; int aof_rewrite_scheduled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    if (VAR_1.aof_child_pid != -1) {
        FUNC_0(VAR_2,"Background append only file rewriting already in progress");
    } else if (FUNC_2()) {
        VAR_1.aof_rewrite_scheduled = 1;
        FUNC_1(VAR_2,"Background append only file rewriting scheduled");
    } else if (FUNC_3() == VAR_0) {
        FUNC_1(VAR_2,"Background append only file rewriting started");
    } else {
        FUNC_0(VAR_2,"Can't execute an AOF background rewriting. "
                        "Please check the server logs for more information.");
    }
}
