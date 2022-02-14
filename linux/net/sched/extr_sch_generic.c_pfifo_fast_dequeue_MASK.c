
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_array {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pfifo_fast_priv {int dummy; } ;
struct Qdisc {int empty; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct skb_array*) ;
 scalar_t__ FUNC_1 (struct skb_array*) ;
 struct skb_array* FUNC_2 (struct pfifo_fast_priv*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct pfifo_fast_priv* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct Qdisc *VAR_1)
{
 struct pfifo_fast_priv *VAR_2 = FUNC_4(VAR_1);
 struct sk_buff *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 && !VAR_3; VAR_4++) {
  struct skb_array *VAR_5 = FUNC_2(VAR_2, VAR_4);

  if (FUNC_1(VAR_5))
   continue;

  VAR_3 = FUNC_0(VAR_5);
 }
 if (FUNC_3(VAR_3)) {
  FUNC_5(VAR_1, VAR_3);
 } else {
  VAR_1->empty = 1;
 }

 return VAR_3;
}
