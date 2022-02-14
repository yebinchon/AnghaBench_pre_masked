
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rpc_xprt_switch {int dummy; } ;
struct TYPE_2__ {int xpi_xpswitch; } ;
struct rpc_clnt {TYPE_1__ cl_xpi; } ;


 struct rpc_xprt_switch* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct rpc_xprt_switch*,struct sockaddr const*) ;

bool FUNC_4(struct rpc_clnt *VAR_0,
       const struct sockaddr *VAR_1)
{
 struct rpc_xprt_switch *VAR_2;
 bool VAR_3;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0->cl_xpi.xpi_xpswitch);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_2();
 return VAR_3;
}
