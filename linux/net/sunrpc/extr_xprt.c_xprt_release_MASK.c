
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; int transport_lock; } ;
struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; struct rpc_xprt* tk_xprt; scalar_t__ tk_client; } ;
struct rpc_rqst {int (* rq_release_snd_buf ) (struct rpc_rqst*) ;int * rq_cred; int rq_snd_buf; int rq_rcv_buf; scalar_t__ rq_buffer; struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* free_slot ) (struct rpc_xprt*,struct rpc_rqst*) ;int (* buf_free ) (struct rpc_task*) ;int (* release_request ) (struct rpc_task*) ;int (* release_xprt ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (char*,int ,struct rpc_rqst*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (struct rpc_task*) ;
 int FUNC_9 (struct rpc_rqst*) ;
 int FUNC_10 (struct rpc_xprt*,struct rpc_rqst*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rpc_rqst*) ;
 int FUNC_13 (struct rpc_xprt*) ;
 int FUNC_14 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_15 (struct rpc_task*) ;
 int FUNC_16 (struct rpc_xprt*) ;

void FUNC_17(struct rpc_task *VAR_0)
{
 struct rpc_xprt *VAR_1;
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;

 if (VAR_2 == ((void*)0)) {
  if (VAR_0->tk_client) {
   VAR_1 = VAR_0->tk_xprt;
   FUNC_14(VAR_1, VAR_0);
  }
  return;
 }

 VAR_1 = VAR_2->rq_xprt;
 FUNC_15(VAR_0);
 FUNC_4(&VAR_1->transport_lock);
 VAR_1->ops->release_xprt(VAR_1, VAR_0);
 if (VAR_1->ops->release_request)
  VAR_1->ops->release_request(VAR_0);
 FUNC_16(VAR_1);
 FUNC_5(&VAR_1->transport_lock);
 if (VAR_2->rq_buffer)
  VAR_1->ops->buf_free(VAR_0);
 FUNC_13(VAR_1);
 FUNC_11(&VAR_2->rq_rcv_buf);
 FUNC_11(&VAR_2->rq_snd_buf);
 if (VAR_2->rq_cred != ((void*)0))
  FUNC_3(VAR_2->rq_cred);
 VAR_0->tk_rqstp = ((void*)0);
 if (VAR_2->rq_release_snd_buf)
  VAR_2->rq_release_snd_buf(VAR_2);

 FUNC_1("RPC: %5u release request %p\n", VAR_0->tk_pid, VAR_2);
 if (FUNC_2(!FUNC_0(VAR_2)))
  VAR_1->ops->free_slot(VAR_1, VAR_2);
 else
  FUNC_12(VAR_2);
}
