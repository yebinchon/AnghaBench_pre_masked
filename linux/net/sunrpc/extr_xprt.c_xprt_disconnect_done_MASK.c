
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rpc_xprt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_xprt*) ;
 int FUNC_5 (struct rpc_xprt*) ;
 int FUNC_6 (struct rpc_xprt*,int ) ;

void FUNC_7(struct rpc_xprt *VAR_1)
{
 FUNC_0("RPC:       disconnected transport %p\n", VAR_1);
 FUNC_1(&VAR_1->transport_lock);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1, -VAR_0);
 FUNC_2(&VAR_1->transport_lock);
}
