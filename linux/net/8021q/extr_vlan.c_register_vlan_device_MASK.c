
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vlan_net {int name_type; } ;
struct vlan_dev_priv {int flags; int * dent; struct net_device* real_dev; scalar_t__ vlan_id; int vlan_proto; } ;
struct net_device {char* name; scalar_t__ reg_state; int * rtnl_link_ops; int mtu; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct vlan_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct net_device*,int *) ;
 int FUNC_7 (char*,int,char*,scalar_t__,...) ;
 int FUNC_8 (struct net_device*,int ,scalar_t__,int *) ;
 struct vlan_dev_priv* FUNC_9 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_11, u16 VAR_12)
{
 struct net_device *VAR_13;
 struct vlan_dev_priv *VAR_14;
 struct net *VAR_15 = FUNC_1(VAR_11);
 struct vlan_net *VAR_16 = FUNC_5(VAR_15, VAR_9);
 char VAR_17[VAR_3];
 int VAR_18;

 if (VAR_12 >= VAR_7)
  return -VAR_1;

 VAR_18 = FUNC_8(VAR_11, FUNC_4(VAR_2), VAR_12,
      ((void*)0));
 if (VAR_18 < 0)
  return VAR_18;


 switch (VAR_16->name_type) {
 case 129:

  FUNC_7(VAR_17, VAR_3, "%s.%.4i", VAR_11->name, VAR_12);
  break;
 case 130:



  FUNC_7(VAR_17, VAR_3, "vlan%i", VAR_12);
  break;
 case 128:



  FUNC_7(VAR_17, VAR_3, "%s.%i", VAR_11->name, VAR_12);
  break;
 case 131:



 default:
  FUNC_7(VAR_17, VAR_3, "vlan%.4i", VAR_12);
 }

 VAR_13 = FUNC_0(sizeof(struct vlan_dev_priv), VAR_17,
          VAR_5, VAR_10);

 if (VAR_13 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_13, VAR_15);



 VAR_13->mtu = VAR_11->mtu;

 VAR_14 = FUNC_9(VAR_13);
 VAR_14->vlan_proto = FUNC_4(VAR_2);
 VAR_14->vlan_id = VAR_12;
 VAR_14->real_dev = VAR_11;
 VAR_14->dent = ((void*)0);
 VAR_14->flags = VAR_6;

 VAR_13->rtnl_link_ops = &VAR_8;
 VAR_18 = FUNC_6(VAR_13, ((void*)0));
 if (VAR_18 < 0)
  goto out_free_newdev;

 return 0;

out_free_newdev:
 if (VAR_13->reg_state == VAR_4)
  FUNC_3(VAR_13);
 return VAR_18;
}
