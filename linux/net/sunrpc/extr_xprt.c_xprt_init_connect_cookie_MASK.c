
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_rqst {scalar_t__ rq_connect_cookie; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_1(struct rpc_rqst *VAR_0, struct rpc_xprt *VAR_1)
{
 VAR_0->rq_connect_cookie = FUNC_0(VAR_1) - 1;
}
