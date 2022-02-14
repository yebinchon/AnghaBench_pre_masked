
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cs; } ;
struct TYPE_5__ {int uuid; int rundown_routine; int refs; } ;
typedef TYPE_1__ RpcContextHandle ;
typedef TYPE_2__ RpcAssoc ;
typedef int RPC_STATUS ;
typedef scalar_t__ NDR_SCONTEXT ;
typedef int NDR_RUNDOWN ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (char*,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

RPC_STATUS FUNC_7(RpcAssoc *VAR_2,
                                              NDR_SCONTEXT VAR_3,
                                              void *VAR_4,
                                              NDR_RUNDOWN VAR_5)
{
    RpcContextHandle *VAR_6 = (RpcContextHandle *)VAR_3;
    RPC_STATUS VAR_7;

    if (!FUNC_2((NDR_SCONTEXT)VAR_6, VAR_4))
        return VAR_0;

    FUNC_0(&VAR_2->cs);
    if (FUNC_5(&VAR_6->uuid, &VAR_7))
    {

        VAR_6->refs++;
        FUNC_4(&VAR_6->uuid);
        VAR_6->rundown_routine = VAR_5;
        FUNC_3("allocated uuid %s for context handle %p\n",
              FUNC_6(&VAR_6->uuid), VAR_6);
    }
    FUNC_1(&VAR_2->cs);

    return VAR_1;
}
