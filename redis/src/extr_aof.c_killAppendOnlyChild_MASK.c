
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aof_child_pid; int aof_rewrite_time_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int ,char*,long) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int ,int *) ;

void FUNC_8(void) {
    int VAR_3;

    if (VAR_2.aof_child_pid == -1) return;

    FUNC_5(VAR_0,"Killing running AOF rewrite child: %ld",
        (long) VAR_2.aof_child_pid);
    if (FUNC_4(VAR_2.aof_child_pid,VAR_1) != -1) {
        while(FUNC_7(&VAR_3,0,((void*)0)) != VAR_2.aof_child_pid);
    }

    FUNC_2();
    FUNC_1(VAR_2.aof_child_pid);
    VAR_2.aof_child_pid = -1;
    VAR_2.aof_rewrite_time_start = -1;

    FUNC_0();
    FUNC_3();
    FUNC_6();
}
