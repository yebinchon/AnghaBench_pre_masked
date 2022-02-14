
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_xprt; } ;


 int FUNC_0 (int ,struct rpc_rqst*) ;

void FUNC_1(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;

 FUNC_0(VAR_1->rq_xprt, VAR_1);
}
