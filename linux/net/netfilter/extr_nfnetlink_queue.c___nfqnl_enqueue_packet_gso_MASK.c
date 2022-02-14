
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * next; } ;
struct nfqnl_instance {int dummy; } ;
struct nf_queue_entry {struct sk_buff* skb; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct nfqnl_instance*,struct nf_queue_entry*) ;
 int FUNC_1 (struct nf_queue_entry*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nf_queue_entry* FUNC_3 (struct nf_queue_entry*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_5(struct net *VAR_1, struct nfqnl_instance *VAR_2,
      struct sk_buff *VAR_3, struct nf_queue_entry *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct nf_queue_entry *VAR_6;

 FUNC_2(VAR_3);

 if (VAR_3->next == ((void*)0)) {
  struct sk_buff *VAR_7 = VAR_4->skb;
  VAR_4->skb = VAR_3;
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
  if (VAR_5)
   VAR_4->skb = VAR_7;
  return VAR_5;
 }

 FUNC_4(VAR_3);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6) {
  VAR_6->skb = VAR_3;
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6);
  if (VAR_5)
   FUNC_1(VAR_6);
 }
 return VAR_5;
}
