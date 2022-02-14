
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rep_max_inline_recv; } ;
struct rpcrdma_xprt {TYPE_2__ rx_ep; } ;
struct TYPE_3__ {scalar_t__ buflen; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;



__attribute__((used)) static bool FUNC_0(struct rpcrdma_xprt *VAR_0,
       struct rpc_rqst *VAR_1)
{
 return VAR_1->rq_rcv_buf.buflen <= VAR_0->rx_ep.rep_max_inline_recv;
}
