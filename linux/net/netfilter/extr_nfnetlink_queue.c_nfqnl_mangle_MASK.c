
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct nf_queue_entry {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,void*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_4, int VAR_5, struct nf_queue_entry *VAR_6, int VAR_7)
{
 struct sk_buff *VAR_8;

 if (VAR_7 < 0) {
  if (FUNC_1(VAR_6->skb, VAR_5))
   return -VAR_2;
 } else if (VAR_7 > 0) {
  if (VAR_5 > 0xFFFF)
   return -VAR_1;
  if (VAR_7 > FUNC_7(VAR_6->skb)) {
   VAR_8 = FUNC_2(VAR_6->skb, FUNC_5(VAR_6->skb),
            VAR_7, VAR_3);
   if (!VAR_8)
    return -VAR_2;
   FUNC_0(VAR_6->skb);
   VAR_6->skb = VAR_8;
  }
  FUNC_6(VAR_6->skb, VAR_7);
 }
 if (FUNC_4(VAR_6->skb, VAR_5))
  return -VAR_2;
 FUNC_3(VAR_6->skb, VAR_4, VAR_5);
 VAR_6->skb->ip_summed = VAR_0;
 return 0;
}
