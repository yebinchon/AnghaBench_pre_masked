
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int xps_xprt_list; } ;
struct rpc_xprt_iter {int xpi_xpswitch; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt_switch* FUNC_0 (int ) ;
 struct rpc_xprt* FUNC_1 (int *) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_2(struct rpc_xprt_iter *VAR_0)
{
 struct rpc_xprt_switch *VAR_1 = FUNC_0(VAR_0->xpi_xpswitch);

 if (VAR_1 == ((void*)0))
  return ((void*)0);
 return FUNC_1(&VAR_1->xps_xprt_list);
}
