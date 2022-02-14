
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_rqstp; } ;
struct rpc_cred {TYPE_2__* cr_ops; } ;
struct TYPE_4__ {int (* crneed_reencode ) (struct rpc_task*) ;} ;
struct TYPE_3__ {struct rpc_cred* rq_cred; } ;


 int FUNC_0 (struct rpc_task*) ;

bool
FUNC_1(struct rpc_task *VAR_0)
{
 struct rpc_cred *VAR_1 = VAR_0->tk_rqstp->rq_cred;

 if (!VAR_1 || !VAR_1->cr_ops->crneed_reencode)
  return 0;
 return VAR_1->cr_ops->crneed_reencode(VAR_0);
}
