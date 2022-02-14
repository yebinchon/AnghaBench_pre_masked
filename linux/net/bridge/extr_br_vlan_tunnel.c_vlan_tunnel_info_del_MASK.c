
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_bridge_vlan_group {int tunnel_hash; } ;
struct TYPE_4__ {TYPE_1__* tunnel_dst; scalar_t__ tunnel_id; } ;
struct net_bridge_vlan {TYPE_2__ tinfo; int tnode; } ;
struct TYPE_3__ {int dst; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;

void FUNC_2(struct net_bridge_vlan_group *VAR_1,
     struct net_bridge_vlan *VAR_2)
{
 if (!VAR_2->tinfo.tunnel_dst)
  return;
 FUNC_1(&VAR_1->tunnel_hash, &VAR_2->tnode,
          VAR_0);
 VAR_2->tinfo.tunnel_id = 0;
 FUNC_0(&VAR_2->tinfo.tunnel_dst->dst);
 VAR_2->tinfo.tunnel_dst = ((void*)0);
}
