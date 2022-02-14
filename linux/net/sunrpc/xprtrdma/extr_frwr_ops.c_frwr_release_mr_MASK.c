
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fr_mr; } ;
struct rpcrdma_mr {struct rpcrdma_mr* mr_sg; TYPE_1__ frwr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rpcrdma_mr*) ;
 int FUNC_2 (struct rpcrdma_mr*,int) ;

void FUNC_3(struct rpcrdma_mr *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->frwr.fr_mr);
 if (VAR_1)
  FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0->mr_sg);
 FUNC_1(VAR_0);
}
