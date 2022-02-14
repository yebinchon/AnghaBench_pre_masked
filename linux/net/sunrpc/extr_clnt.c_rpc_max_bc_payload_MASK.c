
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_clnt {int cl_xprt; } ;
struct TYPE_2__ {size_t (* bc_maxpayload ) (struct rpc_xprt*) ;} ;


 struct rpc_xprt* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t FUNC_3 (struct rpc_xprt*) ;

size_t FUNC_4(struct rpc_clnt *VAR_0)
{
 struct rpc_xprt *VAR_1;
 size_t VAR_2;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->cl_xprt);
 VAR_2 = VAR_1->ops->bc_maxpayload(VAR_1);
 FUNC_2();
 return VAR_2;
}
