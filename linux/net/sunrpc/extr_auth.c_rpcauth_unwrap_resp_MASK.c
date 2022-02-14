
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_task {TYPE_2__* tk_rqstp; } ;
struct rpc_credops {int (* crunwrap_resp ) (struct rpc_task*,struct xdr_stream*) ;} ;
struct TYPE_4__ {TYPE_1__* rq_cred; } ;
struct TYPE_3__ {struct rpc_credops* cr_ops; } ;


 int FUNC_0 (struct rpc_task*,struct xdr_stream*) ;

int
FUNC_1(struct rpc_task *VAR_0, struct xdr_stream *VAR_1)
{
 const struct rpc_credops *VAR_2 = VAR_0->tk_rqstp->rq_cred->cr_ops;

 return VAR_2->crunwrap_resp(VAR_0, VAR_1);
}
