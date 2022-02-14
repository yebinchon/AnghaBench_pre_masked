
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; int arg; void* (* start_routine ) (int ) ;} ;
typedef TYPE_1__ NETDATA_THREAD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 void* FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_5) {
    VAR_3 = (NETDATA_THREAD *)VAR_5;

    if(!(VAR_3->options & VAR_0))
        FUNC_2("thread created with task id %d", FUNC_1());

    if(FUNC_6(VAR_1, ((void*)0)) != 0)
        FUNC_0("cannot set pthread cancel type to DEFERRED.");

    if(FUNC_5(VAR_2, ((void*)0)) != 0)
        FUNC_0("cannot set pthread cancel state to ENABLE.");

    FUNC_8(VAR_5);

    void *VAR_6 = ((void*)0);
    FUNC_4(VAR_4, VAR_5);
            VAR_6 = VAR_3->start_routine(VAR_3->arg);
    FUNC_3(1);

    return VAR_6;
}
