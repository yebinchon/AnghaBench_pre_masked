
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_regbuf {int * rg_device; int rg_direction; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct rpcrdma_regbuf*) ;
 int FUNC_2 (struct rpcrdma_regbuf*) ;
 int FUNC_3 (struct rpcrdma_regbuf*) ;

__attribute__((used)) static void FUNC_4(struct rpcrdma_regbuf *VAR_0)
{
 if (!VAR_0)
  return;

 if (!FUNC_3(VAR_0))
  return;

 FUNC_0(VAR_0->rg_device, FUNC_1(VAR_0), FUNC_2(VAR_0),
       VAR_0->rg_direction);
 VAR_0->rg_device = ((void*)0);
}
