
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_flags; scalar_t__ tk_xprt; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 scalar_t__ FUNC_1 (struct rpc_clnt*) ;

__attribute__((used)) static
void FUNC_2(struct rpc_task *VAR_1, struct rpc_clnt *VAR_2)
{
 if (VAR_1->tk_xprt)
  return;
 if (VAR_1->tk_flags & VAR_0)
  VAR_1->tk_xprt = FUNC_0(VAR_2);
 else
  VAR_1->tk_xprt = FUNC_1(VAR_2);
}
