
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {scalar_t__ nr_vlan_devs; } ;
struct vlan_info {struct vlan_group grp; } ;
struct vlan_dev_priv {int flags; int vlan_proto; int vlan_id; struct net_device* real_dev; } ;
struct net_device {int vlan_info; } ;
struct list_head {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;
 struct vlan_info* FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct list_head*) ;
 struct vlan_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct vlan_group*,int ,int ,int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int ,int ) ;

void FUNC_13(struct net_device *VAR_2, struct list_head *VAR_3)
{
 struct vlan_dev_priv *VAR_4 = FUNC_6(VAR_2);
 struct net_device *VAR_5 = VAR_4->real_dev;
 struct vlan_info *VAR_6;
 struct vlan_group *VAR_7;
 u16 VAR_8 = VAR_4->vlan_id;

 FUNC_0();

 VAR_6 = FUNC_4(VAR_5->vlan_info);
 FUNC_1(!VAR_6);

 VAR_7 = &VAR_6->grp;

 VAR_7->nr_vlan_devs--;

 if (VAR_4->flags & VAR_1)
  FUNC_10(VAR_2);
 if (VAR_4->flags & VAR_0)
  FUNC_8(VAR_2);

 FUNC_7(VAR_7, VAR_4->vlan_proto, VAR_8, ((void*)0));

 FUNC_3(VAR_5, VAR_2);




 FUNC_5(VAR_2, VAR_3);

 if (VAR_7->nr_vlan_devs == 0) {
  FUNC_11(VAR_5);
  FUNC_9(VAR_5);
 }

 FUNC_12(VAR_5, VAR_4->vlan_proto, VAR_8);


 FUNC_2(VAR_5);
}
