
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* impersonate_client ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline RPC_STATUS FUNC_1(
    RpcConnection *VAR_0)
{
    return VAR_0->ops->impersonate_client(VAR_0);
}
