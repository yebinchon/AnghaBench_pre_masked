
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* bc_free_rqst ) (struct rpc_rqst*) ;} ;


 int FUNC_0 (struct rpc_rqst*) ;

void FUNC_1(struct rpc_rqst *VAR_0)
{
 struct rpc_xprt *VAR_1 = VAR_0->rq_xprt;

 VAR_1->ops->bc_free_rqst(VAR_0);
}
