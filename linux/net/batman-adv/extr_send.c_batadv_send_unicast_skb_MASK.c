
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct batadv_neigh_node {int addr; int if_incoming; } ;
struct TYPE_2__ {int last_unicast_tx; } ;
struct batadv_hardif_neigh_node {TYPE_1__ bat_v; } ;


 int VAR_0 ;
 struct batadv_hardif_neigh_node* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct batadv_hardif_neigh_node*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;

int FUNC_3(struct sk_buff *VAR_2,
       struct batadv_neigh_node *VAR_3)
{



 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3->if_incoming, VAR_3->addr);
 return VAR_4;
}
