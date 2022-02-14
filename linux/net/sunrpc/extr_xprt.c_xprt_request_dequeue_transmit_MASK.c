
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int queue_lock; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_3(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct rpc_xprt *VAR_2 = VAR_1->rq_xprt;

 FUNC_0(&VAR_2->queue_lock);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_2->queue_lock);
}
