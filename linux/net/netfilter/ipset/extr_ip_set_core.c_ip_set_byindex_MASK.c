
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
struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {int name; } ;
typedef scalar_t__ ip_set_id_t ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_11 ;
 struct ip_set* FUNC_1 (struct ip_set_net*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nlattr const* const) ;
 struct ip_set_net* FUNC_3 (struct net*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct nlattr const* const*) ;
 scalar_t__ FUNC_12 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_12, struct sock *VAR_13,
     struct sk_buff *VAR_14, const struct nlmsghdr *VAR_15,
     const struct nlattr * const VAR_16[],
     struct netlink_ext_ack *VAR_17)
{
 struct ip_set_net *VAR_18 = FUNC_3(VAR_12);
 struct sk_buff *VAR_19;
 struct nlmsghdr *VAR_20;
 ip_set_id_t VAR_21 = VAR_9;
 const struct ip_set *VAR_22;
 int VAR_23 = 0;

 if (FUNC_14(FUNC_12(VAR_16) ||
       !VAR_16[VAR_4]))
  return -VAR_8;

 VAR_21 = FUNC_2(VAR_16[VAR_4]);
 if (VAR_21 >= VAR_18->ip_set_max)
  return -VAR_1;
 VAR_22 = FUNC_1(VAR_18, VAR_21);
 if (VAR_22 == ((void*)0))
  return -VAR_1;

 VAR_19 = FUNC_10(VAR_11, VAR_3);
 if (!VAR_19)
  return -VAR_2;

 VAR_20 = FUNC_13(VAR_19, FUNC_0(VAR_14).portid, VAR_15->nlmsg_seq, 0,
    VAR_7);
 if (!VAR_20)
  goto nlmsg_failure;
 if (FUNC_7(VAR_19, VAR_5, FUNC_11(VAR_16)) ||
     FUNC_6(VAR_19, VAR_6, VAR_22->name))
  goto nla_put_failure;
 FUNC_9(VAR_19, VAR_20);

 VAR_23 = FUNC_5(VAR_13, VAR_19, FUNC_0(VAR_14).portid, VAR_10);
 if (VAR_23 < 0)
  return VAR_23;

 return 0;

nla_put_failure:
 FUNC_8(VAR_19, VAR_20);
nlmsg_failure:
 FUNC_4(VAR_19);
 return -VAR_0;
}
