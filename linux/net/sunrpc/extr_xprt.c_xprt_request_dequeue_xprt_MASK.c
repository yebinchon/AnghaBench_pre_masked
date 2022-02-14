
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int queue_lock; } ;
struct rpc_task {int tk_runstate; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct rpc_rqst*) ;
 int FUNC_6 (struct rpc_task*) ;
 int FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (struct rpc_rqst*) ;

void
FUNC_9(struct rpc_task *VAR_3)
{
 struct rpc_rqst *VAR_4 = VAR_3->tk_rqstp;
 struct rpc_xprt *VAR_5 = VAR_4->rq_xprt;

 if (FUNC_4(VAR_2, &VAR_3->tk_runstate) ||
     FUNC_4(VAR_1, &VAR_3->tk_runstate) ||
     FUNC_5(VAR_4)) {
  FUNC_2(&VAR_5->queue_lock);
  FUNC_7(VAR_3);
  FUNC_6(VAR_3);
  while (FUNC_5(VAR_4)) {
   FUNC_1(VAR_0, &VAR_3->tk_runstate);
   FUNC_3(&VAR_5->queue_lock);
   FUNC_8(VAR_4);
   FUNC_2(&VAR_5->queue_lock);
   FUNC_0(VAR_0, &VAR_3->tk_runstate);
  }
  FUNC_3(&VAR_5->queue_lock);
 }
}
