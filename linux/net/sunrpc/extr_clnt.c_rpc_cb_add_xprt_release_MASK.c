
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cb_add_xprt_calldata {int xps; int xprt; } ;


 int FUNC_0 (struct rpc_cb_add_xprt_calldata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rpc_cb_add_xprt_calldata *VAR_1 = VAR_0;

 FUNC_1(VAR_1->xprt);
 FUNC_2(VAR_1->xps);
 FUNC_0(VAR_1);
}
