
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {TYPE_1__* rq_xprt; } ;
struct TYPE_2__ {int pending; } ;


 int FUNC_0 (int *,struct rpc_task*,int ,int ) ;
 int FUNC_1 (struct rpc_rqst*) ;
 int VAR_0 ;

void FUNC_2(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;

 FUNC_0(&VAR_2->rq_xprt->pending, VAR_1, VAR_0,
   FUNC_1(VAR_2));
}
