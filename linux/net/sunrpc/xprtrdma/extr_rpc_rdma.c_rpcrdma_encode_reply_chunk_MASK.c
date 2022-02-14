
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int total_rdma_request; int reply_chunk_count; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; } ;
struct rpcrdma_req {struct rpcrdma_mr_seg* rl_segments; struct xdr_stream rl_stream; } ;
struct rpcrdma_mr_seg {int dummy; } ;
struct rpcrdma_mr {scalar_t__ mr_nents; scalar_t__ mr_length; } ;
struct rpc_rqst {int rq_task; int rq_rcv_buf; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpcrdma_mr_seg*) ;
 int FUNC_1 (struct rpcrdma_mr_seg*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xdr_stream*) ;
 scalar_t__ FUNC_4 (struct xdr_stream*) ;
 scalar_t__ FUNC_5 (struct xdr_stream*,struct rpcrdma_mr*) ;
 int FUNC_6 (struct rpcrdma_xprt*,int *,int ,int,struct rpcrdma_mr_seg*) ;
 struct rpcrdma_mr_seg* FUNC_7 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct rpcrdma_mr_seg*,int,int,struct rpcrdma_mr**) ;
 int VAR_1 ;
 int FUNC_8 (int ,struct rpcrdma_mr*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int * FUNC_10 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_11(struct rpcrdma_xprt *VAR_2,
          struct rpcrdma_req *VAR_3,
          struct rpc_rqst *VAR_4,
          enum rpcrdma_chunktype VAR_5)
{
 struct xdr_stream *VAR_6 = &VAR_3->rl_stream;
 struct rpcrdma_mr_seg *VAR_7;
 struct rpcrdma_mr *VAR_8;
 int VAR_9, VAR_10;
 __be32 *VAR_11;

 if (VAR_5 != VAR_1)
  return FUNC_3(VAR_6);

 VAR_7 = VAR_3->rl_segments;
 VAR_9 = FUNC_6(VAR_2, &VAR_4->rq_rcv_buf, 0, VAR_5, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_4(VAR_6) < 0)
  return -VAR_0;
 VAR_11 = FUNC_10(VAR_6, sizeof(*VAR_11));
 if (FUNC_9(!VAR_11))
  return -VAR_0;


 VAR_10 = 0;
 do {
  VAR_7 = FUNC_7(VAR_2, VAR_3, VAR_7, VAR_9, 1, &VAR_8);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  if (FUNC_5(VAR_6, VAR_8) < 0)
   return -VAR_0;

  FUNC_8(VAR_4->rq_task, VAR_8, VAR_9);
  VAR_2->rx_stats.reply_chunk_count++;
  VAR_2->rx_stats.total_rdma_request += VAR_8->mr_length;
  VAR_10++;
  VAR_9 -= VAR_8->mr_nents;
 } while (VAR_9);


 *VAR_11 = FUNC_2(VAR_10);

 return 0;
}
