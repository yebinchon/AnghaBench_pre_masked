
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sock {int sk_shutdown; int (* sk_data_ready ) (struct sock*) ;struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpq {scalar_t__ pd_mode; TYPE_2__* asoc; } ;
struct sctp_ulpevent {int msg_flags; } ;
struct sctp_sock {int data_ready_signalled; struct sk_buff_head pd_lobby; scalar_t__ frag_interleave; int pd_mode; } ;
struct TYPE_3__ {struct sock* sk; } ;
struct TYPE_4__ {int subscribe; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff_head*) ;
 struct sctp_sock* FUNC_3 (struct sock*) ;
 struct sctp_ulpevent* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (struct sctp_ulpevent*,int ) ;
 int FUNC_7 (struct sctp_ulpevent*) ;
 int FUNC_8 (struct sctp_ulpq*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;

int FUNC_14(struct sctp_ulpq *VAR_6, struct sk_buff_head *VAR_7)
{
 struct sock *VAR_8 = VAR_6->asoc->base.sk;
 struct sctp_sock *VAR_9 = FUNC_3(VAR_8);
 struct sctp_ulpevent *VAR_10;
 struct sk_buff_head *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_0(VAR_7);
 VAR_10 = FUNC_4(VAR_12);




 if (VAR_8->sk_shutdown & VAR_2 &&
     (VAR_8->sk_shutdown & VAR_5 ||
      !FUNC_7(VAR_10)))
  goto out_free;

 if (!FUNC_7(VAR_10)) {
  FUNC_10(VAR_8, VAR_12);
  FUNC_9(VAR_8);
 }

 if (!FUNC_6(VAR_10, VAR_6->asoc->subscribe))
  goto out_free;






 if (FUNC_1(&VAR_9->pd_mode) == 0) {
  VAR_11 = &VAR_8->sk_receive_queue;
 } else {
  if (VAR_6->pd_mode) {





   if ((VAR_10->msg_flags & VAR_1) ||
       (VAR_4 ==
        (VAR_10->msg_flags & VAR_3)))
    VAR_11 = &VAR_9->pd_lobby;
   else {
    VAR_13 = VAR_10->msg_flags & VAR_0;
    VAR_11 = &VAR_8->sk_receive_queue;
   }
  } else {





   if (VAR_9->frag_interleave)
    VAR_11 = &VAR_8->sk_receive_queue;
   else
    VAR_11 = &VAR_9->pd_lobby;
  }
 }

 FUNC_11(VAR_7, VAR_11);





 if (VAR_13)
  FUNC_8(VAR_6);

 if (VAR_11 == &VAR_8->sk_receive_queue && !VAR_9->data_ready_signalled) {
  if (!FUNC_12(VAR_8))
   VAR_9->data_ready_signalled = 1;
  VAR_8->sk_data_ready(VAR_8);
 }
 return 1;

out_free:
 if (VAR_7)
  FUNC_2(VAR_7);
 else
  FUNC_5(VAR_10);

 return 0;
}
