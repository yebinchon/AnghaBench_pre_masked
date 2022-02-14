
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rb_refresh_worker; } ;
struct TYPE_5__ {int rep_connected; } ;
struct rpcrdma_xprt {TYPE_3__ rx_buf; TYPE_2__ rx_ep; int rx_xprt; } ;
struct TYPE_4__ {int rq_xid; } ;
struct rpcrdma_req {TYPE_1__ rl_slot; int rl_registered; int rl_free_mrs; } ;
struct rpcrdma_mr_seg {int dummy; } ;
struct rpcrdma_mr {struct rpcrdma_req* mr_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpcrdma_mr_seg* FUNC_0 (int ) ;
 struct rpcrdma_mr_seg* FUNC_1 (struct rpcrdma_xprt*,struct rpcrdma_mr_seg*,int,int,int ,struct rpcrdma_mr*) ;
 struct rpcrdma_mr* FUNC_2 (struct rpcrdma_xprt*) ;
 struct rpcrdma_mr* FUNC_3 (int *) ;
 int FUNC_4 (struct rpcrdma_mr*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpcrdma_req*) ;
 int FUNC_7 (struct rpcrdma_req*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct rpcrdma_mr_seg *FUNC_9(struct rpcrdma_xprt *VAR_2,
       struct rpcrdma_req *VAR_3,
       struct rpcrdma_mr_seg *VAR_4,
       int VAR_5, bool VAR_6,
       struct rpcrdma_mr **VAR_7)
{
 *VAR_7 = FUNC_3(&VAR_3->rl_free_mrs);
 if (!*VAR_7) {
  *VAR_7 = FUNC_2(VAR_2);
  if (!*VAR_7)
   goto out_getmr_err;
  FUNC_6(VAR_3);
  (*VAR_7)->mr_req = VAR_3;
 }

 FUNC_4(*VAR_7, &VAR_3->rl_registered);
 return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, VAR_3->rl_slot.rq_xid, *VAR_7);

out_getmr_err:
 FUNC_7(VAR_3);
 FUNC_8(&VAR_2->rx_xprt);
 if (VAR_2->rx_ep.rep_connected != -VAR_1)
  FUNC_5(&VAR_2->rx_buf.rb_refresh_worker);
 return FUNC_0(-VAR_0);
}
