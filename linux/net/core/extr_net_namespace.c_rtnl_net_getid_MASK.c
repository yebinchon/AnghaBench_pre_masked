
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_fill_args {int add_ref; void* nsid; void* ref_nsid; int cmd; int seq; int portid; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct net*) ;
 TYPE_1__ FUNC_2 (struct sk_buff*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (struct netlink_ext_ack*,struct nlattr*) ;
 int FUNC_4 (struct netlink_ext_ack*,char*) ;
 int FUNC_5 (struct net*) ;
 int VAR_9 ;
 struct net* FUNC_6 (int ) ;
 struct net* FUNC_7 (struct net*,int) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 void* FUNC_13 (struct net*,struct net*) ;
 int FUNC_14 (struct net*) ;
 struct net* FUNC_15 (int ,int) ;
 int FUNC_16 (struct sk_buff*,struct net_fill_args*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_19 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
     struct netlink_ext_ack *VAR_12)
{
 struct net *VAR_13 = FUNC_20(VAR_10->sk);
 struct nlattr *VAR_14[VAR_5 + 1];
 struct net_fill_args VAR_15 = {
  .portid = FUNC_2(VAR_10).portid,
  .seq = VAR_11->nlmsg_seq,
  .cmd = VAR_9,
 };
 struct net *VAR_16, *VAR_17 = VAR_13;
 struct nlattr *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_18(VAR_10, VAR_11, VAR_14, VAR_12);
 if (VAR_20 < 0)
  return VAR_20;
 if (VAR_14[VAR_7]) {
  VAR_16 = FUNC_8(FUNC_10(VAR_14[VAR_7]));
  VAR_18 = VAR_14[VAR_7];
 } else if (VAR_14[VAR_4]) {
  VAR_16 = FUNC_6(FUNC_10(VAR_14[VAR_4]));
  VAR_18 = VAR_14[VAR_4];
 } else if (VAR_14[VAR_6]) {
  VAR_16 = FUNC_7(VAR_13, FUNC_9(VAR_14[VAR_6]));
  if (!VAR_16)
   VAR_16 = FUNC_0(-VAR_1);
  VAR_18 = VAR_14[VAR_6];
 } else {
  FUNC_4(VAR_12, "Peer netns reference is missing");
  return -VAR_0;
 }

 if (FUNC_1(VAR_16)) {
  FUNC_3(VAR_12, VAR_18);
  FUNC_4(VAR_12, "Peer netns reference is invalid");
  return FUNC_5(VAR_16);
 }

 if (VAR_14[VAR_8]) {
  int VAR_21 = FUNC_9(VAR_14[VAR_8]);

  VAR_17 = FUNC_15(FUNC_2(VAR_10).sk, VAR_21);
  if (FUNC_1(VAR_17)) {
   FUNC_3(VAR_12, VAR_14[VAR_8]);
   FUNC_4(VAR_12,
           "Target netns reference is invalid");
   VAR_20 = FUNC_5(VAR_17);
   goto out;
  }
  VAR_15.add_ref = 1;
  VAR_15.ref_nsid = FUNC_13(VAR_13, VAR_16);
 }

 VAR_19 = FUNC_12(FUNC_17(), VAR_3);
 if (!VAR_19) {
  VAR_20 = -VAR_2;
  goto out;
 }

 VAR_15.nsid = FUNC_13(VAR_17, VAR_16);
 VAR_20 = FUNC_16(VAR_19, &VAR_15);
 if (VAR_20 < 0)
  goto err_out;

 VAR_20 = FUNC_19(VAR_19, VAR_13, FUNC_2(VAR_10).portid);
 goto out;

err_out:
 FUNC_11(VAR_19);
out:
 if (VAR_15.add_ref)
  FUNC_14(VAR_17);
 FUNC_14(VAR_16);
 return VAR_20;
}
