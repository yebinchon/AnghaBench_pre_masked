
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ctx_guard; } ;
typedef TYPE_1__ RpcContextHandle ;
typedef scalar_t__ NDR_SCONTEXT ;
typedef int BOOL ;



BOOL FUNC_0(NDR_SCONTEXT VAR_0, void *VAR_1)
{
    RpcContextHandle *VAR_2 = (RpcContextHandle *)VAR_0;
    return VAR_2->ctx_guard == VAR_1;
}
