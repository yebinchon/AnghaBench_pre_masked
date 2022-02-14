
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ifaddrmsg {int ifa_prefixlen; int ifa_flags; int ifa_index; int ifa_scope; int ifa_family; } ;
struct dn_ifaddr {int ifa_flags; scalar_t__* ifa_label; scalar_t__ ifa_local; scalar_t__ ifa_address; TYPE_2__* ifa_dev; int ifa_scope; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifaddrmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int,int,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct dn_ifaddr *VAR_8,
        u32 VAR_9, u32 VAR_10, int VAR_11, unsigned int VAR_12)
{
 struct ifaddrmsg *VAR_13;
 struct nlmsghdr *VAR_14;
 u32 VAR_15 = VAR_8->ifa_flags | VAR_4;

 VAR_14 = FUNC_6(VAR_7, VAR_9, VAR_10, VAR_11, sizeof(*VAR_13), VAR_12);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_14);
 VAR_13->ifa_family = VAR_0;
 VAR_13->ifa_prefixlen = 16;
 VAR_13->ifa_flags = VAR_15;
 VAR_13->ifa_scope = VAR_8->ifa_scope;
 VAR_13->ifa_index = VAR_8->ifa_dev->dev->ifindex;

 if ((VAR_8->ifa_address &&
      FUNC_0(VAR_7, VAR_2, VAR_8->ifa_address)) ||
     (VAR_8->ifa_local &&
      FUNC_0(VAR_7, VAR_6, VAR_8->ifa_local)) ||
     (VAR_8->ifa_label[0] &&
      FUNC_1(VAR_7, VAR_5, VAR_8->ifa_label)) ||
      FUNC_2(VAR_7, VAR_3, VAR_15))
  goto nla_put_failure;
 FUNC_5(VAR_7, VAR_14);
 return 0;

nla_put_failure:
 FUNC_3(VAR_7, VAR_14);
 return -VAR_1;
}
