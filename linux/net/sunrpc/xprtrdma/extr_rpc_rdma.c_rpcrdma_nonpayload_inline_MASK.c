
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_buf {TYPE_2__* tail; TYPE_1__* head; } ;
struct TYPE_6__ {scalar_t__ rep_max_inline_recv; } ;
struct rpcrdma_xprt {TYPE_3__ rx_ep; } ;
struct rpc_rqst {struct xdr_buf rq_rcv_buf; } ;
struct TYPE_5__ {scalar_t__ iov_len; } ;
struct TYPE_4__ {scalar_t__ iov_len; } ;



__attribute__((used)) static bool
FUNC_0(const struct rpcrdma_xprt *VAR_0,
     const struct rpc_rqst *VAR_1)
{
 const struct xdr_buf *VAR_2 = &VAR_1->rq_rcv_buf;

 return (VAR_2->head[0].iov_len + VAR_2->tail[0].iov_len) <
  VAR_0->rx_ep.rep_max_inline_recv;
}
