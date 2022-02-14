
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ qlen; } ;
struct TYPE_13__ {scalar_t__ qlen; } ;
struct TYPE_12__ {int pending_u; int sending_u; int bklog_u; scalar_t__ recvs; scalar_t__ sends; int req_u; } ;
struct TYPE_11__ {scalar_t__ qlen; } ;
struct rpc_xprt {unsigned int connect_cookie; TYPE_7__ sending; int transport_lock; TYPE_6__ pending; TYPE_5__ stat; TYPE_4__ backlog; TYPE_1__* ops; } ;
struct rpc_task {int tk_flags; TYPE_3__* tk_client; } ;
struct rpc_rqst {unsigned int rq_connect_cookie; int rq_ntrans; int rq_bytes_sent; struct rpc_task* rq_task; struct rpc_xprt* rq_xprt; } ;
struct TYPE_10__ {TYPE_2__* cl_stats; } ;
struct TYPE_9__ {int rpcretrans; } ;
struct TYPE_8__ {int (* send_request ) (struct rpc_rqst*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_2 ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (TYPE_7__*,struct rpc_task*,int) ;
 scalar_t__ FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_rqst*) ;
 int FUNC_7 (struct rpc_rqst*,int) ;
 int FUNC_8 (struct rpc_xprt*) ;
 scalar_t__ FUNC_9 (struct rpc_task*) ;
 int FUNC_10 (struct rpc_task*) ;

__attribute__((used)) static int
FUNC_11(struct rpc_rqst *VAR_3, struct rpc_task *VAR_4)
{
 struct rpc_xprt *VAR_5 = VAR_3->rq_xprt;
 struct rpc_task *VAR_6 = VAR_3->rq_task;
 unsigned int VAR_7;
 int VAR_8 = FUNC_1(VAR_6);
 int VAR_9;

 if (!VAR_3->rq_bytes_sent) {
  if (FUNC_9(VAR_6)) {
   VAR_9 = 0;
   goto out_dequeue;
  }

  if (FUNC_3(VAR_6)) {
   VAR_9 = -VAR_0;
   goto out_dequeue;
  }
  if (FUNC_0(VAR_6)) {
   VAR_9 = -VAR_1;
   goto out_dequeue;
  }
 }






 VAR_3->rq_ntrans++;

 VAR_7 = VAR_5->connect_cookie;
 VAR_9 = VAR_5->ops->send_request(VAR_3);
 if (VAR_9 != 0) {
  VAR_3->rq_ntrans--;
  FUNC_7(VAR_3, VAR_9);
  return VAR_9;
 }

 if (VAR_8)
  VAR_6->tk_client->cl_stats->rpcretrans++;

 FUNC_8(VAR_5);

 VAR_6->tk_flags |= VAR_2;
 FUNC_4(&VAR_5->transport_lock);

 VAR_5->stat.sends++;
 VAR_5->stat.req_u += VAR_5->stat.sends - VAR_5->stat.recvs;
 VAR_5->stat.bklog_u += VAR_5->backlog.qlen;
 VAR_5->stat.sending_u += VAR_5->sending.qlen;
 VAR_5->stat.pending_u += VAR_5->pending.qlen;
 FUNC_5(&VAR_5->transport_lock);

 VAR_3->rq_connect_cookie = VAR_7;
out_dequeue:
 FUNC_7(VAR_3, VAR_9);
 FUNC_10(VAR_6);
 FUNC_2(&VAR_5->sending, VAR_6, VAR_9);
 return VAR_9;
}
