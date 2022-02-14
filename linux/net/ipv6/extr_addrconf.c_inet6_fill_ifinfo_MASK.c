
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {scalar_t__ ifindex; scalar_t__ mtu; int operstate; int dev_addr; scalar_t__ addr_len; int name; int type; } ;
struct inet6_dev {struct net_device* dev; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; int ifi_flags; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct inet6_dev*,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 void* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_9, struct inet6_dev *VAR_10,
        u32 VAR_11, u32 VAR_12, int VAR_13, unsigned int VAR_14)
{
 struct net_device *VAR_15 = VAR_10->dev;
 struct ifinfomsg *VAR_16;
 struct nlmsghdr *VAR_17;
 void *VAR_18;

 VAR_17 = FUNC_13(VAR_9, VAR_11, VAR_12, VAR_13, sizeof(*VAR_16), VAR_14);
 if (!VAR_17)
  return -VAR_1;

 VAR_16 = FUNC_11(VAR_17);
 VAR_16->ifi_family = VAR_0;
 VAR_16->__ifi_pad = 0;
 VAR_16->ifi_type = VAR_15->type;
 VAR_16->ifi_index = VAR_15->ifindex;
 VAR_16->ifi_flags = FUNC_0(VAR_15);
 VAR_16->ifi_change = 0;

 if (FUNC_7(VAR_9, VAR_3, VAR_15->name) ||
     (VAR_15->addr_len &&
      FUNC_6(VAR_9, VAR_2, VAR_15->addr_len, VAR_15->dev_addr)) ||
     FUNC_8(VAR_9, VAR_5, VAR_15->mtu) ||
     (VAR_15->ifindex != FUNC_1(VAR_15) &&
      FUNC_8(VAR_9, VAR_4, FUNC_1(VAR_15))) ||
     FUNC_9(VAR_9, VAR_6,
         FUNC_3(VAR_15) ? VAR_15->operstate : VAR_8))
  goto nla_put_failure;
 VAR_18 = FUNC_5(VAR_9, VAR_7);
 if (!VAR_18)
  goto nla_put_failure;

 if (FUNC_2(VAR_9, VAR_10, 0) < 0)
  goto nla_put_failure;

 FUNC_4(VAR_9, VAR_18);
 FUNC_12(VAR_9, VAR_17);
 return 0;

nla_put_failure:
 FUNC_10(VAR_9, VAR_17);
 return -VAR_1;
}
