
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct net*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net*) ;
 struct net_device* FUNC_3 (struct net*,scalar_t__) ;
 struct net_device* FUNC_4 (struct net*,char*) ;
 int VAR_7 ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (char*,struct nlattr*,int) ;
 struct ifinfomsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_10 (struct net*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct nlattr**,struct netlink_ext_ack*,int) ;
 struct net* FUNC_13 (int ,int) ;
 int FUNC_14 (struct net*,int ) ;
 struct net* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9,
   struct netlink_ext_ack *VAR_10)
{
 struct net *VAR_11 = FUNC_15(VAR_8->sk);
 struct net *VAR_12 = VAR_11;
 struct net_device *VAR_13 = ((void*)0);
 struct ifinfomsg *VAR_14;
 char VAR_15[VAR_6];
 struct nlattr *VAR_16[VAR_4+1];
 int VAR_17;
 int VAR_18 = -1;

 VAR_17 = FUNC_9(VAR_9, sizeof(*VAR_14), VAR_16, VAR_4,
         VAR_7, VAR_10);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_12(VAR_16, VAR_10, 1);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_16[VAR_3])
  FUNC_7(VAR_15, VAR_16[VAR_3], VAR_6);

 if (VAR_16[VAR_5]) {
  VAR_18 = FUNC_5(VAR_16[VAR_5]);
  VAR_12 = FUNC_13(FUNC_1(VAR_8).sk, VAR_18);
  if (FUNC_0(VAR_12))
   return FUNC_2(VAR_12);
 }

 VAR_17 = -VAR_0;
 VAR_14 = FUNC_8(VAR_9);
 if (VAR_14->ifi_index > 0)
  VAR_13 = FUNC_3(VAR_12, VAR_14->ifi_index);
 else if (VAR_16[VAR_3])
  VAR_13 = FUNC_4(VAR_12, VAR_15);
 else if (VAR_16[VAR_2])
  VAR_17 = FUNC_14(VAR_12, FUNC_6(VAR_16[VAR_2]));
 else
  goto out;

 if (!VAR_13) {
  if (VAR_16[VAR_3] || VAR_14->ifi_index > 0)
   VAR_17 = -VAR_1;

  goto out;
 }

 VAR_17 = FUNC_11(VAR_13);

out:
 if (VAR_18 >= 0)
  FUNC_10(VAR_12);

 return VAR_17;
}
