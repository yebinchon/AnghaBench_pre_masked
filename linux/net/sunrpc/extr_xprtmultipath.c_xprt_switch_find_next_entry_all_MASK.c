
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int xps_xprt_list; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt* FUNC_0 (int *,struct rpc_xprt const*) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_1(struct rpc_xprt_switch *VAR_0,
  const struct rpc_xprt *VAR_1)
{
 return FUNC_0(&VAR_0->xps_xprt_list, VAR_1);
}
