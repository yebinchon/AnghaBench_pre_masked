
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_req {int rl_registered; } ;
struct rpcrdma_mr {int mr_xprt; } ;


 int FUNC_0 (int ,struct rpcrdma_mr*) ;
 struct rpcrdma_mr* FUNC_1 (int *) ;

void FUNC_2(struct rpcrdma_req *VAR_0)
{
 struct rpcrdma_mr *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0->rl_registered)))
  FUNC_0(VAR_1->mr_xprt, VAR_1);
}
