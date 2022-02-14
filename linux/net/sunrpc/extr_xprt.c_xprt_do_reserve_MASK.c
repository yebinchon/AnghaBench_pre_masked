
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_task {int * tk_rqstp; } ;
struct TYPE_2__ {int (* alloc_slot ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int FUNC_0 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_2(struct rpc_xprt *VAR_0, struct rpc_task *VAR_1)
{
 VAR_0->ops->alloc_slot(VAR_0, VAR_1);
 if (VAR_1->tk_rqstp != ((void*)0))
  FUNC_1(VAR_1);
}
