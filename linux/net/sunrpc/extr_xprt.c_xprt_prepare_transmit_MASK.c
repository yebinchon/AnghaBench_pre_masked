
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int sending; } ;
struct rpc_task {int tk_runstate; int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,struct rpc_task*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rpc_xprt*,struct rpc_task*) ;

bool FUNC_4(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 FUNC_0("RPC: %5u xprt_prepare_transmit\n", VAR_1->tk_pid);

 if (!FUNC_3(VAR_3, VAR_1)) {

  if (!FUNC_2(VAR_0, &VAR_1->tk_runstate))
   FUNC_1(&VAR_3->sending,
     VAR_1, 0);
  return 0;

 }
 return 1;
}
