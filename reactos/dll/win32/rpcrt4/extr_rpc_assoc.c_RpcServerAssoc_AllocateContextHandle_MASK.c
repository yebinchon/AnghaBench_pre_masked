
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cs; int context_handle_list; } ;
struct TYPE_5__ {int refs; int entry; int rw_lock; void* ctx_guard; } ;
typedef TYPE_1__ RpcContextHandle ;
typedef TYPE_2__ RpcAssoc ;
typedef int RPC_STATUS ;
typedef scalar_t__ NDR_SCONTEXT ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;

RPC_STATUS FUNC_7(RpcAssoc *VAR_4, void *VAR_5,
                                                NDR_SCONTEXT *VAR_6)
{
    RpcContextHandle *VAR_7;

    VAR_7 = FUNC_2(FUNC_1(), VAR_0, sizeof(*VAR_7));
    if (!VAR_7)
        return VAR_2;

    VAR_7->ctx_guard = VAR_5;
    FUNC_5(&VAR_7->rw_lock);
    VAR_7->refs = 1;



    FUNC_4(&VAR_7->rw_lock, VAR_3);

    FUNC_0(&VAR_4->cs);
    FUNC_6(&VAR_4->context_handle_list, &VAR_7->entry);
    FUNC_3(&VAR_4->cs);

    *VAR_6 = (NDR_SCONTEXT)VAR_7;
    return VAR_1;
}
