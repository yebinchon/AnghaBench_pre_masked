
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_clnt {int cl_xprt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct rpc_xprt* FUNC_3 (struct rpc_clnt*,struct rpc_xprt*) ;
 struct rpc_xprt* FUNC_4 (int ) ;

__attribute__((used)) static struct rpc_xprt *
FUNC_5(struct rpc_clnt *VAR_0)
{
 struct rpc_xprt *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_4(FUNC_0(VAR_0->cl_xprt));
 FUNC_2();
 return FUNC_3(VAR_0, VAR_1);
}
