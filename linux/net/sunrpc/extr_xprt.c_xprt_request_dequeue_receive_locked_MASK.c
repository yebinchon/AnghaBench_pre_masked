
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_runstate; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_xprt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct rpc_rqst*) ;

__attribute__((used)) static void
FUNC_2(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;

 if (FUNC_0(VAR_0, &VAR_1->tk_runstate))
  FUNC_1(VAR_2->rq_xprt, VAR_2);
}
