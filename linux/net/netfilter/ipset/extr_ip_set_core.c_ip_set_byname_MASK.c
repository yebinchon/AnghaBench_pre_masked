
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
struct ip_set_net {int dummy; } ;
struct ip_set {int family; } ;
typedef scalar_t__ ip_set_id_t ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_12 ;
 struct ip_set* FUNC_1 (struct ip_set_net*,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 struct ip_set_net* FUNC_3 (struct net*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct nlattr const* const) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct nlattr const* const*) ;
 scalar_t__ FUNC_13 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_14 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net *VAR_13, struct sock *VAR_14,
    struct sk_buff *VAR_15, const struct nlmsghdr *VAR_16,
    const struct nlattr * const VAR_17[],
    struct netlink_ext_ack *VAR_18)
{
 struct ip_set_net *VAR_19 = FUNC_3(VAR_13);
 struct sk_buff *VAR_20;
 struct nlmsghdr *VAR_21;
 ip_set_id_t VAR_22 = VAR_10;
 const struct ip_set *VAR_23;
 int VAR_24 = 0;

 if (FUNC_15(FUNC_13(VAR_17) ||
       !VAR_17[VAR_7]))
  return -VAR_9;

 VAR_23 = FUNC_1(VAR_19, FUNC_6(VAR_17[VAR_7]), &VAR_22);
 if (VAR_22 == VAR_10)
  return -VAR_1;

 VAR_20 = FUNC_11(VAR_12, VAR_3);
 if (!VAR_20)
  return -VAR_2;

 VAR_21 = FUNC_14(VAR_20, FUNC_0(VAR_15).portid, VAR_16->nlmsg_seq, 0,
    VAR_8);
 if (!VAR_21)
  goto nlmsg_failure;
 if (FUNC_8(VAR_20, VAR_6, FUNC_12(VAR_17)) ||
     FUNC_8(VAR_20, VAR_4, VAR_23->family) ||
     FUNC_7(VAR_20, VAR_5, FUNC_2(VAR_22)))
  goto nla_put_failure;
 FUNC_10(VAR_20, VAR_21);

 VAR_24 = FUNC_5(VAR_14, VAR_20, FUNC_0(VAR_15).portid, VAR_11);
 if (VAR_24 < 0)
  return VAR_24;

 return 0;

nla_put_failure:
 FUNC_9(VAR_20, VAR_21);
nlmsg_failure:
 FUNC_4(VAR_20);
 return -VAR_0;
}
