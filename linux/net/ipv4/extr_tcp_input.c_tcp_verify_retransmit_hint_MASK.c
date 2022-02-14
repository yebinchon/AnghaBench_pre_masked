
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {struct sk_buff* retransmit_skb_hint; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tcp_sock *VAR_0, struct sk_buff *VAR_1)
{
 if (!VAR_0->retransmit_skb_hint ||
     FUNC_1(FUNC_0(VAR_1)->seq,
     FUNC_0(VAR_0->retransmit_skb_hint)->seq))
  VAR_0->retransmit_skb_hint = VAR_1;
}
