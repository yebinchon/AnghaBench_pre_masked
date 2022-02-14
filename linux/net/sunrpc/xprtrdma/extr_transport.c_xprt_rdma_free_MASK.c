
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int dummy; } ;
struct rpcrdma_req {int rl_registered; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_xprt; } ;


 int FUNC_0 (struct rpcrdma_xprt*,struct rpcrdma_req*) ;
 int FUNC_1 (int *) ;
 struct rpcrdma_req* FUNC_2 (struct rpc_rqst*) ;
 struct rpcrdma_xprt* FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_task*,struct rpcrdma_req*) ;

__attribute__((used)) static void
FUNC_5(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct rpcrdma_xprt *VAR_2 = FUNC_3(VAR_1->rq_xprt);
 struct rpcrdma_req *VAR_3 = FUNC_2(VAR_1);

 FUNC_4(VAR_0, VAR_3);

 if (!FUNC_1(&VAR_3->rl_registered))
  FUNC_0(VAR_2, VAR_3);






}
