
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_13__ {int failed_marshal_count; int nomsg_call_count; } ;
struct TYPE_9__ {int rb_max_requests; } ;
struct rpcrdma_xprt {TYPE_5__ rx_stats; TYPE_1__ rx_buf; } ;
struct TYPE_14__ {int len; } ;
struct rpcrdma_req {TYPE_6__ rl_hdrbuf; int rl_rdmabuf; struct xdr_stream rl_stream; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_12__ {int flags; } ;
struct rpc_rqst {TYPE_8__ rq_snd_buf; TYPE_4__ rq_rcv_buf; TYPE_3__* rq_cred; int rq_xid; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
typedef int __be32 ;
struct TYPE_11__ {TYPE_2__* cr_auth; } ;
struct TYPE_10__ {int au_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rpcrdma_req*) ;
 int FUNC_2 (struct rpcrdma_req*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 struct rpcrdma_req* FUNC_4 (struct rpc_rqst*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct rpcrdma_xprt*,struct rpc_rqst*) ;
 int FUNC_6 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct rpc_rqst*,int) ;
 int FUNC_7 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct rpc_rqst*,int) ;
 int FUNC_8 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct rpc_rqst*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct rpcrdma_xprt*,struct rpc_rqst*) ;
 int FUNC_10 (struct rpcrdma_xprt*,struct rpcrdma_req*,int ,TYPE_8__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (struct rpcrdma_xprt*,struct rpc_rqst*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct rpcrdma_req*,int,int) ;
 int FUNC_14 (struct rpc_rqst*,int) ;
 int FUNC_15 (struct xdr_stream*,TYPE_6__*,int ,struct rpc_rqst*) ;
 int * FUNC_16 (struct xdr_stream*,int) ;

int
FUNC_17(struct rpcrdma_xprt *VAR_12, struct rpc_rqst *VAR_13)
{
 struct rpcrdma_req *VAR_14 = FUNC_4(VAR_13);
 struct xdr_stream *VAR_15 = &VAR_14->rl_stream;
 enum rpcrdma_chunktype VAR_16, VAR_17;
 bool VAR_18;
 __be32 *VAR_19;
 int VAR_20;

 FUNC_12(&VAR_14->rl_hdrbuf, 0);
 FUNC_15(VAR_15, &VAR_14->rl_hdrbuf, FUNC_3(VAR_14->rl_rdmabuf),
   VAR_13);


 VAR_20 = -VAR_0;
 VAR_19 = FUNC_16(VAR_15, 4 * sizeof(*VAR_19));
 if (!VAR_19)
  goto out_err;
 *VAR_19++ = VAR_13->rq_xid;
 *VAR_19++ = VAR_10;
 *VAR_19++ = FUNC_0(VAR_12->rx_buf.rb_max_requests);





 VAR_18 = !(VAR_13->rq_cred->cr_auth->au_flags &
      VAR_1);
 if (FUNC_11(VAR_12, VAR_13))
  VAR_17 = VAR_7;
 else if ((VAR_18 && VAR_13->rq_rcv_buf.flags & VAR_2) &&
   FUNC_9(VAR_12, VAR_13))
  VAR_17 = VAR_11;
 else
  VAR_17 = VAR_9;
 if (FUNC_5(VAR_12, VAR_13)) {
  *VAR_19++ = VAR_4;
  VAR_16 = VAR_7;
 } else if (VAR_18 && VAR_13->rq_snd_buf.flags & VAR_3) {
  *VAR_19++ = VAR_4;
  VAR_16 = VAR_8;
 } else {
  VAR_12->rx_stats.nomsg_call_count++;
  *VAR_19++ = VAR_5;
  VAR_16 = VAR_6;
 }





 FUNC_1(VAR_14);
 VAR_20 = FUNC_6(VAR_12, VAR_14, VAR_13, VAR_16);
 if (VAR_20)
  goto out_err;
 VAR_20 = FUNC_8(VAR_12, VAR_14, VAR_13, VAR_17);
 if (VAR_20)
  goto out_err;
 VAR_20 = FUNC_7(VAR_12, VAR_14, VAR_13, VAR_17);
 if (VAR_20)
  goto out_err;

 VAR_20 = FUNC_10(VAR_12, VAR_14, VAR_14->rl_hdrbuf.len,
     &VAR_13->rq_snd_buf, VAR_16);
 if (VAR_20)
  goto out_err;

 FUNC_13(VAR_14, VAR_16, VAR_17);
 return 0;

out_err:
 FUNC_14(VAR_13, VAR_20);
 VAR_12->rx_stats.failed_marshal_count++;
 FUNC_2(VAR_14);
 return VAR_20;
}
