
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sacktag_state {int dummy; } ;
struct tcp_sack_block {int end_seq; int start_seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,struct sock*,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct sock*,int *,struct tcp_sacktag_state*,int ,int ,int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sk_buff *VAR_0,
      struct sock *VAR_1,
      struct tcp_sack_block *VAR_2,
      struct tcp_sacktag_state *VAR_3,
      u32 VAR_4)
{
 if (!VAR_2)
  return VAR_0;

 if (FUNC_0(VAR_2->start_seq, VAR_4)) {
  VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2->start_seq);
  VAR_0 = FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_3,
           VAR_2->start_seq, VAR_2->end_seq,
           1);
 }

 return VAR_0;
}
