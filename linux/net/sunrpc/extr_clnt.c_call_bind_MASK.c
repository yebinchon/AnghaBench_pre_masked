
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt {TYPE_2__* ops; } ;
struct rpc_task {int tk_action; TYPE_1__* tk_rqstp; } ;
struct TYPE_4__ {int (* rpcbind ) (struct rpc_task*) ;} ;
struct TYPE_3__ {struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 scalar_t__ FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*) ;
 scalar_t__ FUNC_4 (struct rpc_xprt*) ;
 int FUNC_5 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_6(struct rpc_task *VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_2->tk_rqstp->rq_xprt;

 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  return;
 }

 if (FUNC_4(VAR_3)) {
  VAR_2->tk_action = VAR_1;
  return;
 }

 FUNC_0(VAR_2);

 VAR_2->tk_action = VAR_0;
 if (!FUNC_5(VAR_2))
  return;

 VAR_3->ops->rpcbind(VAR_2);
}
