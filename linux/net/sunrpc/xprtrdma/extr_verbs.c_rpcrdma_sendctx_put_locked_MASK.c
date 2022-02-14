
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_sendctx {TYPE_1__* sc_xprt; } ;
struct rpcrdma_buffer {unsigned long rb_sc_tail; struct rpcrdma_sendctx** rb_sc_ctxs; } ;
struct TYPE_2__ {int rx_xprt; struct rpcrdma_buffer rx_buf; } ;


 unsigned long FUNC_0 (struct rpcrdma_buffer*,unsigned long) ;
 int FUNC_1 (struct rpcrdma_sendctx*) ;
 int FUNC_2 (unsigned long*,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rpcrdma_sendctx *VAR_0)
{
 struct rpcrdma_buffer *VAR_1 = &VAR_0->sc_xprt->rx_buf;
 unsigned long VAR_2;




 VAR_2 = VAR_1->rb_sc_tail;
 do {
  VAR_2 = FUNC_0(VAR_1, VAR_2);


  FUNC_1(VAR_1->rb_sc_ctxs[VAR_2]);

 } while (VAR_1->rb_sc_ctxs[VAR_2] != VAR_0);


 FUNC_2(&VAR_1->rb_sc_tail, VAR_2);

 FUNC_3(&VAR_0->sc_xprt->rx_xprt);
}
