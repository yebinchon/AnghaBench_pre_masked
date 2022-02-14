
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_buffer {int rb_lock; int rb_mrs; } ;
struct rpcrdma_xprt {struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_mr {int * mr_req; struct rpcrdma_xprt* mr_xprt; } ;


 int FUNC_0 (struct rpcrdma_mr*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rpcrdma_mr *VAR_0)
{
 struct rpcrdma_xprt *VAR_1 = VAR_0->mr_xprt;
 struct rpcrdma_buffer *VAR_2 = &VAR_1->rx_buf;

 VAR_0->mr_req = ((void*)0);
 FUNC_1(&VAR_2->rb_lock);
 FUNC_0(VAR_0, &VAR_2->rb_mrs);
 FUNC_2(&VAR_2->rb_lock);
}
