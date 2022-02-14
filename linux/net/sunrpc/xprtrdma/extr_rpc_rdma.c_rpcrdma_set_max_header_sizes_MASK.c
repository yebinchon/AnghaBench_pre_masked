
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_ep {scalar_t__ rep_inline_recv; scalar_t__ rep_max_inline_recv; scalar_t__ rep_inline_send; scalar_t__ rep_max_inline_send; } ;
struct TYPE_2__ {unsigned int ri_max_segs; } ;
struct rpcrdma_xprt {struct rpcrdma_ep rx_ep; TYPE_1__ rx_ia; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

void FUNC_2(struct rpcrdma_xprt *VAR_0)
{
 unsigned int VAR_1 = VAR_0->rx_ia.ri_max_segs;
 struct rpcrdma_ep *VAR_2 = &VAR_0->rx_ep;

 VAR_2->rep_max_inline_send =
  VAR_2->rep_inline_send - FUNC_0(VAR_1);
 VAR_2->rep_max_inline_recv =
  VAR_2->rep_inline_recv - FUNC_1(VAR_1);
}
