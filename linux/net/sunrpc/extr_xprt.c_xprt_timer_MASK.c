
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_task {int tk_status; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_reply_bytes_recvd; int rq_xid; struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* timer ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_1 (struct rpc_xprt*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 if (VAR_1->tk_status != -VAR_0)
  return;

 FUNC_1(VAR_3, VAR_2->rq_xid, VAR_1->tk_status);
 if (!VAR_2->rq_reply_bytes_recvd) {
  if (VAR_3->ops->timer)
   VAR_3->ops->timer(VAR_3, VAR_1);
 } else
  VAR_1->tk_status = 0;
}
