
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_bridge_vlan_group {int num_vlans; } ;
struct net_bridge_vlan {int flags; int vid; int refcnt; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_bridge_vlan*,int) ;
 int FUNC_1 (struct net_bridge*,char*) ;
 int FUNC_2 (struct net_bridge*,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,struct netlink_ext_ack*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct net_bridge_vlan*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_bridge *VAR_3,
    struct net_bridge_vlan_group *VAR_4,
    struct net_bridge_vlan *VAR_5,
    u16 VAR_6, bool *VAR_7,
    struct netlink_ext_ack *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3->dev, VAR_5->vid, VAR_6, VAR_8);
 if (VAR_9 && VAR_9 != -VAR_2)
  return VAR_9;

 if (!FUNC_5(VAR_5)) {

  if (!(VAR_6 & VAR_0)) {
   VAR_9 = -VAR_1;
   goto err_flags;
  }

  VAR_9 = FUNC_2(VAR_3, ((void*)0), VAR_3->dev->dev_addr,
        VAR_5->vid);
  if (VAR_9) {
   FUNC_1(VAR_3, "failed to insert local address into bridge forwarding table\n");
   goto err_fdb_insert;
  }

  FUNC_6(&VAR_5->refcnt);
  VAR_5->flags |= VAR_0;
  VAR_4->num_vlans++;
  *VAR_7 = 1;
 }

 if (FUNC_0(VAR_5, VAR_6))
  *VAR_7 = 1;

 return 0;

err_fdb_insert:
err_flags:
 FUNC_4(VAR_3->dev, VAR_5->vid);
 return VAR_9;
}
