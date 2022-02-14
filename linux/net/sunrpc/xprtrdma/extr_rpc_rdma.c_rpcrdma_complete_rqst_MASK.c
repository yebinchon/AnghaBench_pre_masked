
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bad_reply_count; } ;
struct rpc_xprt {int queue_lock; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; struct rpc_xprt rx_xprt; } ;
struct rpcrdma_rep {int rr_proc; struct rpc_rqst* rr_rqst; struct rpcrdma_xprt* rr_rxprt; } ;
struct rpc_rqst {int rq_task; } ;


 int VAR_0 ;



 int FUNC_0 (struct rpcrdma_xprt*,struct rpcrdma_rep*,struct rpc_rqst*) ;
 int FUNC_1 (struct rpcrdma_xprt*,struct rpcrdma_rep*,struct rpc_rqst*) ;
 int FUNC_2 (struct rpcrdma_xprt*,struct rpcrdma_rep*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpcrdma_rep*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct rpc_rqst*) ;

void FUNC_8(struct rpcrdma_rep *VAR_1)
{
 struct rpcrdma_xprt *VAR_2 = VAR_1->rr_rxprt;
 struct rpc_xprt *VAR_3 = &VAR_2->rx_xprt;
 struct rpc_rqst *VAR_4 = VAR_1->rr_rqst;
 int VAR_5;

 switch (VAR_1->rr_proc) {
 case 129:
  VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_1);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 if (VAR_5 < 0)
  goto out_badheader;

out:
 FUNC_3(&VAR_3->queue_lock);
 FUNC_6(VAR_4->rq_task, VAR_5);
 FUNC_7(VAR_4);
 FUNC_4(&VAR_3->queue_lock);
 return;





out_badheader:
 FUNC_5(VAR_1);
 VAR_2->rx_stats.bad_reply_count++;
 goto out;
}
