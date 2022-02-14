
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {scalar_t__ ifindex; scalar_t__ mtu; int dev_addr; scalar_t__ addr_len; int name; int type; int operstate; } ;
struct net_bridge_vlan_group {int num_vlans; } ;
struct net_bridge_port {int flags; struct net_bridge* br; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; int ifi_flags; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;
struct TYPE_2__ {scalar_t__ ifindex; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct net_bridge*,char*,int,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_bridge_vlan_group*) ;
 int FUNC_2 (struct sk_buff*,struct net_bridge_vlan_group*) ;
 int FUNC_3 (struct sk_buff*,struct net_bridge_vlan_group*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct net_bridge_port const*) ;
 struct net_bridge_vlan_group* FUNC_5 (struct net_bridge*) ;
 int FUNC_6 (struct net_device const*) ;
 scalar_t__ FUNC_7 (struct net_device const*) ;
 struct net_bridge_vlan_group* FUNC_8 (struct net_bridge_port const*) ;
 struct net_bridge* FUNC_9 (struct net_device const*) ;
 scalar_t__ FUNC_10 (struct net_device const*) ;
 int FUNC_11 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_12 (struct sk_buff*,int ) ;
 struct nlattr* FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_17 (struct sk_buff*,int ,int ) ;
 int FUNC_18 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_19 (struct nlmsghdr*) ;
 int FUNC_20 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_21 (struct sk_buff*,int,int,int,int,unsigned int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_15,
     const struct net_bridge_port *VAR_16,
     u32 VAR_17, u32 VAR_18, int VAR_19, unsigned int VAR_20,
     u32 VAR_21, const struct net_device *VAR_22)
{
 u8 VAR_23 = FUNC_10(VAR_22) ? VAR_22->operstate : VAR_11;
 struct net_bridge *VAR_24;
 struct ifinfomsg *VAR_25;
 struct nlmsghdr *VAR_26;

 if (VAR_16)
  VAR_24 = VAR_16->br;
 else
  VAR_24 = FUNC_9(VAR_22);

 FUNC_0(VAR_24, "br_fill_info event %d port %s master %s\n",
       VAR_19, VAR_22->name, VAR_24->dev->name);

 VAR_26 = FUNC_21(VAR_15, VAR_17, VAR_18, VAR_19, sizeof(*VAR_25), VAR_20);
 if (VAR_26 == ((void*)0))
  return -VAR_2;

 VAR_25 = FUNC_19(VAR_26);
 VAR_25->ifi_family = VAR_0;
 VAR_25->__ifi_pad = 0;
 VAR_25->ifi_type = VAR_22->type;
 VAR_25->ifi_index = VAR_22->ifindex;
 VAR_25->ifi_flags = FUNC_6(VAR_22);
 VAR_25->ifi_change = 0;

 if (FUNC_15(VAR_15, VAR_5, VAR_22->name) ||
     FUNC_16(VAR_15, VAR_7, VAR_24->dev->ifindex) ||
     FUNC_16(VAR_15, VAR_8, VAR_22->mtu) ||
     FUNC_17(VAR_15, VAR_9, VAR_23) ||
     (VAR_22->addr_len &&
      FUNC_14(VAR_15, VAR_3, VAR_22->addr_len, VAR_22->dev_addr)) ||
     (VAR_22->ifindex != FUNC_7(VAR_22) &&
      FUNC_16(VAR_15, VAR_6, FUNC_7(VAR_22))))
  goto nla_put_failure;

 if (VAR_19 == VAR_14 && VAR_16) {
  struct nlattr *VAR_27;

  VAR_27 = FUNC_12(VAR_15, VAR_10);
  if (VAR_27 == ((void*)0) || FUNC_4(VAR_15, VAR_16) < 0)
   goto nla_put_failure;
  FUNC_11(VAR_15, VAR_27);
 }


 if ((VAR_21 & VAR_12) ||
     (VAR_21 & VAR_13)) {
  struct net_bridge_vlan_group *VAR_28;
  struct nlattr *VAR_29;
  int VAR_30;


  FUNC_22();
  if (VAR_16)
   VAR_28 = FUNC_8(VAR_16);
  else
   VAR_28 = FUNC_5(VAR_24);

  if (!VAR_28 || !VAR_28->num_vlans) {
   FUNC_23();
   goto done;
  }
  VAR_29 = FUNC_13(VAR_15, VAR_4);
  if (!VAR_29) {
   FUNC_23();
   goto nla_put_failure;
  }
  if (VAR_21 & VAR_13)
   VAR_30 = FUNC_2(VAR_15, VAR_28);
  else
   VAR_30 = FUNC_1(VAR_15, VAR_28);

  if (VAR_16 && (VAR_16->flags & VAR_1))
   VAR_30 = FUNC_3(VAR_15, VAR_28);
  FUNC_23();
  if (VAR_30)
   goto nla_put_failure;
  FUNC_11(VAR_15, VAR_29);
 }

done:
 FUNC_20(VAR_15, VAR_26);
 return 0;

nla_put_failure:
 FUNC_18(VAR_15, VAR_26);
 return -VAR_2;
}
