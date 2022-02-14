
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int vlan_id; int vlan_proto; int flags; struct net_device* real_dev; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int priv_flags; unsigned int mtu; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_9 (struct net_device*,int ,int ,struct netlink_ext_ack*) ;
 struct vlan_dev_priv* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_10, struct net_device *VAR_11,
   struct nlattr *VAR_12[], struct nlattr *VAR_13[],
   struct netlink_ext_ack *VAR_14)
{
 struct vlan_dev_priv *VAR_15 = FUNC_10(VAR_11);
 struct net_device *VAR_16;
 unsigned int VAR_17;
 __be16 VAR_18;
 int VAR_19;

 if (!VAR_13[VAR_6]) {
  FUNC_0(VAR_14, "VLAN id not specified");
  return -VAR_0;
 }

 if (!VAR_12[VAR_4]) {
  FUNC_0(VAR_14, "link not specified");
  return -VAR_0;
 }

 VAR_16 = FUNC_1(VAR_10, FUNC_6(VAR_12[VAR_4]));
 if (!VAR_16) {
  FUNC_0(VAR_14, "link does not exist");
  return -VAR_1;
 }

 if (VAR_13[VAR_7])
  VAR_18 = FUNC_4(VAR_13[VAR_7]);
 else
  VAR_18 = FUNC_2(VAR_2);

 VAR_15->vlan_proto = VAR_18;
 VAR_15->vlan_id = FUNC_5(VAR_13[VAR_6]);
 VAR_15->real_dev = VAR_16;
 VAR_11->priv_flags |= (VAR_16->priv_flags & VAR_3);
 VAR_15->flags = VAR_8;

 VAR_19 = FUNC_9(VAR_16, VAR_15->vlan_proto, VAR_15->vlan_id,
      VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 = FUNC_3(VAR_16) ? VAR_16->mtu - VAR_9 :
           VAR_16->mtu;
 if (!VAR_12[VAR_5])
  VAR_11->mtu = VAR_17;
 else if (VAR_11->mtu > VAR_17)
  return -VAR_0;

 VAR_19 = FUNC_8(VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 return FUNC_7(VAR_11, VAR_14);
}
