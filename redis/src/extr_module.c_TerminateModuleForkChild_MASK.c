
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * done_handler_user_data; int * done_handler; } ;
struct TYPE_3__ {int module_child_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ,char*,long) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int*,int ,int *) ;

int FUNC_5(int VAR_6, int VAR_7) {

    if (VAR_5.module_child_pid == -1 ||
        VAR_5.module_child_pid != VAR_6) return VAR_0;

    int VAR_8;
    FUNC_2(VAR_2,"Killing running module fork child: %ld",
        (long) VAR_5.module_child_pid);
    if (FUNC_1(VAR_5.module_child_pid,VAR_3) != -1 && VAR_7) {
        while(FUNC_4(VAR_5.module_child_pid,&VAR_8,0,((void*)0)) !=
              VAR_5.module_child_pid);
    }

    VAR_5.module_child_pid = -1;
    VAR_4.done_handler = ((void*)0);
    VAR_4.done_handler_user_data = ((void*)0);
    FUNC_0();
    FUNC_3();
    return VAR_1;
}
