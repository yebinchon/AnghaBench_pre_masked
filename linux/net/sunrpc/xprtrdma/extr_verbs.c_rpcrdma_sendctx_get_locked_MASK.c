
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int empty_sendctx_q; } ;
struct rpcrdma_buffer {unsigned long rb_sc_head; struct rpcrdma_sendctx** rb_sc_ctxs; int rb_sc_tail; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; int rx_xprt; struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_sendctx {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct rpcrdma_buffer*,unsigned long) ;
 int FUNC_2 (int *) ;

struct rpcrdma_sendctx *FUNC_3(struct rpcrdma_xprt *VAR_0)
{
 struct rpcrdma_buffer *VAR_1 = &VAR_0->rx_buf;
 struct rpcrdma_sendctx *VAR_2;
 unsigned long VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_1->rb_sc_head);

 if (VAR_3 == FUNC_0(VAR_1->rb_sc_tail))
  goto out_emptyq;


 VAR_2 = VAR_1->rb_sc_ctxs[VAR_3];




 VAR_1->rb_sc_head = VAR_3;

 return VAR_2;

out_emptyq:




 FUNC_2(&VAR_0->rx_xprt);
 VAR_0->rx_stats.empty_sendctx_q++;
 return ((void*)0);
}
