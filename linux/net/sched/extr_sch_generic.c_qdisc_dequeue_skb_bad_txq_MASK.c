
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct Qdisc {int skb_bad_txq; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_1(&VAR_0->skb_bad_txq);

 if (FUNC_2(VAR_1))
  VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}
