
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_req {int rl_list; int * rl_reply; } ;
struct rpcrdma_buffer {int rb_lock; int rb_send_bufs; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rpcrdma_buffer*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rpcrdma_buffer *VAR_0, struct rpcrdma_req *VAR_1)
{
 if (VAR_1->rl_reply)
  FUNC_1(VAR_0, VAR_1->rl_reply);
 VAR_1->rl_reply = ((void*)0);

 FUNC_2(&VAR_0->rb_lock);
 FUNC_0(&VAR_1->rl_list, &VAR_0->rb_send_bufs);
 FUNC_3(&VAR_0->rb_lock);
}
