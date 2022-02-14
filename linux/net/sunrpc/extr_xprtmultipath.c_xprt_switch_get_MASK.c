
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int xps_kref; } ;


 scalar_t__ FUNC_0 (int *) ;

struct rpc_xprt_switch *FUNC_1(struct rpc_xprt_switch *VAR_0)
{
 if (VAR_0 != ((void*)0) && FUNC_0(&VAR_0->xps_kref))
  return VAR_0;
 return ((void*)0);
}
