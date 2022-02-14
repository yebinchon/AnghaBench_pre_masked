
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {scalar_t__ ifindex; scalar_t__ mtu; int dev_addr; scalar_t__ addr_len; int name; int type; int operstate; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; int ifi_flags; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int ) ;
 int FUNC_14 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_17 (struct sk_buff*,int ,int ,int ,int,int) ;

int FUNC_18(struct sk_buff *VAR_32, u32 VAR_33, u32 VAR_34,
       struct net_device *VAR_35, u16 VAR_36,
       u32 VAR_37, u32 VAR_38, int VAR_39,
       u32 VAR_40,
       int (*VAR_41)(struct sk_buff *VAR_42,
          struct net_device *VAR_43,
          u32 VAR_44))
{
 struct nlmsghdr *VAR_45;
 struct ifinfomsg *VAR_46;
 struct nlattr *VAR_47;
 struct nlattr *VAR_48;
 u8 VAR_49 = FUNC_4(VAR_35) ? VAR_35->operstate : VAR_30;
 struct net_device *VAR_50 = FUNC_3(VAR_35);
 int VAR_51 = 0;

 VAR_45 = FUNC_17(VAR_32, VAR_33, VAR_34, VAR_31, sizeof(*VAR_46), VAR_39);
 if (VAR_45 == ((void*)0))
  return -VAR_11;

 VAR_46 = FUNC_15(VAR_45);
 VAR_46->ifi_family = VAR_0;
 VAR_46->__ifi_pad = 0;
 VAR_46->ifi_type = VAR_35->type;
 VAR_46->ifi_index = VAR_35->ifindex;
 VAR_46->ifi_flags = FUNC_1(VAR_35);
 VAR_46->ifi_change = 0;


 if (FUNC_10(VAR_32, VAR_24, VAR_35->name) ||
     FUNC_12(VAR_32, VAR_27, VAR_35->mtu) ||
     FUNC_13(VAR_32, VAR_28, VAR_49) ||
     (VAR_50 &&
      FUNC_12(VAR_32, VAR_26, VAR_50->ifindex)) ||
     (VAR_35->addr_len &&
      FUNC_9(VAR_32, VAR_12, VAR_35->addr_len, VAR_35->dev_addr)) ||
     (VAR_35->ifindex != FUNC_2(VAR_35) &&
      FUNC_12(VAR_32, VAR_25, FUNC_2(VAR_35))))
  goto nla_put_failure;

 VAR_47 = FUNC_8(VAR_32, VAR_13);
 if (!VAR_47)
  goto nla_put_failure;

 if (FUNC_11(VAR_32, VAR_14, VAR_1)) {
  FUNC_5(VAR_32, VAR_47);
  goto nla_put_failure;
 }

 if (VAR_36 != VAR_2) {
  if (FUNC_11(VAR_32, VAR_15, VAR_36)) {
   FUNC_5(VAR_32, VAR_47);
   goto nla_put_failure;
  }
 }
 if (VAR_41) {
  VAR_51 = VAR_41(VAR_32, VAR_35, VAR_40);
  if (VAR_51) {
   FUNC_5(VAR_32, VAR_47);
   goto nla_put_failure;
  }
 }
 FUNC_6(VAR_32, VAR_47);

 VAR_48 = FUNC_7(VAR_32, VAR_29);
 if (!VAR_48)
  goto nla_put_failure;

 if (FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_20, VAR_5) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_17, VAR_3) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_16,
    VAR_8) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_21, VAR_10) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_18, VAR_6) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_19, VAR_7) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_23, VAR_4) ||
     FUNC_0(VAR_32, VAR_37, VAR_38,
    VAR_22, VAR_9)) {
  FUNC_5(VAR_32, VAR_48);
  goto nla_put_failure;
 }

 FUNC_6(VAR_32, VAR_48);

 FUNC_16(VAR_32, VAR_45);
 return 0;
nla_put_failure:
 FUNC_14(VAR_32, VAR_45);
 return VAR_51 ? VAR_51 : -VAR_11;
}
