
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_switch {int dummy; } ;
struct TYPE_2__ {int xpi_xpswitch; } ;
struct rpc_clnt {struct rpc_clnt* cl_parent; scalar_t__ cl_autobind; TYPE_1__ cl_xpi; } ;


 struct rpc_xprt_switch* FUNC_0 (int ) ;

__attribute__((used)) static struct rpc_clnt *FUNC_1(struct rpc_clnt *VAR_0)
{
 struct rpc_clnt *VAR_1 = VAR_0->cl_parent;
 struct rpc_xprt_switch *VAR_2 = FUNC_0(VAR_0->cl_xpi.xpi_xpswitch);

 while (VAR_1 != VAR_0) {
  if (FUNC_0(VAR_1->cl_xpi.xpi_xpswitch) != VAR_2)
   break;
  if (VAR_0->cl_autobind)
   break;
  VAR_0 = VAR_1;
  VAR_1 = VAR_1->cl_parent;
 }
 return VAR_0;
}
