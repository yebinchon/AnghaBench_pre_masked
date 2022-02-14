
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_pre_changeaddr_info {int dev_addr; } ;
struct net_device {int priv_flags; int dev_addr; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {TYPE_1__* dev; int lock; } ;
struct TYPE_5__ {int flags; int addr_assign_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_bridge*,struct net_device*) ;
 int FUNC_1 (struct net_bridge_port*,int ) ;
 int FUNC_2 (int ,int *,struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (struct net_bridge_port*,int*) ;
 struct net_bridge_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_bridge_port*) ;
 int FUNC_7 (struct net_bridge_port*) ;
 int FUNC_8 (struct net_bridge*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_bridge_port*) ;
 int FUNC_11 (struct net_device*,unsigned long,void*) ;
 int FUNC_12 (struct net_bridge_port*,unsigned long) ;
 int FUNC_13 (int const,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int ,struct netlink_ext_ack*) ;
 struct net_device* FUNC_15 (void*) ;
 struct netlink_ext_ack* FUNC_16 (void*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct notifier_block *VAR_7, unsigned long VAR_8, void *VAR_9)
{
 struct netlink_ext_ack *VAR_10 = FUNC_16(VAR_9);
 struct netdev_notifier_pre_changeaddr_info *VAR_11;
 struct net_device *VAR_12 = FUNC_15(VAR_9);
 struct net_bridge_port *VAR_13;
 struct net_bridge *VAR_14;
 bool VAR_15 = 0;
 bool VAR_16;
 int VAR_17;

 if (VAR_12->priv_flags & VAR_0) {
  VAR_17 = FUNC_11(VAR_12, VAR_8, VAR_9);
  if (VAR_17)
   return FUNC_20(VAR_17);

  if (VAR_8 == VAR_2) {

   FUNC_9(VAR_12);
   return VAR_5;
  }
 }


 VAR_13 = FUNC_5(VAR_12);
 if (!VAR_13)
  return VAR_5;

 VAR_14 = VAR_13->br;

 switch (VAR_8) {
 case 136:
  FUNC_3(VAR_14);
  break;

 case 132:
  if (VAR_14->dev->addr_assign_type == VAR_3)
   break;
  VAR_11 = VAR_9;
  VAR_17 = FUNC_14(VAR_14->dev,
      VAR_11->dev_addr,
      VAR_10);
  if (VAR_17)
   return FUNC_20(VAR_17);
  break;

 case 137:
  FUNC_21(&VAR_14->lock);
  FUNC_1(VAR_13, VAR_12->dev_addr);
  VAR_16 = FUNC_8(VAR_14);
  FUNC_22(&VAR_14->lock);

  if (VAR_16)
   FUNC_13(137, VAR_14->dev);

  break;

 case 138:
  FUNC_4(VAR_13, &VAR_15);
  break;

 case 133:
  FUNC_17(VAR_14->dev);
  break;

 case 134:
  FUNC_21(&VAR_14->lock);
  if (VAR_14->dev->flags & VAR_1) {
   FUNC_6(VAR_13);
   VAR_15 = 1;
  }
  FUNC_22(&VAR_14->lock);
  break;

 case 128:
  if (FUNC_19(VAR_14->dev) && FUNC_18(VAR_12)) {
   FUNC_21(&VAR_14->lock);
   FUNC_7(VAR_13);
   VAR_15 = 1;
   FUNC_22(&VAR_14->lock);
  }
  break;

 case 129:
  FUNC_0(VAR_14, VAR_12);
  break;

 case 135:
  VAR_17 = FUNC_10(VAR_13);
  if (VAR_17)
   return FUNC_20(VAR_17);
  break;

 case 131:

  return VAR_4;

 case 130:

  FUNC_13(VAR_8, VAR_14->dev);
  break;
 }

 if (VAR_8 != 129)
  FUNC_12(VAR_13, VAR_8);


 if (!VAR_15 && (VAR_8 == 137 || VAR_8 == 128 ||
     VAR_8 == 138 || VAR_8 == 134))
  FUNC_2(VAR_6, ((void*)0), VAR_13);

 return VAR_5;
}
