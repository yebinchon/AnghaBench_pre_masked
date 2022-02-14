
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int total_rdma_reply; int fixup_copy_count; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; } ;
struct rpcrdma_rep {struct xdr_stream rr_stream; } ;
struct rpc_rqst {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xdr_stream*) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int*) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,int*) ;
 scalar_t__ FUNC_3 (struct rpc_rqst*,char*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct xdr_stream*,int ) ;
 int FUNC_7 (struct xdr_stream*) ;

__attribute__((used)) static int
FUNC_8(struct rpcrdma_xprt *VAR_1, struct rpcrdma_rep *VAR_2,
     struct rpc_rqst *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_2->rr_stream;
 u32 VAR_5, VAR_6, VAR_7;
 char *VAR_8;


 if (FUNC_0(VAR_4))
  return -VAR_0;
 if (FUNC_2(VAR_4, &VAR_5))
  return -VAR_0;
 if (FUNC_1(VAR_4, &VAR_6))
  return -VAR_0;


 if (FUNC_4(VAR_6))
  return -VAR_0;


 VAR_8 = (char *)FUNC_6(VAR_4, 0);
 VAR_7 = FUNC_7(VAR_4);
 VAR_1->rx_stats.fixup_copy_count +=
  FUNC_3(VAR_3, VAR_8, VAR_7, VAR_5 & 3);

 VAR_1->rx_stats.total_rdma_reply += VAR_5;
 return VAR_7 + FUNC_5(VAR_5);
}
