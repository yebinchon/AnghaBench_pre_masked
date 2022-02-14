
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int seq; } ;
struct TYPE_5__ {TYPE_1__ ip6addrlbl_table; } ;
struct net {TYPE_2__ ipv6; } ;
struct ip6addrlbl_entry {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrlblmsg {scalar_t__ ifal_family; int ifal_prefixlen; scalar_t__ ifal_index; } ;
struct TYPE_6__ {int portid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct ip6addrlbl_entry* FUNC_2 (struct net*,struct in6_addr*,int ,scalar_t__) ;
 int FUNC_3 (struct net*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct ip6addrlbl_entry*,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_7 (struct in6_addr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct in6_addr* FUNC_9 (struct nlattr*) ;
 struct ifaddrlblmsg* FUNC_10 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10,
     struct netlink_ext_ack *VAR_11)
{
 struct net *VAR_12 = FUNC_15(VAR_9->sk);
 struct ifaddrlblmsg *VAR_13;
 struct nlattr *VAR_14[VAR_7+1];
 struct in6_addr *VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;
 struct ip6addrlbl_entry *VAR_18;
 struct sk_buff *VAR_19;

 VAR_17 = FUNC_6(VAR_9, VAR_10, VAR_14, VAR_11);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_13 = FUNC_10(VAR_10);

 if (VAR_13->ifal_family != VAR_0 ||
     VAR_13->ifal_prefixlen != 128)
  return -VAR_1;

 if (VAR_13->ifal_index &&
     !FUNC_3(VAR_12, VAR_13->ifal_index))
  return -VAR_1;

 if (!VAR_14[VAR_6])
  return -VAR_1;
 VAR_15 = FUNC_9(VAR_14[VAR_6]);

 VAR_19 = FUNC_11(FUNC_5(), VAR_5);
 if (!VAR_19)
  return -VAR_3;

 VAR_17 = -VAR_4;

 FUNC_12();
 VAR_18 = FUNC_2(VAR_12, VAR_15, FUNC_7(VAR_15), VAR_13->ifal_index);
 VAR_16 = VAR_12->ipv6.ip6addrlbl_table.seq;
 if (VAR_18)
  VAR_17 = FUNC_4(VAR_19, VAR_18, VAR_16,
          FUNC_0(VAR_9).portid,
          VAR_10->nlmsg_seq,
          VAR_8, 0);
 FUNC_13();

 if (VAR_17 < 0) {
  FUNC_1(VAR_17 == -VAR_2);
  FUNC_8(VAR_19);
 } else {
  VAR_17 = FUNC_14(VAR_19, VAR_12, FUNC_0(VAR_9).portid);
 }
 return VAR_17;
}
