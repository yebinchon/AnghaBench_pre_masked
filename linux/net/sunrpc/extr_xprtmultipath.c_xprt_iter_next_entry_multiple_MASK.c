
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xprt_switch_find_xprt_t ;
struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt_iter {int xpi_cursor; int xpi_xpswitch; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt_switch* FUNC_0 (int ) ;
 struct rpc_xprt* FUNC_1 (struct rpc_xprt_switch*,int *,int ) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_2(struct rpc_xprt_iter *VAR_0,
  xprt_switch_find_xprt_t VAR_1)
{
 struct rpc_xprt_switch *VAR_2 = FUNC_0(VAR_0->xpi_xpswitch);

 if (VAR_2 == ((void*)0))
  return ((void*)0);
 return FUNC_1(VAR_2, &VAR_0->xpi_cursor, VAR_1);
}
