
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {scalar_t__ addr_trial_end; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_discoverer {int skb; scalar_t__ timer_intv; int timer; int lock; scalar_t__ num_nodes; int domain; int bearer_id; struct net* net; int dest; } ;
struct tipc_bearer {struct tipc_discoverer* disc; int domain; int identity; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct tipc_discoverer*) ;
 struct tipc_discoverer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct tipc_media_addr*,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct net*,int ,int ,struct tipc_bearer*) ;
 int VAR_8 ;
 struct tipc_net* FUNC_12 (struct net*) ;
 int FUNC_13 (struct net*) ;

int FUNC_14(struct net *VAR_9, struct tipc_bearer *VAR_10,
       struct tipc_media_addr *VAR_11, struct sk_buff **VAR_12)
{
 struct tipc_net *VAR_13 = FUNC_12(VAR_9);
 struct tipc_discoverer *VAR_14;

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;
 VAR_14->skb = FUNC_10(VAR_4 + VAR_5, VAR_3);
 if (!VAR_14->skb) {
  FUNC_1(VAR_14);
  return -VAR_2;
 }
 FUNC_11(VAR_9, VAR_14->skb, VAR_0, VAR_10);


 if (!FUNC_13(VAR_9)) {
  VAR_13->addr_trial_end = VAR_7 + FUNC_5(1000);
  FUNC_6(FUNC_0(VAR_14->skb), VAR_1);
 }
 FUNC_3(&VAR_14->dest, VAR_11, sizeof(*VAR_11));
 VAR_14->net = VAR_9;
 VAR_14->bearer_id = VAR_10->identity;
 VAR_14->domain = VAR_10->domain;
 VAR_14->num_nodes = 0;
 VAR_14->timer_intv = VAR_6;
 FUNC_8(&VAR_14->lock);
 FUNC_9(&VAR_14->timer, VAR_8, 0);
 FUNC_4(&VAR_14->timer, VAR_7 + VAR_14->timer_intv);
 VAR_10->disc = VAR_14;
 *VAR_12 = FUNC_7(VAR_14->skb, VAR_3);
 return 0;
}
