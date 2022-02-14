
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_buffer {int rb_lock; int rb_mrs; } ;
struct rpcrdma_xprt {struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_mr {int dummy; } ;


 struct rpcrdma_mr* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct rpcrdma_mr *
FUNC_3(struct rpcrdma_xprt *VAR_0)
{
 struct rpcrdma_buffer *VAR_1 = &VAR_0->rx_buf;
 struct rpcrdma_mr *VAR_2;

 FUNC_1(&VAR_1->rb_lock);
 VAR_2 = FUNC_0(&VAR_1->rb_mrs);
 FUNC_2(&VAR_1->rb_lock);
 return VAR_2;
}
