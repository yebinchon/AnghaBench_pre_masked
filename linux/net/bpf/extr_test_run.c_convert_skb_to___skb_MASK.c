
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int priority; scalar_t__ cb; } ;
struct qdisc_skb_cb {int data; } ;
struct __sk_buff {int cb; int priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1, struct __sk_buff *VAR_2)
{
 struct qdisc_skb_cb *VAR_3 = (struct qdisc_skb_cb *)VAR_1->cb;

 if (!VAR_2)
  return;

 VAR_2->priority = VAR_1->priority;
 FUNC_0(VAR_2->cb, &VAR_3->data, VAR_0);
}
