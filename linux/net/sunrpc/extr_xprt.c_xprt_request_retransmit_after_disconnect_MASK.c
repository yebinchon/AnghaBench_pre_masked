
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {scalar_t__ rq_connect_cookie; struct rpc_xprt* rq_xprt; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;

__attribute__((used)) static bool
FUNC_2(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct rpc_xprt *VAR_2 = VAR_1->rq_xprt;

 return VAR_1->rq_connect_cookie != FUNC_0(VAR_2) ||
  !FUNC_1(VAR_2);
}
