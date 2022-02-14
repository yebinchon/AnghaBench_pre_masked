
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_5__ {int read_chunk_count; } ;
struct rpcrdma_xprt {TYPE_2__ rx_stats; } ;
struct rpcrdma_req {struct rpcrdma_mr_seg* rl_segments; struct xdr_stream rl_stream; } ;
struct rpcrdma_mr_seg {int dummy; } ;
struct rpcrdma_mr {scalar_t__ mr_nents; } ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct rpc_rqst {int rq_task; TYPE_3__ rq_snd_buf; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
struct TYPE_4__ {unsigned int iov_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpcrdma_mr_seg*) ;
 int FUNC_1 (struct rpcrdma_mr_seg*) ;
 int FUNC_2 (struct xdr_stream*) ;
 scalar_t__ FUNC_3 (struct xdr_stream*,struct rpcrdma_mr*,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct rpcrdma_xprt*,TYPE_3__*,unsigned int,int,struct rpcrdma_mr_seg*) ;
 struct rpcrdma_mr_seg* FUNC_5 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct rpcrdma_mr_seg*,int,int,struct rpcrdma_mr**) ;
 int VAR_2 ;
 int FUNC_6 (int ,unsigned int,struct rpcrdma_mr*,int) ;

__attribute__((used)) static int FUNC_7(struct rpcrdma_xprt *VAR_3,
        struct rpcrdma_req *VAR_4,
        struct rpc_rqst *VAR_5,
        enum rpcrdma_chunktype VAR_6)
{
 struct xdr_stream *VAR_7 = &VAR_4->rl_stream;
 struct rpcrdma_mr_seg *VAR_8;
 struct rpcrdma_mr *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_6 == VAR_2)
  goto done;

 VAR_10 = VAR_5->rq_snd_buf.head[0].iov_len;
 if (VAR_6 == VAR_1)
  VAR_10 = 0;
 VAR_8 = VAR_4->rl_segments;
 VAR_11 = FUNC_4(VAR_3, &VAR_5->rq_snd_buf, VAR_10,
         VAR_6, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 do {
  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_8, VAR_11, 0, &VAR_9);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);

  if (FUNC_3(VAR_7, VAR_9, VAR_10) < 0)
   return -VAR_0;

  FUNC_6(VAR_5->rq_task, VAR_10, VAR_9, VAR_11);
  VAR_3->rx_stats.read_chunk_count++;
  VAR_11 -= VAR_9->mr_nents;
 } while (VAR_11);

done:
 return FUNC_2(VAR_7);
}
