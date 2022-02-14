
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int xps_lock; } ;
struct rpc_xprt {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (struct rpc_xprt_switch*,struct rpc_xprt*) ;

void FUNC_4(struct rpc_xprt_switch *VAR_0,
  struct rpc_xprt *VAR_1)
{
 FUNC_0(&VAR_0->xps_lock);
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(&VAR_0->xps_lock);
 FUNC_2(VAR_1);
}
