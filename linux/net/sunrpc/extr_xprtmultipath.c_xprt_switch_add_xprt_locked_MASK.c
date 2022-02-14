
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {scalar_t__ xps_nxprts; int xps_nactive; int xps_net; int xps_xprt_list; } ;
struct rpc_xprt {int xprt_net; int xprt_switch; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt_switch *VAR_0,
  struct rpc_xprt *VAR_1)
{
 if (FUNC_2(FUNC_3(VAR_1) == ((void*)0)))
  return;
 FUNC_0(&VAR_1->xprt_switch, &VAR_0->xps_xprt_list);
 FUNC_1();
 if (VAR_0->xps_nxprts == 0)
  VAR_0->xps_net = VAR_1->xprt_net;
 VAR_0->xps_nxprts++;
 VAR_0->xps_nactive++;
}
