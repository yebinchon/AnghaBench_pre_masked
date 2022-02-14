
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int dummy; } ;
struct rpcrdma_req {int rl_recvbuf; int rl_sendbuf; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {void* rq_rbuffer; void* rq_buffer; int rq_rcvsize; int rq_callsize; int rq_xprt; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 struct rpcrdma_req* FUNC_2 (struct rpc_rqst*) ;
 int FUNC_3 (struct rpcrdma_xprt*,int ,int ,int) ;
 struct rpcrdma_xprt* FUNC_4 (int ) ;
 int FUNC_5 (struct rpc_task*,struct rpcrdma_req*) ;

__attribute__((used)) static int
FUNC_6(struct rpc_task *VAR_5)
{
 struct rpc_rqst *VAR_6 = VAR_5->tk_rqstp;
 struct rpcrdma_xprt *VAR_7 = FUNC_4(VAR_6->rq_xprt);
 struct rpcrdma_req *VAR_8 = FUNC_2(VAR_6);
 gfp_t VAR_9;

 VAR_9 = VAR_2;
 if (FUNC_0(VAR_5))
  VAR_9 = VAR_3 | VAR_1 | VAR_4;

 if (!FUNC_3(VAR_7, VAR_8->rl_sendbuf, VAR_6->rq_callsize,
      VAR_9))
  goto out_fail;
 if (!FUNC_3(VAR_7, VAR_8->rl_recvbuf, VAR_6->rq_rcvsize,
      VAR_9))
  goto out_fail;

 VAR_6->rq_buffer = FUNC_1(VAR_8->rl_sendbuf);
 VAR_6->rq_rbuffer = FUNC_1(VAR_8->rl_recvbuf);
 FUNC_5(VAR_5, VAR_8);
 return 0;

out_fail:
 FUNC_5(VAR_5, ((void*)0));
 return -VAR_0;
}
