
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;


 int FUNC_0 (char*,struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_0)
{
 FUNC_0("RPC:       injecting transport disconnect on xprt=%p\n",
  VAR_0);
 FUNC_1(VAR_0);
}
