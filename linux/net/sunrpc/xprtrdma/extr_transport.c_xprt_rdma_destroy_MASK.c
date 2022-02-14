
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int rx_ia; int rx_buf; int rx_connect_worker; } ;
struct rpc_xprt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpcrdma_xprt*) ;
 int FUNC_4 (int *) ;
 struct rpcrdma_xprt* FUNC_5 (struct rpc_xprt*) ;
 int FUNC_6 (struct rpcrdma_xprt*) ;
 int FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_9(struct rpc_xprt *VAR_1)
{
 struct rpcrdma_xprt *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(VAR_2);

 FUNC_0(&VAR_2->rx_connect_worker);

 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->rx_buf);
 FUNC_4(&VAR_2->rx_ia);

 FUNC_8(VAR_1);
 FUNC_7(VAR_1);

 FUNC_1(VAR_0);
}
