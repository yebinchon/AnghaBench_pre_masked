
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int sk; } ;


 int VAR_0 ;
 void FUNC_0 (struct sk_buff*,struct skb_shared_hwtstamps*,int ,int ) ;

void FUNC_1(struct sk_buff *VAR_1,
     struct skb_shared_hwtstamps *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, VAR_1->sk,
          VAR_0);
}
