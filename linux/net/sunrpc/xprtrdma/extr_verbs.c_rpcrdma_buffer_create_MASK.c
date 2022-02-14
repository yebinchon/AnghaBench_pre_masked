
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rep_max_requests; } ;
struct rpcrdma_buffer {int rb_max_requests; int rb_credits; int rb_free_reps; int rb_send_bufs; int rb_allreqs; int rb_refresh_worker; int rb_all_mrs; int rb_mrs; int rb_lock; scalar_t__ rb_bc_srv_max_requests; } ;
struct rpcrdma_xprt {TYPE_1__ rx_ep; struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_req {int rl_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rpcrdma_buffer*) ;
 int VAR_3 ;
 int FUNC_5 (struct rpcrdma_xprt*) ;
 struct rpcrdma_req* FUNC_6 (struct rpcrdma_xprt*,int ,int ) ;
 int FUNC_7 (struct rpcrdma_xprt*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct rpcrdma_xprt *VAR_4)
{
 struct rpcrdma_buffer *VAR_5 = &VAR_4->rx_buf;
 int VAR_6, VAR_7;

 VAR_5->rb_max_requests = VAR_4->rx_ep.rep_max_requests;
 VAR_5->rb_bc_srv_max_requests = 0;
 FUNC_8(&VAR_5->rb_lock);
 FUNC_0(&VAR_5->rb_mrs);
 FUNC_0(&VAR_5->rb_all_mrs);
 FUNC_1(&VAR_5->rb_refresh_worker, VAR_3);

 FUNC_5(VAR_4);

 FUNC_0(&VAR_5->rb_send_bufs);
 FUNC_0(&VAR_5->rb_allreqs);

 VAR_7 = -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_5->rb_max_requests; VAR_6++) {
  struct rpcrdma_req *VAR_8;

  VAR_8 = FUNC_6(VAR_4, VAR_2,
      VAR_1);
  if (!VAR_8)
   goto out;
  FUNC_3(&VAR_8->rl_list, &VAR_5->rb_send_bufs);
 }

 VAR_5->rb_credits = 1;
 FUNC_2(&VAR_5->rb_free_reps);

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7)
  goto out;

 return 0;
out:
 FUNC_4(VAR_5);
 return VAR_7;
}
