
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {int vlan_id; TYPE_1__ addr; } ;
struct net_bridge_fdb_entry {int offloaded; int added_by_user; TYPE_3__* dst; TYPE_2__ key; } ;
struct TYPE_6__ {int dev; } ;




 int FUNC_0 (int,int ,int ,int ,int ,int ) ;

void
FUNC_1(const struct net_bridge_fdb_entry *VAR_0, int VAR_1)
{
 if (!VAR_0->dst)
  return;

 switch (VAR_1) {
 case 129:
  FUNC_0(0, VAR_0->key.addr.addr,
      VAR_0->key.vlan_id,
      VAR_0->dst->dev,
      VAR_0->added_by_user,
      VAR_0->offloaded);
  break;
 case 128:
  FUNC_0(1, VAR_0->key.addr.addr,
      VAR_0->key.vlan_id,
      VAR_0->dst->dev,
      VAR_0->added_by_user,
      VAR_0->offloaded);
  break;
 }
}
