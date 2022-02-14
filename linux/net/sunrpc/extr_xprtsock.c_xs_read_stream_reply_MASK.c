
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ copied; int xid; } ;
struct rpc_xprt {int queue_lock; } ;
struct sock_xprt {TYPE_2__ recv; struct rpc_xprt xprt; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct rpc_rqst {TYPE_1__ rq_private_buf; int rq_task; } ;
struct msghdr {int msg_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct rpc_rqst* FUNC_3 (struct rpc_xprt*,int ) ;
 int FUNC_4 (struct rpc_rqst*) ;
 int FUNC_5 (struct rpc_rqst*) ;
 int FUNC_6 (struct sock_xprt*,struct msghdr*,int,struct rpc_rqst*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct sock_xprt *VAR_2, struct msghdr *VAR_3, int VAR_4)
{
 struct rpc_xprt *VAR_5 = &VAR_2->xprt;
 struct rpc_rqst *VAR_6;
 ssize_t VAR_7 = 0;


 FUNC_0(&VAR_5->queue_lock);
 VAR_6 = FUNC_3(VAR_5, VAR_2->recv.xid);
 if (!VAR_6 || (VAR_2->recv.copied && !VAR_6->rq_private_buf.len)) {
  VAR_3->msg_flags |= VAR_1;
  goto out;
 }
 FUNC_4(VAR_6);
 FUNC_1(&VAR_5->queue_lock);

 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_6);

 FUNC_0(&VAR_5->queue_lock);
 if (VAR_3->msg_flags & (VAR_0|VAR_1))
  FUNC_2(VAR_6->rq_task, VAR_2->recv.copied);
 else
  VAR_6->rq_private_buf.len = VAR_2->recv.copied;
 FUNC_5(VAR_6);
out:
 FUNC_1(&VAR_5->queue_lock);
 return VAR_7;
}
