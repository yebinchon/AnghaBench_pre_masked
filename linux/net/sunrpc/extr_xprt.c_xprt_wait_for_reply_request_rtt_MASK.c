
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* rpc_proc; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; struct rpc_clnt* tk_client; TYPE_4__ tk_msg; } ;
struct rpc_rtt {int dummy; } ;
struct rpc_rqst {unsigned long rq_retries; TYPE_2__* rq_xprt; } ;
struct rpc_clnt {TYPE_1__* cl_timeout; struct rpc_rtt* cl_rtt; } ;
struct TYPE_7__ {int p_timer; } ;
struct TYPE_6__ {int pending; } ;
struct TYPE_5__ {unsigned long to_maxval; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (struct rpc_rtt*,int) ;
 unsigned long FUNC_1 (struct rpc_rtt*,int) ;
 int FUNC_2 (int *,struct rpc_task*,int ,scalar_t__) ;
 int VAR_1 ;

void FUNC_3(struct rpc_task *VAR_2)
{
 int VAR_3 = VAR_2->tk_msg.rpc_proc->p_timer;
 struct rpc_clnt *VAR_4 = VAR_2->tk_client;
 struct rpc_rtt *VAR_5 = VAR_4->cl_rtt;
 struct rpc_rqst *VAR_6 = VAR_2->tk_rqstp;
 unsigned long VAR_7 = VAR_4->cl_timeout->to_maxval;
 unsigned long VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_3);
 VAR_8 <<= FUNC_1(VAR_5, VAR_3) + VAR_6->rq_retries;
 if (VAR_8 > VAR_7 || VAR_8 == 0)
  VAR_8 = VAR_7;
 FUNC_2(&VAR_6->rq_xprt->pending, VAR_2, VAR_1,
   VAR_0 + VAR_8);
}
