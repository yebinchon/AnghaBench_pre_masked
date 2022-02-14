
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * done_handler_user_data; int (* done_handler ) (int,int,int *) ;} ;
struct TYPE_3__ {int module_child_pid; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int,int,int *) ;

void FUNC_2(int VAR_3, int VAR_4) {
    FUNC_0(VAR_0,
        "Module fork exited pid: %d, retcode: %d, bysignal: %d",
        VAR_2.module_child_pid, VAR_3, VAR_4);
    if (VAR_1.done_handler) {
        VAR_1.done_handler(VAR_3, VAR_4,
            VAR_1.done_handler_user_data);
    }
    VAR_2.module_child_pid = -1;
    VAR_1.done_handler = ((void*)0);
    VAR_1.done_handler_user_data = ((void*)0);
}
