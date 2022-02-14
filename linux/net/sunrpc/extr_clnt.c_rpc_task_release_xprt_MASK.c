
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_switch {int xps_queuelen; } ;
struct rpc_xprt {int queuelen; } ;
struct TYPE_2__ {int xpi_xpswitch; } ;
struct rpc_clnt {TYPE_1__ cl_xpi; } ;


 int FUNC_0 (int *) ;
 struct rpc_xprt_switch* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_5(struct rpc_clnt *VAR_0, struct rpc_xprt *VAR_1)
{
 struct rpc_xprt_switch *VAR_2;

 FUNC_0(&VAR_1->queuelen);
 FUNC_2();
 VAR_2 = FUNC_1(VAR_0->cl_xpi.xpi_xpswitch);
 FUNC_0(&VAR_2->xps_queuelen);
 FUNC_3();

 FUNC_4(VAR_1);
}
