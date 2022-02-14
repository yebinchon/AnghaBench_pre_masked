
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_bc_srv_max_requests; } ;
struct rpcrdma_xprt {TYPE_1__ rx_buf; } ;
struct rpcrdma_req {int rl_stream; int rl_rdmabuf; int rl_hdrbuf; } ;
struct rpc_rqst {int rq_snd_buf; int rq_xid; int rq_xprt; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct rpcrdma_req* FUNC_2 (struct rpc_rqst*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct rpcrdma_xprt*,struct rpcrdma_req*,int ,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 struct rpcrdma_xprt* FUNC_5 (int ) ;
 int FUNC_6 (struct rpc_rqst*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int ,struct rpc_rqst*) ;
 void** FUNC_9 (int *,int) ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_10(struct rpc_rqst *VAR_6)
{
 struct rpcrdma_xprt *VAR_7 = FUNC_5(VAR_6->rq_xprt);
 struct rpcrdma_req *VAR_8 = FUNC_2(VAR_6);
 __be32 *VAR_9;

 FUNC_4(&VAR_8->rl_hdrbuf, 0);
 FUNC_8(&VAR_8->rl_stream, &VAR_8->rl_hdrbuf,
   FUNC_1(VAR_8->rl_rdmabuf), VAR_6);

 VAR_9 = FUNC_9(&VAR_8->rl_stream, 28);
 if (FUNC_7(!VAR_9))
  return -VAR_0;
 *VAR_9++ = VAR_6->rq_xid;
 *VAR_9++ = VAR_4;
 *VAR_9++ = FUNC_0(VAR_7->rx_buf.rb_bc_srv_max_requests);
 *VAR_9++ = VAR_2;
 *VAR_9++ = VAR_5;
 *VAR_9++ = VAR_5;
 *VAR_9 = VAR_5;

 if (FUNC_3(VAR_7, VAR_8, VAR_1,
          &VAR_6->rq_snd_buf, VAR_3))
  return -VAR_0;

 FUNC_6(VAR_6);
 return 0;
}
