
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {int (* handoff ) (TYPE_2__*,TYPE_2__*) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static inline RPC_STATUS FUNC_1(RpcConnection *VAR_0, RpcConnection *VAR_1)
{
  return VAR_0->ops->handoff(VAR_0, VAR_1);
}
