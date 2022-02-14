
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_shutdown; int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sock {int data_ready_signalled; } ;
struct TYPE_3__ {struct sock* sk; } ;
struct TYPE_4__ {int subscribe; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 struct sctp_sock* FUNC_3 (struct sock*) ;
 struct sctp_ulpevent* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (struct sctp_ulpevent*,int ) ;
 int FUNC_7 (struct sctp_ulpevent*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff_head*,int *) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct sctp_ulpq *VAR_2,
         struct sk_buff_head *VAR_3)
{
 struct sock *VAR_4 = VAR_2->asoc->base.sk;
 struct sctp_sock *VAR_5 = FUNC_3(VAR_4);
 struct sctp_ulpevent *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 VAR_6 = FUNC_4(VAR_7);

 if (VAR_4->sk_shutdown & VAR_0 &&
     (VAR_4->sk_shutdown & VAR_1 ||
      !FUNC_7(VAR_6)))
  goto out_free;

 if (!FUNC_7(VAR_6)) {
  FUNC_9(VAR_4, VAR_7);
  FUNC_8(VAR_4);
 }

 if (!FUNC_6(VAR_6, VAR_2->asoc->subscribe))
  goto out_free;

 if (VAR_3)
  FUNC_10(VAR_3,
        &VAR_4->sk_receive_queue);
 else
  FUNC_1(&VAR_4->sk_receive_queue, VAR_7);

 if (!VAR_5->data_ready_signalled) {
  VAR_5->data_ready_signalled = 1;
  VAR_4->sk_data_ready(VAR_4);
 }

 return 1;

out_free:
 if (VAR_3)
  FUNC_2(VAR_3);
 else
  FUNC_5(VAR_6);

 return 0;
}
