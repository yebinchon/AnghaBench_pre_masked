
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; int tk_start; scalar_t__ tk_timeouts; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {scalar_t__ rq_rtt; int rq_task; scalar_t__ rq_xtime; scalar_t__ rq_reply_bytes_recvd; scalar_t__ rq_xmit_bytes_sent; int rq_ntrans; } ;
struct rpc_iostats {int om_lock; int om_error_status; void* om_execute; void* om_rtt; void* om_queue; int om_bytes_recv; int om_bytes_sent; int om_timeouts; int om_ntrans; int om_ops; } ;
typedef scalar_t__ ktime_t ;


 void* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_8(const struct rpc_task *VAR_0,
          struct rpc_iostats *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;
 ktime_t VAR_3, VAR_4, VAR_5;

 if (!VAR_1 || !VAR_2)
  return;

 VAR_5 = FUNC_1();
 FUNC_5(&VAR_1->om_lock);

 VAR_1->om_ops++;

 VAR_1->om_ntrans += FUNC_4(VAR_2->rq_ntrans, 1);
 VAR_1->om_timeouts += VAR_0->tk_timeouts;

 VAR_1->om_bytes_sent += VAR_2->rq_xmit_bytes_sent;
 VAR_1->om_bytes_recv += VAR_2->rq_reply_bytes_recvd;

 VAR_3 = 0;
 if (FUNC_3(VAR_2->rq_xtime)) {
  VAR_3 = FUNC_2(VAR_2->rq_xtime, VAR_0->tk_start);
  VAR_1->om_queue = FUNC_0(VAR_1->om_queue, VAR_3);
 }

 VAR_1->om_rtt = FUNC_0(VAR_1->om_rtt, VAR_2->rq_rtt);

 VAR_4 = FUNC_2(VAR_5, VAR_0->tk_start);
 VAR_1->om_execute = FUNC_0(VAR_1->om_execute, VAR_4);
 if (VAR_0->tk_status < 0)
  VAR_1->om_error_status++;

 FUNC_6(&VAR_1->om_lock);

 FUNC_7(VAR_2->rq_task, VAR_3, VAR_2->rq_rtt, VAR_4);
}
