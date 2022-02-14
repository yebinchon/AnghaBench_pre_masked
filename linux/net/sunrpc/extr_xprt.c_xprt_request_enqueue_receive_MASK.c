
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int timer; int queue_lock; } ;
struct rpc_task {int tk_runstate; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_rcv_buf; int rq_private_buf; struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpc_task*,struct rpc_rqst*) ;
 int FUNC_6 (struct rpc_rqst*) ;
 int FUNC_7 (struct rpc_xprt*,struct rpc_rqst*) ;

void
FUNC_8(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 if (!FUNC_5(VAR_1, VAR_2))
  return;

 FUNC_6(VAR_1->tk_rqstp);
 FUNC_3(&VAR_3->queue_lock);


 FUNC_1(&VAR_2->rq_private_buf, &VAR_2->rq_rcv_buf,
   sizeof(VAR_2->rq_private_buf));


 FUNC_7(VAR_3, VAR_2);
 FUNC_2(VAR_0, &VAR_1->tk_runstate);
 FUNC_4(&VAR_3->queue_lock);


 FUNC_0(&VAR_3->timer);
}
