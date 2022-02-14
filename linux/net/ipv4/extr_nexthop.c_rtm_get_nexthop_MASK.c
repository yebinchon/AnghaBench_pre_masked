
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct nexthop* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct sk_buff*,struct nexthop*,int ,int ,int ,int ) ;
 int FUNC_6 (struct nlmsghdr*,int *,struct netlink_ext_ack*) ;
 int FUNC_7 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
      struct netlink_ext_ack *VAR_8)
{
 struct net *VAR_9 = FUNC_8(VAR_6->sk);
 struct sk_buff *VAR_10 = ((void*)0);
 struct nexthop *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_6(VAR_7, &VAR_13, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_10)
  goto out;

 VAR_12 = -VAR_2;
 VAR_11 = FUNC_4(VAR_9, VAR_13);
 if (!VAR_11)
  goto errout_free;

 VAR_12 = FUNC_5(VAR_10, VAR_11, VAR_5, FUNC_0(VAR_6).portid,
      VAR_7->nlmsg_seq, 0);
 if (VAR_12 < 0) {
  FUNC_1(VAR_12 == -VAR_0);
  goto errout_free;
 }

 VAR_12 = FUNC_7(VAR_10, VAR_9, FUNC_0(VAR_6).portid);
out:
 return VAR_12;
errout_free:
 FUNC_3(VAR_10);
 goto out;
}
