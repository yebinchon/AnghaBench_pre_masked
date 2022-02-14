
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* rpc_proc; } ;
struct rpc_task {TYPE_3__ tk_msg; TYPE_1__* tk_client; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rtt {int dummy; } ;
struct rpc_rqst {int rq_ntrans; int rq_rtt; } ;
struct TYPE_5__ {unsigned int p_timer; } ;
struct TYPE_4__ {struct rpc_rtt* cl_rtt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_rtt*,unsigned int,int) ;
 int FUNC_2 (struct rpc_rtt*,unsigned int,long) ;
 long FUNC_3 (int ) ;

void FUNC_4(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct rpc_rtt *VAR_2 = VAR_0->tk_client->cl_rtt;
 unsigned int VAR_3 = VAR_0->tk_msg.rpc_proc->p_timer;
 long VAR_4 = FUNC_3(FUNC_0(VAR_1->rq_rtt));

 if (VAR_3) {
  if (VAR_1->rq_ntrans == 1)
   FUNC_2(VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_2, VAR_3, VAR_1->rq_ntrans - 1);
 }
}
