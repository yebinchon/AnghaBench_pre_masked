
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_array {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pfifo_fast_priv {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct skb_array*) ;
 struct skb_array* FUNC_1 (struct pfifo_fast_priv*,int) ;
 struct pfifo_fast_priv* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc *VAR_1)
{
 struct pfifo_fast_priv *VAR_2 = FUNC_2(VAR_1);
 struct sk_buff *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 && !VAR_3; VAR_4++) {
  struct skb_array *VAR_5 = FUNC_1(VAR_2, VAR_4);

  VAR_3 = FUNC_0(VAR_5);
 }

 return VAR_3;
}
