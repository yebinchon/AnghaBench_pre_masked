
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int rcv_nxt; int out_of_order_queue; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {int rbnode; } ;
struct rb_node {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int tcp_flags; int end_seq; int seq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,int *) ;
 struct rb_node* FUNC_6 (int *) ;
 struct rb_node* FUNC_7 (struct rb_node*) ;
 struct sk_buff* FUNC_8 (struct rb_node*) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,int ,int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct tcp_sock*,int ) ;
 struct tcp_sock* FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct sock*,struct sk_buff*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_14(VAR_1);
 __u32 VAR_3 = VAR_2->rcv_nxt;
 bool VAR_4, VAR_5, VAR_6;
 struct sk_buff *VAR_7, *VAR_8;
 struct rb_node *VAR_9;

 VAR_9 = FUNC_6(&VAR_2->out_of_order_queue);
 while (VAR_9) {
  VAR_7 = FUNC_8(VAR_9);
  if (FUNC_2(FUNC_0(VAR_7)->seq, VAR_2->rcv_nxt))
   break;

  if (FUNC_3(FUNC_0(VAR_7)->seq, VAR_3)) {
   __u32 VAR_10 = VAR_3;
   if (FUNC_3(FUNC_0(VAR_7)->end_seq, VAR_3))
    VAR_3 = FUNC_0(VAR_7)->end_seq;
   FUNC_11(VAR_1, FUNC_0(VAR_7)->seq, VAR_10);
  }
  VAR_9 = FUNC_7(VAR_9);
  FUNC_5(&VAR_7->rbnode, &VAR_2->out_of_order_queue);

  if (FUNC_16(!FUNC_2(FUNC_0(VAR_7)->end_seq, VAR_2->rcv_nxt))) {
   FUNC_10(VAR_1, VAR_7);
   continue;
  }

  VAR_8 = FUNC_9(&VAR_1->sk_receive_queue);
  VAR_6 = VAR_8 && FUNC_15(VAR_1, VAR_8, VAR_7, &VAR_5);
  FUNC_13(VAR_2, FUNC_0(VAR_7)->end_seq);
  VAR_4 = FUNC_0(VAR_7)->tcp_flags & VAR_0;
  if (!VAR_6)
   FUNC_1(&VAR_1->sk_receive_queue, VAR_7);
  else
   FUNC_4(VAR_7, VAR_5);

  if (FUNC_16(VAR_4)) {
   FUNC_12(VAR_1);



   break;
  }
 }
}
