
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct rpc_xprt_switch {int xps_nxprts; struct list_head xps_xprt_list; } ;
struct rpc_xprt_iter {int * xpi_cursor; int xpi_xpswitch; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt_switch* FUNC_0 (int ) ;
 struct rpc_xprt* FUNC_1 (struct list_head*,int *) ;
 struct rpc_xprt* FUNC_2 (struct list_head*) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_3(struct rpc_xprt_iter *VAR_0)
{
 struct rpc_xprt_switch *VAR_1 = FUNC_0(VAR_0->xpi_xpswitch);
 struct list_head *VAR_2;

 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_2 = &VAR_1->xps_xprt_list;
 if (VAR_0->xpi_cursor == ((void*)0) || VAR_1->xps_nxprts < 2)
  return FUNC_2(VAR_2);
 return FUNC_1(VAR_2, VAR_0->xpi_cursor);
}
