
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt_iter {int dummy; } ;
struct TYPE_2__ {int xpi_xpswitch; } ;
struct rpc_clnt {TYPE_1__ cl_xpi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct rpc_xprt_iter*,struct rpc_xprt_switch*) ;
 struct rpc_xprt_switch* FUNC_4 (int ) ;
 int FUNC_5 (struct rpc_xprt_switch*) ;

__attribute__((used)) static
int FUNC_6(struct rpc_clnt *VAR_1, struct rpc_xprt_iter *VAR_2)
{
 struct rpc_xprt_switch *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_4(FUNC_0(VAR_1->cl_xpi.xpi_xpswitch));
 FUNC_2();
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_3(VAR_2, VAR_3);
 FUNC_5(VAR_3);
 return 0;
}
