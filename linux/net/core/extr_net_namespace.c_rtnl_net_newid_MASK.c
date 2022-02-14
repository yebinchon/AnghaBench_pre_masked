
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct rtgenmsg {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int nsid_lock; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr*) ;
 int FUNC_3 (struct netlink_ext_ack*,char*) ;
 int FUNC_4 (struct net*) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct net*,struct net*) ;
 int FUNC_6 (struct net*,struct net*,int) ;
 struct net* FUNC_7 (int ) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_12 (struct net*) ;
 int FUNC_13 (struct net*,int ,int,int ,struct nlmsghdr*,int ) ;
 int VAR_9 ;
 struct net* FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
     struct netlink_ext_ack *VAR_12)
{
 struct net *VAR_13 = FUNC_14(VAR_10->sk);
 struct nlattr *VAR_14[VAR_5 + 1];
 struct nlattr *VAR_15;
 struct net *VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_11(VAR_11, sizeof(struct rtgenmsg), VAR_14,
         VAR_5, VAR_9, VAR_12);
 if (VAR_18 < 0)
  return VAR_18;
 if (!VAR_14[VAR_6]) {
  FUNC_3(VAR_12, "nsid is missing");
  return -VAR_1;
 }
 VAR_17 = FUNC_9(VAR_14[VAR_6]);

 if (VAR_14[VAR_7]) {
  VAR_16 = FUNC_8(FUNC_10(VAR_14[VAR_7]));
  VAR_15 = VAR_14[VAR_7];
 } else if (VAR_14[VAR_4]) {
  VAR_16 = FUNC_7(FUNC_10(VAR_14[VAR_4]));
  VAR_15 = VAR_14[VAR_4];
 } else {
  FUNC_3(VAR_12, "Peer netns reference is missing");
  return -VAR_1;
 }
 if (FUNC_0(VAR_16)) {
  FUNC_2(VAR_12, VAR_15);
  FUNC_3(VAR_12, "Peer netns reference is invalid");
  return FUNC_4(VAR_16);
 }

 FUNC_15(&VAR_13->nsid_lock);
 if (FUNC_5(VAR_13, VAR_16) >= 0) {
  FUNC_16(&VAR_13->nsid_lock);
  VAR_18 = -VAR_0;
  FUNC_2(VAR_12, VAR_15);
  FUNC_3(VAR_12,
          "Peer netns already has a nsid assigned");
  goto out;
 }

 VAR_18 = FUNC_6(VAR_13, VAR_16, VAR_17);
 FUNC_16(&VAR_13->nsid_lock);
 if (VAR_18 >= 0) {
  FUNC_13(VAR_13, VAR_8, VAR_18, FUNC_1(VAR_10).portid,
      VAR_11, VAR_3);
  VAR_18 = 0;
 } else if (VAR_18 == -VAR_2 && VAR_17 >= 0) {
  VAR_18 = -VAR_0;
  FUNC_2(VAR_12, VAR_14[VAR_6]);
  FUNC_3(VAR_12, "The specified nsid is already used");
 }
out:
 FUNC_12(VAR_16);
 return VAR_18;
}
