
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_ia {TYPE_1__* ri_id; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct TYPE_2__ {int qp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rpcrdma_xprt *VAR_0)
{
 struct rpcrdma_ia *VAR_1 = &VAR_0->rx_ia;




 FUNC_0(VAR_1->ri_id->qp);




 FUNC_1(VAR_1->ri_id->qp);
}
