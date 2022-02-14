
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_rqstp; } ;
struct rpc_cred {int cr_flags; } ;
struct TYPE_2__ {struct rpc_cred* rq_cred; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct rpc_task *VAR_1)
{
 struct rpc_cred *VAR_2 = VAR_1->tk_rqstp->rq_cred;

 if (VAR_2)
  FUNC_0(VAR_0, &VAR_2->cr_flags);
}
