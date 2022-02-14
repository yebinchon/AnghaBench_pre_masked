
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_10 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,size_t,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_11, struct sock *VAR_12,
      struct sk_buff *VAR_13, const struct nlmsghdr *VAR_14,
      const struct nlattr * const VAR_15[],
      struct netlink_ext_ack *VAR_16)
{
 struct sk_buff *VAR_17;
 struct nlmsghdr *VAR_18;
 int VAR_19 = 0;

 if (FUNC_8(!VAR_15[VAR_3]))
  return -VAR_6;

 VAR_17 = FUNC_6(VAR_10, VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_18 = FUNC_7(VAR_17, FUNC_0(VAR_13).portid, VAR_14->nlmsg_seq, 0,
    VAR_5);
 if (!VAR_18)
  goto nlmsg_failure;
 if (FUNC_3(VAR_17, VAR_3, VAR_7))
  goto nla_put_failure;
 if (FUNC_3(VAR_17, VAR_4, VAR_8))
  goto nla_put_failure;
 FUNC_5(VAR_17, VAR_18);

 VAR_19 = FUNC_2(VAR_12, VAR_17, FUNC_0(VAR_13).portid, VAR_9);
 if (VAR_19 < 0)
  return VAR_19;

 return 0;

nla_put_failure:
 FUNC_4(VAR_17, VAR_18);
nlmsg_failure:
 FUNC_1(VAR_17);
 return -VAR_0;
}
