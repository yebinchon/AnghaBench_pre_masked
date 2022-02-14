
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {void* done_handler_user_data; int done_handler; } ;
struct TYPE_3__ {int module_child_pid; } ;
typedef int RedisModuleForkDoneHandler ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;

int FUNC_7(RedisModuleForkDoneHandler VAR_5, void *VAR_6) {
    pid_t VAR_7;
    if (FUNC_1()) {
        return -1;
    }

    FUNC_2();
    if ((VAR_7 = FUNC_3()) == 0) {

        FUNC_4("redis-module-fork");
    } else if (VAR_7 == -1) {
        FUNC_0();
        FUNC_5(VAR_1,"Can't fork for module: %s", FUNC_6(VAR_2));
    } else {

        VAR_4.module_child_pid = VAR_7;
        VAR_3.done_handler = VAR_5;
        VAR_3.done_handler_user_data = VAR_6;
        FUNC_5(VAR_0, "Module fork started pid: %d ", VAR_7);
    }
    return VAR_7;
}
