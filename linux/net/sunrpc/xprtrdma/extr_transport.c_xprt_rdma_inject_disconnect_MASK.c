
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ri_id; } ;
struct rpcrdma_xprt {TYPE_1__ rx_ia; } ;
struct rpc_xprt {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rpcrdma_xprt* FUNC_1 (struct rpc_xprt*) ;
 int FUNC_2 (struct rpcrdma_xprt*) ;

__attribute__((used)) static void
FUNC_3(struct rpc_xprt *VAR_0)
{
 struct rpcrdma_xprt *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->rx_ia.ri_id);
}
