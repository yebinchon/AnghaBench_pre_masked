
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct net_device {int flags; scalar_t__ type; scalar_t__ addr_len; int priv_flags; unsigned int needed_headroom; scalar_t__ addr_assign_type; int dev_addr; TYPE_2__ dev; TYPE_1__* netdev_ops; } ;
struct net_bridge_port {int kobj; TYPE_3__* dev; int list; } ;
struct net_bridge {int ifobj; struct net_device* dev; int lock; int port_list; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {scalar_t__ ndo_start_xmit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct net_bridge_port*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_port*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_bridge*,struct net_bridge_port*,int ,int ) ;
 int VAR_17 ;
 int FUNC_5 (int ,int *,struct net_bridge_port*) ;
 int FUNC_6 (struct net_bridge*) ;
 int FUNC_7 (struct net_bridge_port*) ;
 int FUNC_8 (struct net_bridge_port*) ;
 int FUNC_9 (struct net_bridge*) ;
 int FUNC_10 (struct net_bridge_port*) ;
 int FUNC_11 (struct net_bridge*) ;
 int FUNC_12 (struct net_bridge_port*) ;
 int VAR_18 ;
 int FUNC_13 (int ,struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int ,struct netlink_ext_ack*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct net_bridge_port*) ;
 int FUNC_20 (int *,int *,int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct net_bridge_port*) ;
 int FUNC_26 (struct net_bridge*) ;
 int FUNC_27 (struct net_bridge_port*,struct netlink_ext_ack*) ;
 int FUNC_28 (struct net_device*,char*) ;
 unsigned int FUNC_29 (struct net_device*) ;
 scalar_t__ FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct net_device*,struct net_device*,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_32 (struct net_device*,int ,struct net_bridge_port*) ;
 int FUNC_33 (struct net_device*) ;
 int FUNC_34 (struct net_device*,unsigned int) ;
 int FUNC_35 (struct net_device*) ;
 int FUNC_36 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_37 (struct net_device*) ;
 scalar_t__ FUNC_38 (struct net_device*) ;
 scalar_t__ FUNC_39 (struct net_device*) ;
 struct net_bridge_port* FUNC_40 (struct net_bridge*,struct net_device*) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int ,int ) ;
 int FUNC_44 (struct net_bridge*,unsigned int) ;

int FUNC_45(struct net_bridge *VAR_19, struct net_device *VAR_20,
       struct netlink_ext_ack *VAR_21)
{
 struct net_bridge_port *VAR_22;
 int VAR_23 = 0;
 unsigned VAR_24, VAR_25;
 bool VAR_26;







 if ((VAR_20->flags & VAR_8) ||
     VAR_20->type != VAR_0 || VAR_20->addr_len != VAR_5 ||
     !FUNC_18(VAR_20->dev_addr) ||
     FUNC_37(VAR_20))
  return -VAR_2;


 if (VAR_20->netdev_ops->ndo_start_xmit == VAR_16) {
  FUNC_1(VAR_21,
          "Can not enslave a bridge to a bridge");
  return -VAR_3;
 }


 if (FUNC_30(VAR_20))
  return -VAR_1;


 if (VAR_20->priv_flags & VAR_7) {
  FUNC_1(VAR_21,
          "Device does not allow enslaving to a bridge");
  return -VAR_4;
 }

 VAR_22 = FUNC_40(VAR_19, VAR_20);
 if (FUNC_0(VAR_22))
  return FUNC_2(VAR_22);

 FUNC_13(VAR_12, VAR_20);

 VAR_23 = FUNC_17(VAR_20, 1);
 if (VAR_23) {
  FUNC_19(VAR_22);
  goto err1;
 }

 VAR_23 = FUNC_20(&VAR_22->kobj, &VAR_18, &(VAR_20->dev.kobj),
       VAR_15);
 if (VAR_23)
  goto err2;

 VAR_23 = FUNC_12(VAR_22);
 if (VAR_23)
  goto err2;

 VAR_23 = FUNC_8(VAR_22);
 if (VAR_23)
  goto err3;

 VAR_23 = FUNC_32(VAR_20, VAR_17, VAR_22);
 if (VAR_23)
  goto err4;

 VAR_20->priv_flags |= VAR_6;

 VAR_23 = FUNC_31(VAR_20, VAR_19->dev, ((void*)0), ((void*)0), VAR_21);
 if (VAR_23)
  goto err5;

 VAR_23 = FUNC_25(VAR_22);
 if (VAR_23)
  goto err6;

 FUNC_14(VAR_20);

 FUNC_23(&VAR_22->list, &VAR_19->port_list);

 FUNC_26(VAR_19);

 FUNC_35(VAR_19->dev);

 VAR_24 = VAR_19->dev->needed_headroom;
 VAR_25 = FUNC_29(VAR_20);
 if (VAR_24 < VAR_25)
  FUNC_44(VAR_19, VAR_25);
 else
  FUNC_34(VAR_20, VAR_24);

 if (FUNC_4(VAR_19, VAR_22, VAR_20->dev_addr, 0))
  FUNC_28(VAR_20, "failed insert local address bridge forwarding table\n");

 if (VAR_19->dev->addr_assign_type != VAR_13) {



  VAR_23 = FUNC_15(VAR_19->dev, VAR_20->dev_addr, VAR_21);
  if (VAR_23)
   goto err7;
 }

 VAR_23 = FUNC_27(VAR_22, VAR_21);
 if (VAR_23) {
  FUNC_28(VAR_20, "failed to initialize vlan filtering on this port\n");
  goto err7;
 }

 FUNC_41(&VAR_19->lock);
 VAR_26 = FUNC_11(VAR_19);

 if (FUNC_39(VAR_20) && FUNC_38(VAR_20) &&
     (VAR_19->dev->flags & VAR_9))
  FUNC_10(VAR_22);
 FUNC_42(&VAR_19->lock);

 FUNC_5(VAR_14, ((void*)0), VAR_22);

 if (VAR_26)
  FUNC_13(VAR_11, VAR_19->dev);

 FUNC_6(VAR_19);
 FUNC_9(VAR_19);

 FUNC_22(&VAR_22->kobj, VAR_10);

 return 0;

err7:
 FUNC_24(&VAR_22->list);
 FUNC_3(VAR_19, VAR_22, 0, 1);
 FUNC_26(VAR_19);
err6:
 FUNC_36(VAR_20, VAR_19->dev);
err5:
 VAR_20->priv_flags &= ~VAR_6;
 FUNC_33(VAR_20);
err4:
 FUNC_7(VAR_22);
err3:
 FUNC_43(VAR_19->ifobj, VAR_22->dev->name);
err2:
 FUNC_21(&VAR_22->kobj);
 FUNC_17(VAR_20, -1);
err1:
 FUNC_16(VAR_20);
 return VAR_23;
}
