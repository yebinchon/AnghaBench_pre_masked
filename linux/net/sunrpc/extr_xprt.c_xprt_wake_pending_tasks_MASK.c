
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct rpc_xprt *VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  FUNC_1(&VAR_0->pending, VAR_1);
 else
  FUNC_0(&VAR_0->pending);
}
