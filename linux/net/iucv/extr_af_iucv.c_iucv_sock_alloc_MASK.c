
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; int sk_state; int sk_sndtimeo; int sk_destruct; } ;
struct TYPE_2__ {int lock; int list; } ;
struct iucv_sock {int transport; int src_user_id; int sk_txnotify; int * path; int msg_recv; int msg_sent; scalar_t__ msglimit; scalar_t__ flags; int pendings; scalar_t__ send_tag; int backlog_skb_q; TYPE_1__ message_q; int send_skb_q; int accept_q_lock; int accept_q; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct iucv_sock* FUNC_2 (struct sock*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,struct sock*) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ VAR_11 ;
 struct sock* FUNC_5 (int *,int ,int ,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct sock *FUNC_10(struct socket *VAR_12, int VAR_13, gfp_t VAR_14, int VAR_15)
{
 struct sock *VAR_16;
 struct iucv_sock *VAR_17;

 VAR_16 = FUNC_5(&VAR_7, VAR_4, VAR_14, &VAR_8, VAR_15);
 if (!VAR_16)
  return ((void*)0);
 VAR_17 = FUNC_2(VAR_16);

 FUNC_7(VAR_12, VAR_16);
 FUNC_0(&VAR_17->accept_q);
 FUNC_9(&VAR_17->accept_q_lock);
 FUNC_6(&VAR_17->send_skb_q);
 FUNC_0(&VAR_17->message_q.list);
 FUNC_9(&VAR_17->message_q.lock);
 FUNC_6(&VAR_17->backlog_skb_q);
 VAR_17->send_tag = 0;
 FUNC_1(&VAR_17->pendings, 0);
 VAR_17->flags = 0;
 VAR_17->msglimit = 0;
 FUNC_1(&VAR_17->msg_sent, 0);
 FUNC_1(&VAR_17->msg_recv, 0);
 VAR_17->path = ((void*)0);
 VAR_17->sk_txnotify = VAR_6;
 FUNC_4(&VAR_17->src_user_id , 0, 32);
 if (VAR_11)
  VAR_17->transport = VAR_1;
 else
  VAR_17->transport = VAR_0;

 VAR_16->sk_destruct = VAR_10;
 VAR_16->sk_sndtimeo = VAR_2;

 FUNC_8(VAR_16, VAR_5);

 VAR_16->sk_protocol = VAR_13;
 VAR_16->sk_state = VAR_3;

 FUNC_3(&VAR_9, VAR_16);
 return VAR_16;
}
