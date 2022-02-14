
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {struct sk_buff* retransmit_skb_hint; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int sacked; int eor; int tcp_flags; int end_seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int) ;
 int FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct sock*) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,struct sk_buff*,int,int) ;

__attribute__((used)) static bool FUNC_14(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_10(VAR_1);
 struct sk_buff *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 VAR_5 = VAR_4->len;

 FUNC_0(FUNC_12(VAR_2) != 1 || FUNC_12(VAR_4) != 1);

 if (VAR_5) {
  if (VAR_5 <= FUNC_2(VAR_2))
   FUNC_3(VAR_4, 0, FUNC_4(VAR_2, VAR_5),
          VAR_5);
  else if (!FUNC_13(VAR_2, VAR_4, 1, VAR_5))
   return 0;
 }
 FUNC_8(VAR_1, VAR_4, VAR_2);


 FUNC_1(VAR_2)->end_seq = FUNC_1(VAR_4)->end_seq;


 FUNC_1(VAR_2)->tcp_flags |= FUNC_1(VAR_4)->tcp_flags;




 FUNC_1(VAR_2)->sacked |= FUNC_1(VAR_4)->sacked & VAR_0;
 FUNC_1(VAR_2)->eor = FUNC_1(VAR_4)->eor;


 FUNC_7(VAR_3);
 if (VAR_4 == VAR_3->retransmit_skb_hint)
  VAR_3->retransmit_skb_hint = VAR_2;

 FUNC_6(VAR_1, VAR_4, FUNC_12(VAR_4));

 FUNC_11(VAR_2, VAR_4);

 FUNC_9(VAR_4, VAR_1);
 return 1;
}
