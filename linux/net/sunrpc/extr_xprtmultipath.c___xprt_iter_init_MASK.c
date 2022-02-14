
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt_iter_ops {int dummy; } ;
struct rpc_xprt_iter {struct rpc_xprt_iter_ops const* xpi_ops; int * xpi_cursor; int xpi_xpswitch; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rpc_xprt_switch*) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt_iter *VAR_0,
  struct rpc_xprt_switch *VAR_1,
  const struct rpc_xprt_iter_ops *VAR_2)
{
 FUNC_0(VAR_0->xpi_xpswitch, FUNC_1(VAR_1));
 VAR_0->xpi_cursor = ((void*)0);
 VAR_0->xpi_ops = VAR_2;
}
