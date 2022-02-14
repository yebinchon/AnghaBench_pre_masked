
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rw_lock; scalar_t__ user_context; int (* rundown_routine ) (scalar_t__) ;} ;
typedef TYPE_1__ RpcContextHandle ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(RpcContextHandle *VAR_0)
{
    FUNC_3("freeing %p\n", VAR_0);

    if (VAR_0->user_context && VAR_0->rundown_routine)
    {
        FUNC_3("calling rundown routine %p with user context %p\n",
              VAR_0->rundown_routine, VAR_0->user_context);
        VAR_0->rundown_routine(VAR_0->user_context);
    }

    FUNC_2(&VAR_0->rw_lock);

    FUNC_1(FUNC_0(), 0, VAR_0);
}
