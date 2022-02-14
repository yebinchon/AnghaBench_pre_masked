
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int nla_type; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* br; } ;
struct net_bridge {int dummy; } ;
struct ifinfomsg {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,struct nlattr*,int ,int*,struct netlink_ext_ack*) ;
 int FUNC_1 (int ,struct net_bridge*,struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_2 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_3 (struct net_bridge_port*,int ) ;
 int FUNC_4 (struct net_bridge_port*,struct nlattr**) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 struct nlattr* FUNC_9 (struct nlmsghdr*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct net_device *VAR_8, struct nlmsghdr *VAR_9, u16 VAR_10,
        struct netlink_ext_ack *VAR_11)
{
 struct net_bridge *VAR_12 = (struct net_bridge *)FUNC_5(VAR_8);
 struct nlattr *VAR_13[VAR_2 + 1];
 struct net_bridge_port *VAR_14;
 struct nlattr *VAR_15;
 struct nlattr *VAR_16;
 bool VAR_17 = 0;
 int VAR_18 = 0;

 VAR_15 = FUNC_9(VAR_9, sizeof(struct ifinfomsg), VAR_3);
 VAR_16 = FUNC_9(VAR_9, sizeof(struct ifinfomsg), VAR_1);
 if (!VAR_15 && !VAR_16)
  return 0;

 VAR_14 = FUNC_2(VAR_8);



 if (!VAR_14 && !VAR_16)
  return -VAR_0;

 if (VAR_14 && VAR_15) {
  if (VAR_15->nla_type & VAR_4) {
   VAR_18 = FUNC_8(VAR_13, VAR_2,
         VAR_15,
         VAR_7,
         ((void*)0));
   if (VAR_18)
    return VAR_18;

   FUNC_10(&VAR_14->br->lock);
   VAR_18 = FUNC_4(VAR_14, VAR_13);
   FUNC_11(&VAR_14->br->lock);
  } else {

   if (FUNC_7(VAR_15) < sizeof(u8))
    return -VAR_0;

   FUNC_10(&VAR_14->br->lock);
   VAR_18 = FUNC_3(VAR_14, FUNC_6(VAR_15));
   FUNC_11(&VAR_14->br->lock);
  }
  if (VAR_18)
   goto out;
  VAR_17 = 1;
 }

 if (VAR_16)
  VAR_18 = FUNC_0(VAR_12, VAR_14, VAR_16, VAR_6, &VAR_17, VAR_11);

 if (VAR_17)
  FUNC_1(VAR_5, VAR_12, VAR_14);
out:
 return VAR_18;
}
