
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * user; int flags; } ;
struct TYPE_4__ {int * module_blocked_pipe; void* loadmodule_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 void* FUNC_4 () ;
 void* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_5 () ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 TYPE_1__ VAR_12 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(void) {
    VAR_9 = FUNC_4();
    VAR_12.loadmodule_queue = FUNC_4();
    VAR_10 = FUNC_2(&VAR_11,((void*)0));


    VAR_8 = FUNC_4();
    VAR_6 = FUNC_1(((void*)0));
    VAR_6->flags |= VAR_0;
    VAR_6->user = ((void*)0);


    VAR_5 = FUNC_4();

    FUNC_5();
    if (FUNC_6(VAR_12.module_blocked_pipe) == -1) {
        FUNC_9(VAR_1,
            "Can't create the pipe for module blocking commands: %s",
            FUNC_10(VAR_4));
        FUNC_3(1);
    }


    FUNC_0(((void*)0),VAR_12.module_blocked_pipe[0]);
    FUNC_0(((void*)0),VAR_12.module_blocked_pipe[1]);


    VAR_3 = FUNC_8();


    VAR_2 = FUNC_4();



    FUNC_7(&VAR_7);
}
