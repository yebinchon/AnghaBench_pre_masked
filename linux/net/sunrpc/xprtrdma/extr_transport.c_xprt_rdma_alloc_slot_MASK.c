
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int rx_buf; } ;
struct rpcrdma_req {int rl_slot; } ;
struct rpc_xprt {int backlog; int state; } ;
struct rpc_task {int tk_status; int * tk_rqstp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct rpc_task*,int *) ;
 struct rpcrdma_req* FUNC_1 (int *) ;
 struct rpcrdma_xprt* FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct rpc_xprt *VAR_2, struct rpc_task *VAR_3)
{
 struct rpcrdma_xprt *VAR_4 = FUNC_2(VAR_2);
 struct rpcrdma_req *VAR_5;

 VAR_5 = FUNC_1(&VAR_4->rx_buf);
 if (!VAR_5)
  goto out_sleep;
 VAR_3->tk_rqstp = &VAR_5->rl_slot;
 VAR_3->tk_status = 0;
 return;

out_sleep:
 FUNC_3(VAR_1, &VAR_2->state);
 FUNC_0(&VAR_2->backlog, VAR_3, ((void*)0));
 VAR_3->tk_status = -VAR_0;
}
