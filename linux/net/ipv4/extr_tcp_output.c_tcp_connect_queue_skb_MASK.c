
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int packets_out; int write_seq; } ;
struct tcp_skb_cb {int end_seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int truesize; scalar_t__ len; } ;


 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,int ) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_5(VAR_0);
 struct tcp_skb_cb *VAR_3 = FUNC_0(VAR_1);

 VAR_3->end_seq += VAR_1->len;
 FUNC_2(VAR_1);
 FUNC_4(VAR_0, VAR_1->truesize);
 FUNC_3(VAR_0, VAR_1->truesize);
 FUNC_1(VAR_2->write_seq, VAR_3->end_seq);
 VAR_2->packets_out += FUNC_6(VAR_1);
}
