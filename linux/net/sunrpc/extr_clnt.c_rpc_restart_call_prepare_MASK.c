
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_ops; } ;
struct TYPE_2__ {int * rpc_call_prepare; } ;


 int FUNC_0 (struct rpc_task*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rpc_task*) ;

int
FUNC_2(struct rpc_task *VAR_1)
{
 if (VAR_1->tk_ops->rpc_call_prepare != ((void*)0))
  return FUNC_0(VAR_1, VAR_0);
 return FUNC_1(VAR_1);
}
