
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; } ;
struct rpc_cb_add_xprt_calldata {int xprt; int xps; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct rpc_cb_add_xprt_calldata *VAR_2 = VAR_1;

 if (VAR_0->tk_status == 0)
  FUNC_0(VAR_2->xps, VAR_2->xprt);
}
