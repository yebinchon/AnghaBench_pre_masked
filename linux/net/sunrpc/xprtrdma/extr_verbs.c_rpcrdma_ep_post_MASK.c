
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_req {int rl_kref; TYPE_1__* rl_sendctx; } ;
struct rpcrdma_ia {int dummy; } ;
struct rpcrdma_ep {scalar_t__ rep_send_count; scalar_t__ rep_send_batch; } ;
struct ib_send_wr {int send_flags; } ;
struct TYPE_2__ {struct ib_send_wr sc_wr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpcrdma_ia*,struct rpcrdma_req*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpcrdma_req*,int) ;

int
FUNC_3(struct rpcrdma_ia *VAR_2,
  struct rpcrdma_ep *VAR_3,
  struct rpcrdma_req *VAR_4)
{
 struct ib_send_wr *VAR_5 = &VAR_4->rl_sendctx->sc_wr;
 int VAR_6;

 if (!VAR_3->rep_send_count || FUNC_1(&VAR_4->rl_kref) > 1) {
  VAR_5->send_flags |= VAR_1;
  VAR_3->rep_send_count = VAR_3->rep_send_batch;
 } else {
  VAR_5->send_flags &= ~VAR_1;
  --VAR_3->rep_send_count;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 FUNC_2(VAR_4, VAR_6);
 if (VAR_6)
  return -VAR_0;
 return 0;
}
