
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {scalar_t__ nr_vlan_devs; } ;
struct vlan_info {struct vlan_group grp; } ;
struct vlan_dev_priv {int vlan_proto; int vlan_id; struct net_device* real_dev; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int vlan_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct net_device*) ;
 struct vlan_info* FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 struct vlan_dev_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct vlan_group*,int ,int ) ;
 int FUNC_9 (struct vlan_group*,int ,int ,struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,struct net_device*,struct vlan_dev_priv*) ;
 int FUNC_15 (struct net_device*,int ,int ) ;
 int FUNC_16 (struct net_device*,int ,int ) ;

int FUNC_17(struct net_device *VAR_0, struct netlink_ext_ack *VAR_1)
{
 struct vlan_dev_priv *VAR_2 = FUNC_7(VAR_0);
 struct net_device *VAR_3 = VAR_2->real_dev;
 u16 VAR_4 = VAR_2->vlan_id;
 struct vlan_info *VAR_5;
 struct vlan_group *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_15(VAR_3, VAR_2->vlan_proto, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_5(VAR_3->vlan_info);

 FUNC_0(!VAR_5);

 VAR_6 = &VAR_5->grp;
 if (VAR_6->nr_vlan_devs == 0) {
  VAR_7 = FUNC_10(VAR_3);
  if (VAR_7 < 0)
   goto out_vid_del;
  VAR_7 = FUNC_12(VAR_3);
  if (VAR_7 < 0)
   goto out_uninit_gvrp;
 }

 VAR_7 = FUNC_8(VAR_6, VAR_2->vlan_proto, VAR_4);
 if (VAR_7 < 0)
  goto out_uninit_mvrp;

 VAR_7 = FUNC_4(VAR_0);
 if (VAR_7 < 0)
  goto out_uninit_mvrp;

 VAR_7 = FUNC_3(VAR_3, VAR_0, VAR_1);
 if (VAR_7)
  goto out_unregister_netdev;


 FUNC_1(VAR_3);

 FUNC_14(VAR_3, VAR_0, VAR_2);
 FUNC_2(VAR_0);




 FUNC_9(VAR_6, VAR_2->vlan_proto, VAR_4, VAR_0);
 VAR_6->nr_vlan_devs++;

 return 0;

out_unregister_netdev:
 FUNC_6(VAR_0);
out_uninit_mvrp:
 if (VAR_6->nr_vlan_devs == 0)
  FUNC_13(VAR_3);
out_uninit_gvrp:
 if (VAR_6->nr_vlan_devs == 0)
  FUNC_11(VAR_3);
out_vid_del:
 FUNC_16(VAR_3, VAR_2->vlan_proto, VAR_4);
 return VAR_7;
}
