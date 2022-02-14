
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_task {scalar_t__ tk_client; struct rpc_xprt* tk_xprt; } ;


 int FUNC_0 (scalar_t__,struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;

void FUNC_2(struct rpc_task *VAR_0)
{
 struct rpc_xprt *VAR_1 = VAR_0->tk_xprt;

 if (VAR_1) {
  VAR_0->tk_xprt = ((void*)0);
  if (VAR_0->tk_client)
   FUNC_0(VAR_0->tk_client, VAR_1);
  else
   FUNC_1(VAR_1);
 }
}
