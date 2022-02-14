
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_array {int dummy; } ;
struct sk_buff {size_t priority; } ;
struct pfifo_fast_priv {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct skb_array* FUNC_0 (struct pfifo_fast_priv*,int) ;
 int* VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 scalar_t__ FUNC_3 (struct Qdisc*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 struct pfifo_fast_priv* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,unsigned int) ;
 int FUNC_7 (struct skb_array*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
         struct sk_buff **VAR_5)
{
 int VAR_6 = VAR_2[VAR_3->priority & VAR_1];
 struct pfifo_fast_priv *VAR_7 = FUNC_5(VAR_4);
 struct skb_array *VAR_8 = FUNC_0(VAR_7, VAR_6);
 unsigned int VAR_9 = FUNC_4(VAR_3);
 int VAR_10;

 VAR_10 = FUNC_7(VAR_8, VAR_3);

 if (FUNC_8(VAR_10)) {
  if (FUNC_3(VAR_4))
   return FUNC_2(VAR_3, VAR_4, VAR_5);
  else
   return FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 FUNC_6(VAR_4, VAR_9);
 return VAR_0;
}
