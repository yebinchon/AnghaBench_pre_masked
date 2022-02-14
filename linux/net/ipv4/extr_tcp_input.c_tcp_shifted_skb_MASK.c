
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {unsigned int lost_cnt_hint; struct sk_buff* lost_skb_hint; struct sk_buff* retransmit_skb_hint; } ;
struct tcp_sacktag_state {int rate; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ delivered_mstamp; } ;
struct TYPE_4__ {int seq; int sacked; int tcp_gso_size; int tcp_flags; TYPE_1__ tx; scalar_t__ end_seq; int eor; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,struct sock*) ;
 int FUNC_9 (struct sock*,struct tcp_sacktag_state*,int,int,int,int,unsigned int,int ) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;

__attribute__((used)) static bool FUNC_16(struct sock *VAR_4, struct sk_buff *VAR_5,
       struct sk_buff *VAR_6,
       struct tcp_sacktag_state *VAR_7,
       unsigned int VAR_8, int VAR_9, int VAR_10,
       bool VAR_11)
{
 struct tcp_sock *VAR_12 = FUNC_10(VAR_4);
 u32 VAR_13 = FUNC_2(VAR_6)->seq;
 u32 VAR_14 = VAR_13 + VAR_9;

 FUNC_0(!VAR_8);







 FUNC_9(VAR_4, VAR_7, FUNC_2(VAR_6)->sacked,
   VAR_13, VAR_14, VAR_11, VAR_8,
   FUNC_14(VAR_6));
 FUNC_7(VAR_4, VAR_6, VAR_7->rate);

 if (VAR_6 == VAR_12->lost_skb_hint)
  VAR_12->lost_cnt_hint += VAR_8;

 FUNC_2(VAR_5)->end_seq += VAR_9;
 FUNC_2(VAR_6)->seq += VAR_9;

 FUNC_13(VAR_5, VAR_8);
 FUNC_3(FUNC_12(VAR_6) < VAR_8);
 FUNC_13(VAR_6, -VAR_8);






 if (!FUNC_2(VAR_5)->tcp_gso_size)
  FUNC_2(VAR_5)->tcp_gso_size = VAR_10;


 if (FUNC_12(VAR_6) <= 1)
  FUNC_2(VAR_6)->tcp_gso_size = 0;


 FUNC_2(VAR_5)->sacked |= (FUNC_2(VAR_6)->sacked & VAR_2);

 if (VAR_6->len > 0) {
  FUNC_0(!FUNC_12(VAR_6));
  FUNC_1(FUNC_4(VAR_4), VAR_1);
  return 0;
 }



 if (VAR_6 == VAR_12->retransmit_skb_hint)
  VAR_12->retransmit_skb_hint = VAR_5;
 if (VAR_6 == VAR_12->lost_skb_hint) {
  VAR_12->lost_skb_hint = VAR_5;
  VAR_12->lost_cnt_hint -= FUNC_12(VAR_5);
 }

 FUNC_2(VAR_5)->tcp_flags |= FUNC_2(VAR_6)->tcp_flags;
 FUNC_2(VAR_5)->eor = FUNC_2(VAR_6)->eor;
 if (FUNC_2(VAR_6)->tcp_flags & VAR_3)
  FUNC_2(VAR_5)->end_seq++;

 if (VAR_6 == FUNC_6(VAR_4))
  FUNC_5(VAR_4, VAR_6);

 FUNC_11(VAR_5, VAR_6);
 if (FUNC_15(FUNC_2(VAR_5)->tx.delivered_mstamp))
  FUNC_2(VAR_5)->tx.delivered_mstamp = 0;

 FUNC_8(VAR_6, VAR_4);

 FUNC_1(FUNC_4(VAR_4), VAR_0);

 return 1;
}
