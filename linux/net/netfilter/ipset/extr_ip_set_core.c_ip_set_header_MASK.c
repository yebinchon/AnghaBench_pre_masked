
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct ip_set_net {int dummy; } ;
struct ip_set {int revision; int family; TYPE_1__* type; int name; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_12 ;
 struct ip_set* FUNC_1 (struct ip_set_net*,int ) ;
 struct ip_set_net* FUNC_2 (struct net*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct nlattr const* const) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct nlattr const* const*) ;
 scalar_t__ FUNC_12 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_13, struct sock *VAR_14,
    struct sk_buff *VAR_15, const struct nlmsghdr *VAR_16,
    const struct nlattr * const VAR_17[],
    struct netlink_ext_ack *VAR_18)
{
 struct ip_set_net *VAR_19 = FUNC_2(VAR_13);
 const struct ip_set *VAR_20;
 struct sk_buff *VAR_21;
 struct nlmsghdr *VAR_22;
 int VAR_23 = 0;

 if (FUNC_14(FUNC_12(VAR_17) ||
       !VAR_17[VAR_7]))
  return -VAR_10;

 VAR_20 = FUNC_1(VAR_19, FUNC_5(VAR_17[VAR_7]));
 if (!VAR_20)
  return -VAR_1;

 VAR_21 = FUNC_10(VAR_12, VAR_3);
 if (!VAR_21)
  return -VAR_2;

 VAR_22 = FUNC_13(VAR_21, FUNC_0(VAR_15).portid, VAR_16->nlmsg_seq, 0,
    VAR_9);
 if (!VAR_22)
  goto nlmsg_failure;
 if (FUNC_7(VAR_21, VAR_5, FUNC_11(VAR_17)) ||
     FUNC_6(VAR_21, VAR_7, VAR_20->name) ||
     FUNC_6(VAR_21, VAR_8, VAR_20->type->name) ||
     FUNC_7(VAR_21, VAR_4, VAR_20->family) ||
     FUNC_7(VAR_21, VAR_6, VAR_20->revision))
  goto nla_put_failure;
 FUNC_9(VAR_21, VAR_22);

 VAR_23 = FUNC_4(VAR_14, VAR_21, FUNC_0(VAR_15).portid, VAR_11);
 if (VAR_23 < 0)
  return VAR_23;

 return 0;

nla_put_failure:
 FUNC_8(VAR_21, VAR_22);
nlmsg_failure:
 FUNC_3(VAR_21);
 return -VAR_0;
}
