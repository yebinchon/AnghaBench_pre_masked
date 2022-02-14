
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int queue_lock; int pending; TYPE_1__* ops; } ;
struct rpc_task {int tk_runstate; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* wait_for_reply_request ) (struct rpc_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct rpc_task*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_task*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct rpc_task*) ;

void FUNC_6(struct rpc_task *VAR_2)
{
 struct rpc_rqst *VAR_3 = VAR_2->tk_rqstp;
 struct rpc_xprt *VAR_4 = VAR_3->rq_xprt;

 if (!FUNC_4(VAR_1, &VAR_2->tk_runstate))
  return;





 FUNC_1(&VAR_4->queue_lock);
 if (FUNC_4(VAR_1, &VAR_2->tk_runstate)) {
  VAR_4->ops->wait_for_reply_request(VAR_2);





  if (FUNC_5(VAR_2))
   FUNC_0(&VAR_4->pending,
     VAR_2, -VAR_0);
 }
 FUNC_2(&VAR_4->queue_lock);
}
