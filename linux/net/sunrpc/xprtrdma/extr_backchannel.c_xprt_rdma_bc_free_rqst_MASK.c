
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_req {int * rl_reply; } ;
struct rpc_xprt {int bc_pa_lock; int bc_pa_list; } ;
struct rpc_rqst {int rq_bc_pa_list; struct rpc_xprt* rq_xprt; } ;


 int FUNC_0 (int *,int *) ;
 struct rpcrdma_req* FUNC_1 (struct rpc_rqst*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpc_xprt*) ;

void FUNC_6(struct rpc_rqst *VAR_0)
{
 struct rpcrdma_req *VAR_1 = FUNC_1(VAR_0);
 struct rpc_xprt *VAR_2 = VAR_0->rq_xprt;

 FUNC_2(VAR_1->rl_reply);
 VAR_1->rl_reply = ((void*)0);

 FUNC_3(&VAR_2->bc_pa_lock);
 FUNC_0(&VAR_0->rq_bc_pa_list, &VAR_2->bc_pa_list);
 FUNC_4(&VAR_2->bc_pa_lock);
 FUNC_5(VAR_2);
}
