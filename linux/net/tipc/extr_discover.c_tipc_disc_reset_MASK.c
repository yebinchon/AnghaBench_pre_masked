
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_media_addr {int dummy; } ;
struct tipc_discoverer {int lock; int skb; scalar_t__ timer_intv; int timer; int dest; scalar_t__ num_nodes; int domain; int bearer_id; struct net* net; } ;
struct tipc_bearer {int identity; int domain; struct tipc_discoverer* disc; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
typedef int maddr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tipc_media_addr*,int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net*,int ,struct sk_buff*,struct tipc_media_addr*) ;
 int FUNC_6 (struct net*,int ,int ,struct tipc_bearer*) ;

void FUNC_7(struct net *VAR_4, struct tipc_bearer *VAR_5)
{
 struct tipc_discoverer *VAR_6 = VAR_5->disc;
 struct tipc_media_addr VAR_7;
 struct sk_buff *VAR_8;

 FUNC_3(&VAR_6->lock);
 FUNC_6(VAR_4, VAR_6->skb, VAR_0, VAR_5);
 VAR_6->net = VAR_4;
 VAR_6->bearer_id = VAR_5->identity;
 VAR_6->domain = VAR_5->domain;
 VAR_6->num_nodes = 0;
 VAR_6->timer_intv = VAR_2;
 FUNC_0(&VAR_7, &VAR_6->dest, sizeof(VAR_7));
 FUNC_1(&VAR_6->timer, VAR_3 + VAR_6->timer_intv);
 VAR_8 = FUNC_2(VAR_6->skb, VAR_1);
 FUNC_4(&VAR_6->lock);
 if (VAR_8)
  FUNC_5(VAR_4, VAR_5->identity, VAR_8, &VAR_7);
}
