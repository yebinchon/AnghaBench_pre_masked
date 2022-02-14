
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct rpc_xprt {int queue_lock; int transport_lock; } ;
struct rpc_task {int dummy; } ;
struct TYPE_2__ {int buflen; } ;
struct rpc_rqst {TYPE_1__ rq_private_buf; struct rpc_task* rq_task; } ;
typedef int _xid ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (struct sk_buff*,int ,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_xprt*,struct rpc_task*,int) ;
 int FUNC_7 (struct rpc_task*,int) ;
 struct rpc_rqst* FUNC_8 (struct rpc_xprt*,int ) ;
 int FUNC_9 (struct rpc_rqst*) ;
 int FUNC_10 (struct rpc_rqst*) ;
 int FUNC_11 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_12(struct rpc_xprt *VAR_2,
  struct sock *VAR_3,
  struct sk_buff *VAR_4)
{
 struct rpc_task *VAR_5;
 struct rpc_rqst *VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9;
 __be32 *VAR_10;

 VAR_7 = VAR_4->len;
 if (VAR_7 < 4) {
  FUNC_2("RPC:       impossible RPC reply size %d!\n", VAR_7);
  return;
 }


 VAR_10 = FUNC_3(VAR_4, 0, sizeof(VAR_9), &VAR_9);
 if (VAR_10 == ((void*)0))
  return;


 FUNC_4(&VAR_2->queue_lock);
 VAR_6 = FUNC_8(VAR_2, *VAR_10);
 if (!VAR_6)
  goto out_unlock;
 FUNC_9(VAR_6);
 FUNC_11(VAR_6->rq_task);
 FUNC_5(&VAR_2->queue_lock);
 VAR_5 = VAR_6->rq_task;

 if ((VAR_8 = VAR_6->rq_private_buf.buflen) > VAR_7)
  VAR_8 = VAR_7;


 if (FUNC_1(&VAR_6->rq_private_buf, VAR_4)) {
  FUNC_4(&VAR_2->queue_lock);
  FUNC_0(VAR_3, VAR_1);
  goto out_unpin;
 }


 FUNC_4(&VAR_2->transport_lock);
 FUNC_6(VAR_2, VAR_5, VAR_8);
 FUNC_5(&VAR_2->transport_lock);
 FUNC_4(&VAR_2->queue_lock);
 FUNC_7(VAR_5, VAR_8);
 FUNC_0(VAR_3, VAR_0);
out_unpin:
 FUNC_10(VAR_6);
 out_unlock:
 FUNC_5(&VAR_2->queue_lock);
}
