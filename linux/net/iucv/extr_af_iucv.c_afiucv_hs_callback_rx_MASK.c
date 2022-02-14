
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_drops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct iucv_sock {TYPE_1__ message_q; int backlog_skb_q; } ;
struct af_iucv_trans_hdr {int dummy; } ;
struct TYPE_4__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 struct iucv_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct iucv_sock *VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 if (VAR_3->sk_state != VAR_0) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 if (VAR_3->sk_shutdown & VAR_2) {
  FUNC_4(VAR_4);
  return VAR_1;
 }


 FUNC_6(VAR_4, sizeof(struct af_iucv_trans_hdr));
 FUNC_10(VAR_4);
 FUNC_9(VAR_4);
 FUNC_0(VAR_4)->offset = 0;
 if (FUNC_5(VAR_3, VAR_4)) {
  FUNC_2(&VAR_3->sk_drops);
  FUNC_4(VAR_4);
  return VAR_1;
 }

 FUNC_11(&VAR_5->message_q.lock);
 if (FUNC_7(&VAR_5->backlog_skb_q)) {
  if (FUNC_1(VAR_3, VAR_4))

   FUNC_8(&VAR_5->backlog_skb_q, VAR_4);
 } else
  FUNC_8(&FUNC_3(VAR_3)->backlog_skb_q, VAR_4);
 FUNC_12(&VAR_5->message_q.lock);
 return VAR_1;
}
