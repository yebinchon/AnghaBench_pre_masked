
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_task {int tk_status; int * tk_rqstp; struct rpc_xprt* tk_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_xprt*,struct rpc_task*) ;

void FUNC_1(struct rpc_task *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1->tk_xprt;

 VAR_1->tk_status = 0;
 if (VAR_1->tk_rqstp != ((void*)0))
  return;

 VAR_1->tk_status = -VAR_0;
 FUNC_0(VAR_2, VAR_1);
}
