
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cfpkt {struct sk_buff skb; } ;



__attribute__((used)) static inline struct sk_buff *FUNC_0(struct cfpkt *VAR_0)
{
 return &VAR_0->skb;
}
