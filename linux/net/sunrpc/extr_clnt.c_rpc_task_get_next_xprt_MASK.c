
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_clnt {int cl_xpi; } ;


 struct rpc_xprt* FUNC_0 (struct rpc_clnt*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct rpc_xprt *
FUNC_2(struct rpc_clnt *VAR_0)
{
 return FUNC_0(VAR_0, FUNC_1(&VAR_0->cl_xpi));
}
