
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct dev_kfree_skb_cb {int dummy; } ;



__attribute__((used)) static struct dev_kfree_skb_cb *FUNC_0(const struct sk_buff *VAR_0)
{
 return (struct dev_kfree_skb_cb *)VAR_0->cb;
}
