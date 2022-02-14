
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; void* protocol; } ;
struct nfqnl_instance {scalar_t__ copy_mode; int flags; } ;
struct nfnl_queue_net {int dummy; } ;
struct TYPE_2__ {int pf; struct net* net; } ;
struct nf_queue_entry {TYPE_1__ state; struct sk_buff* skb; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net*,struct nfqnl_instance*,struct nf_queue_entry*) ;
 int FUNC_2 (struct net*,struct nfqnl_instance*,struct sk_buff*,struct nf_queue_entry*) ;
 int FUNC_3 (struct nf_queue_entry*) ;
 void* FUNC_4 (int ) ;
 struct nfqnl_instance* FUNC_5 (struct nfnl_queue_net*,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct nfnl_queue_net* FUNC_9 (struct net*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_12(struct nf_queue_entry *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;
 struct nfqnl_instance *VAR_10;
 struct sk_buff *VAR_11, *VAR_12;
 int VAR_13 = -VAR_1;
 struct net *VAR_14 = VAR_7->state.net;
 struct nfnl_queue_net *VAR_15 = FUNC_9(VAR_14);


 VAR_10 = FUNC_5(VAR_15, VAR_8);
 if (!VAR_10)
  return -VAR_2;

 if (VAR_10->copy_mode == VAR_6)
  return -VAR_0;

 VAR_11 = VAR_7->skb;

 switch (VAR_7->state.pf) {
 case 129:
  VAR_11->protocol = FUNC_4(VAR_3);
  break;
 case 128:
  VAR_11->protocol = FUNC_4(VAR_4);
  break;
 }

 if ((VAR_10->flags & VAR_5) || !FUNC_11(VAR_11))
  return FUNC_1(VAR_14, VAR_10, VAR_7);

 FUNC_8(VAR_11);
 VAR_12 = FUNC_10(VAR_11, 0);




 if (FUNC_0(VAR_12))
  goto out_err;
 VAR_9 = 0;
 VAR_13 = 0;
 do {
  struct sk_buff *VAR_16 = VAR_12->next;
  if (VAR_13 == 0)
   VAR_13 = FUNC_2(VAR_14, VAR_10,
       VAR_12, VAR_7);
  if (VAR_13 == 0)
   VAR_9++;
  else
   FUNC_6(VAR_12);
  VAR_12 = VAR_16;
 } while (VAR_12);

 if (VAR_9) {
  if (VAR_13)
   FUNC_3(VAR_7);
  FUNC_6(VAR_11);
  return 0;
 }
 out_err:
 FUNC_7(VAR_11);
 return VAR_13;
}
