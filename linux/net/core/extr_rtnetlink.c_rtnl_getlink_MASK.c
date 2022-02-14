
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct net*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net*) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 struct net_device* FUNC_4 (struct net*,scalar_t__) ;
 struct net_device* FUNC_5 (struct net*,char*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (char*,struct nlattr*,int) ;
 struct ifinfomsg* FUNC_11 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct net*) ;
 int FUNC_14 (struct nlattr**,struct netlink_ext_ack*,int) ;
 int FUNC_15 (struct sk_buff*,struct net_device*,struct net*,int ,int ,int ,int ,int ,int ,int ,int *,int ,int,int ) ;
 struct net* FUNC_16 (int ,int) ;
 int FUNC_17 (struct sk_buff*,struct net*,int ) ;
 int FUNC_18 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 struct net* FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_11, struct nlmsghdr *VAR_12,
   struct netlink_ext_ack *VAR_13)
{
 struct net *VAR_14 = FUNC_19(VAR_11->sk);
 struct net *VAR_15 = VAR_14;
 struct ifinfomsg *VAR_16;
 char VAR_17[VAR_9];
 struct nlattr *VAR_18[VAR_7+1];
 struct net_device *VAR_19 = ((void*)0);
 struct sk_buff *VAR_20;
 int VAR_21 = -1;
 int VAR_22;
 u32 VAR_23 = 0;

 VAR_22 = FUNC_18(VAR_11, VAR_12, VAR_18, VAR_13);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_14(VAR_18, VAR_13, 1);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_18[VAR_8]) {
  VAR_21 = FUNC_8(VAR_18[VAR_8]);
  VAR_15 = FUNC_16(FUNC_1(VAR_11).sk, VAR_21);
  if (FUNC_0(VAR_15))
   return FUNC_2(VAR_15);
 }

 if (VAR_18[VAR_6])
  FUNC_10(VAR_17, VAR_18[VAR_6], VAR_9);

 if (VAR_18[VAR_5])
  VAR_23 = FUNC_9(VAR_18[VAR_5]);

 VAR_22 = -VAR_0;
 VAR_16 = FUNC_11(VAR_12);
 if (VAR_16->ifi_index > 0)
  VAR_19 = FUNC_4(VAR_15, VAR_16->ifi_index);
 else if (VAR_18[VAR_6])
  VAR_19 = FUNC_5(VAR_15, VAR_17);
 else
  goto out;

 VAR_22 = -VAR_3;
 if (VAR_19 == ((void*)0))
  goto out;

 VAR_22 = -VAR_2;
 VAR_20 = FUNC_12(FUNC_6(VAR_19, VAR_23), VAR_4);
 if (VAR_20 == ((void*)0))
  goto out;

 VAR_22 = FUNC_15(VAR_20, VAR_19, VAR_14,
          VAR_10, FUNC_1(VAR_11).portid,
          VAR_12->nlmsg_seq, 0, 0, VAR_23,
          0, ((void*)0), 0, VAR_21, VAR_4);
 if (VAR_22 < 0) {

  FUNC_3(VAR_22 == -VAR_1);
  FUNC_7(VAR_20);
 } else
  VAR_22 = FUNC_17(VAR_20, VAR_14, FUNC_1(VAR_11).portid);
out:
 if (VAR_21 >= 0)
  FUNC_13(VAR_15);

 return VAR_22;
}
