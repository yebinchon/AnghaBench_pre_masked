
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int nonagle; int write_seq; } ;
struct tcp_skb_cb {scalar_t__ sacked; int tcp_flags; int end_seq; int seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int truesize; scalar_t__ csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_5(VAR_2);
 struct tcp_skb_cb *VAR_5 = FUNC_0(VAR_3);

 VAR_3->csum = 0;
 VAR_5->seq = VAR_5->end_seq = VAR_4->write_seq;
 VAR_5->tcp_flags = VAR_0;
 VAR_5->sacked = 0;
 FUNC_1(VAR_3);
 FUNC_4(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3->truesize);
 FUNC_2(VAR_2, VAR_3->truesize);
 if (VAR_4->nonagle & VAR_1)
  VAR_4->nonagle &= ~VAR_1;

 FUNC_6(VAR_2);
}
