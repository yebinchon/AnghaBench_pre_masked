
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int reply_waits_for_send; int empty_sendctx_q; int local_inv_needed; int mrs_allocated; int mrs_orphaned; int mrs_recycled; int nomsg_call_count; int bad_reply_count; int failed_marshal_count; int hardway_register_count; int fixup_copy_count; int pullup_copy_count; int total_rdma_reply; int total_rdma_request; int reply_chunk_count; int write_chunk_count; int read_chunk_count; } ;
struct rpcrdma_xprt {TYPE_2__ rx_stats; } ;
struct TYPE_3__ {long connect_time; int bklog_u; int req_u; int bad_xids; int recvs; int sends; int connect_count; int bind_count; } ;
struct rpc_xprt {TYPE_1__ stat; scalar_t__ last_used; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rpcrdma_xprt* FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,long,long,int ,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 scalar_t__ FUNC_3 (struct rpc_xprt*) ;

void FUNC_4(struct rpc_xprt *VAR_2, struct seq_file *VAR_3)
{
 struct rpcrdma_xprt *VAR_4 = FUNC_0(VAR_2);
 long VAR_5 = 0;

 if (FUNC_3(VAR_2))
  VAR_5 = (long)(VAR_1 - VAR_2->last_used) / VAR_0;

 FUNC_2(VAR_3, "\txprt:\trdma ");
 FUNC_1(VAR_3, "%u %lu %lu %lu %ld %lu %lu %lu %llu %llu ",
     0,
     VAR_2->stat.bind_count,
     VAR_2->stat.connect_count,
     VAR_2->stat.connect_time / VAR_0,
     VAR_5,
     VAR_2->stat.sends,
     VAR_2->stat.recvs,
     VAR_2->stat.bad_xids,
     VAR_2->stat.req_u,
     VAR_2->stat.bklog_u);
 FUNC_1(VAR_3, "%lu %lu %lu %llu %llu %llu %llu %lu %lu %lu %lu ",
     VAR_4->rx_stats.read_chunk_count,
     VAR_4->rx_stats.write_chunk_count,
     VAR_4->rx_stats.reply_chunk_count,
     VAR_4->rx_stats.total_rdma_request,
     VAR_4->rx_stats.total_rdma_reply,
     VAR_4->rx_stats.pullup_copy_count,
     VAR_4->rx_stats.fixup_copy_count,
     VAR_4->rx_stats.hardway_register_count,
     VAR_4->rx_stats.failed_marshal_count,
     VAR_4->rx_stats.bad_reply_count,
     VAR_4->rx_stats.nomsg_call_count);
 FUNC_1(VAR_3, "%lu %lu %lu %lu %lu %lu\n",
     VAR_4->rx_stats.mrs_recycled,
     VAR_4->rx_stats.mrs_orphaned,
     VAR_4->rx_stats.mrs_allocated,
     VAR_4->rx_stats.local_inv_needed,
     VAR_4->rx_stats.empty_sendctx_q,
     VAR_4->rx_stats.reply_waits_for_send);
}
