
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; struct rpc_rqst* tk_rqstp; struct rpc_clnt* tk_client; } ;
struct rpc_rqst {int rq_xid; } ;
struct rpc_clnt {int cl_vers; int cl_prog; } ;
typedef void* __be32 ;
struct TYPE_3__ {int p_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct rpc_task*,int) ;
 int FUNC_2 (struct rpc_task*,struct xdr_stream*) ;
 int FUNC_3 (struct rpc_task*) ;
 void** FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int
FUNC_5(struct rpc_task *VAR_4, struct xdr_stream *VAR_5)
{
 struct rpc_clnt *VAR_6 = VAR_4->tk_client;
 struct rpc_rqst *VAR_7 = VAR_4->tk_rqstp;
 __be32 *VAR_8;
 int VAR_9;

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_4(VAR_5, VAR_1 << 2);
 if (!VAR_8)
  goto out_fail;
 *VAR_8++ = VAR_7->rq_xid;
 *VAR_8++ = VAR_3;
 *VAR_8++ = FUNC_0(VAR_2);
 *VAR_8++ = FUNC_0(VAR_6->cl_prog);
 *VAR_8++ = FUNC_0(VAR_6->cl_vers);
 *VAR_8 = FUNC_0(VAR_4->tk_msg.rpc_proc->p_proc);

 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (VAR_9 < 0)
  goto out_fail;
 return 0;
out_fail:
 FUNC_3(VAR_4);
 FUNC_1(VAR_4, VAR_9);
 return VAR_9;
}
