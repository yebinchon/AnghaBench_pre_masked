
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rpc_cred; } ;
struct rpc_task {int tk_status; TYPE_3__* tk_rqstp; int tk_flags; TYPE_2__ tk_msg; } ;
struct rpc_cred {TYPE_1__* cr_ops; } ;
struct TYPE_6__ {struct rpc_cred* rq_cred; } ;
struct TYPE_4__ {int (* crrefresh ) (struct rpc_task*) ;} ;


 int FUNC_0 (struct rpc_task*,int ,int ) ;
 int FUNC_1 (struct rpc_task*) ;

int
FUNC_2(struct rpc_task *VAR_0)
{
 struct rpc_cred *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->tk_rqstp->rq_cred;
 if (VAR_1 == ((void*)0)) {
  VAR_2 = FUNC_0(VAR_0, VAR_0->tk_msg.rpc_cred, VAR_0->tk_flags);
  if (VAR_2 < 0)
   goto out;
  VAR_1 = VAR_0->tk_rqstp->rq_cred;
 }

 VAR_2 = VAR_1->cr_ops->crrefresh(VAR_0);
out:
 if (VAR_2 < 0)
  VAR_0->tk_status = VAR_2;
 return VAR_2;
}
