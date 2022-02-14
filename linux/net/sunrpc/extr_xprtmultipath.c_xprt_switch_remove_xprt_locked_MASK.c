
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {scalar_t__ xps_nxprts; int * xps_net; int xps_nactive; } ;
struct rpc_xprt {int xprt_switch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rpc_xprt_switch *VAR_0,
  struct rpc_xprt *VAR_1)
{
 if (FUNC_2(VAR_1 == ((void*)0)))
  return;
 VAR_0->xps_nactive--;
 VAR_0->xps_nxprts--;
 if (VAR_0->xps_nxprts == 0)
  VAR_0->xps_net = ((void*)0);
 FUNC_1();
 FUNC_0(&VAR_1->xprt_switch);
}
