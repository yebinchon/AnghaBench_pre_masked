
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net {int trial_addr; int addr_trial_end; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_discoverer {int timer_intv; int lock; int bearer_id; int skb; int dest; int timer; scalar_t__ num_nodes; int domain; struct net* net; } ;
struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
typedef int maddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct tipc_discoverer* VAR_6 ;
 struct tipc_discoverer* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct tipc_media_addr*,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int ) ;
 int VAR_8 ;
 int FUNC_10 (struct net*,int ,struct sk_buff*,struct tipc_media_addr*) ;
 struct tipc_net* FUNC_11 (struct net*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct net*) ;
 int FUNC_14 (struct net*,int ) ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_9)
{
 struct tipc_discoverer *VAR_10 = FUNC_1(VAR_10, VAR_9, VAR_8);
 struct tipc_net *VAR_11 = FUNC_11(VAR_10->net);
 struct tipc_media_addr VAR_12;
 struct sk_buff *VAR_13 = ((void*)0);
 struct net *VAR_14 = VAR_10->net;
 u32 VAR_15;

 FUNC_7(&VAR_10->lock);


 if (FUNC_12(VAR_10->domain) && VAR_10->num_nodes) {
  VAR_10->timer_intv = VAR_3;
  goto exit;
 }


 if (!FUNC_9(VAR_7, VAR_11->addr_trial_end) && !FUNC_13(VAR_14)) {
  FUNC_3(&VAR_10->timer, VAR_7 + VAR_4);
  FUNC_8(&VAR_10->lock);
  FUNC_14(VAR_14, VAR_11->trial_addr);
  return;
 }


 if (FUNC_9(VAR_7, VAR_11->addr_trial_end)) {
  VAR_10->timer_intv = VAR_4;
 } else {
  VAR_10->timer_intv *= 2;
  if (VAR_10->num_nodes && VAR_10->timer_intv > VAR_5)
   VAR_10->timer_intv = VAR_5;
  else if (!VAR_10->num_nodes && VAR_10->timer_intv > VAR_2)
   VAR_10->timer_intv = VAR_2;
  FUNC_5(FUNC_0(VAR_10->skb), VAR_0);
  FUNC_4(FUNC_0(VAR_10->skb), VAR_11->trial_addr);
 }

 FUNC_3(&VAR_10->timer, VAR_7 + VAR_10->timer_intv);
 FUNC_2(&VAR_12, &VAR_10->dest, sizeof(VAR_12));
 VAR_13 = FUNC_6(VAR_10->skb, VAR_1);
 VAR_15 = VAR_10->bearer_id;
exit:
 FUNC_8(&VAR_10->lock);
 if (VAR_13)
  FUNC_10(VAR_14, VAR_15, VAR_13, &VAR_12);
}
