
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_task {int tk_status; struct rpc_rqst* tk_rqstp; } ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct rpc_rqst {TYPE_2__ rq_snd_buf; scalar_t__ rq_reply_bytes_recvd; int rq_rcvsize; int rq_rbuffer; TYPE_2__ rq_rcv_buf; int rq_callsize; int rq_buffer; } ;
struct TYPE_5__ {int iov_base; scalar_t__ iov_len; } ;


 scalar_t__ FUNC_0 (struct rpc_task*,struct xdr_stream*) ;
 int FUNC_1 (struct rpc_task*,struct xdr_stream*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct xdr_stream*,TYPE_2__*,int ,struct rpc_rqst*) ;

__attribute__((used)) static void
FUNC_5(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct xdr_stream VAR_2;

 FUNC_2(&VAR_1->rq_snd_buf,
       VAR_1->rq_buffer,
       VAR_1->rq_callsize);
 FUNC_2(&VAR_1->rq_rcv_buf,
       VAR_1->rq_rbuffer,
       VAR_1->rq_rcvsize);

 VAR_1->rq_reply_bytes_recvd = 0;
 VAR_1->rq_snd_buf.head[0].iov_len = 0;
 FUNC_4(&VAR_2, &VAR_1->rq_snd_buf,
   VAR_1->rq_snd_buf.head[0].iov_base, VAR_1);
 FUNC_3(&VAR_1->rq_snd_buf);
 if (FUNC_0(VAR_0, &VAR_2))
  return;

 VAR_0->tk_status = FUNC_1(VAR_0, &VAR_2);
}
