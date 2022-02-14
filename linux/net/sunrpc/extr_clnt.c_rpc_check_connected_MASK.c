
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_xprt; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(const struct rpc_rqst *VAR_0)
{

 if (!VAR_0 || !VAR_0->rq_xprt)
  return 1;
 return FUNC_0(VAR_0->rq_xprt);
}
