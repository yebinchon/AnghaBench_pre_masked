
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cs; } ;
struct TYPE_5__ {unsigned int refs; int entry; int rw_lock; } ;
typedef TYPE_1__ RpcContextHandle ;
typedef TYPE_2__ RpcAssoc ;
typedef scalar_t__ NDR_SCONTEXT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

unsigned int FUNC_5(RpcAssoc *VAR_0, NDR_SCONTEXT VAR_1, BOOL VAR_2)
{
    RpcContextHandle *VAR_3 = (RpcContextHandle *)VAR_1;
    unsigned int VAR_4;

    if (VAR_2)
        FUNC_3(&VAR_3->rw_lock);

    FUNC_0(&VAR_0->cs);
    VAR_4 = --VAR_3->refs;
    if (!VAR_4)
        FUNC_4(&VAR_3->entry);
    FUNC_1(&VAR_0->cs);

    if (!VAR_4)
        FUNC_2(VAR_3);

    return VAR_4;
}
