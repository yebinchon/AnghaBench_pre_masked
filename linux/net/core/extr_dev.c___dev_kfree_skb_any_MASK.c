
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef enum skb_free_reason { ____Placeholder_skb_free_reason } skb_free_reason ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct sk_buff *VAR_0, enum skb_free_reason VAR_1)
{
 if (FUNC_2() || FUNC_3())
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0);
}
