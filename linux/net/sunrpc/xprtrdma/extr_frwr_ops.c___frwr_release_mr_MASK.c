
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_mr {int dummy; } ;
struct ib_wc {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rpcrdma_mr*) ;
 int FUNC_1 (struct rpcrdma_mr*) ;

__attribute__((used)) static void FUNC_2(struct ib_wc *VAR_1, struct rpcrdma_mr *VAR_2)
{
 if (VAR_1->status != VAR_0)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);
}
