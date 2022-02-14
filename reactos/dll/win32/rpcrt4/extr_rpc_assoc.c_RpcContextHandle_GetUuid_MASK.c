
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UUID ;
struct TYPE_2__ {int uuid; } ;
typedef TYPE_1__ RpcContextHandle ;
typedef scalar_t__ NDR_SCONTEXT ;



void FUNC_0(NDR_SCONTEXT VAR_0, UUID *VAR_1)
{
    RpcContextHandle *VAR_2 = (RpcContextHandle *)VAR_0;
    *VAR_1 = VAR_2->uuid;
}
