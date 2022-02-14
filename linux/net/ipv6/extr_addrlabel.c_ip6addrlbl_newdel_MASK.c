
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrlblmsg {scalar_t__ ifal_family; int ifal_prefixlen; int ifal_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (struct net*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct net*,struct in6_addr*,int,int ,scalar_t__,int) ;
 int FUNC_2 (struct net*,struct in6_addr*,int,int ) ;
 struct in6_addr* FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 struct ifaddrlblmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10,
        struct netlink_ext_ack *VAR_11)
{
 struct net *VAR_12 = FUNC_7(VAR_9->sk);
 struct ifaddrlblmsg *VAR_13;
 struct nlattr *VAR_14[VAR_5+1];
 struct in6_addr *VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;

 VAR_17 = FUNC_6(VAR_10, sizeof(*VAR_13), VAR_14, VAR_5,
         VAR_8, VAR_11);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_13 = FUNC_5(VAR_10);

 if (VAR_13->ifal_family != VAR_0 ||
     VAR_13->ifal_prefixlen > 128)
  return -VAR_1;

 if (!VAR_14[VAR_3])
  return -VAR_1;
 VAR_15 = FUNC_3(VAR_14[VAR_3]);

 if (!VAR_14[VAR_4])
  return -VAR_1;
 VAR_16 = FUNC_4(VAR_14[VAR_4]);
 if (VAR_16 == VAR_6)
  return -VAR_1;

 switch (VAR_10->nlmsg_type) {
 case 128:
  if (VAR_13->ifal_index &&
      !FUNC_0(VAR_12, VAR_13->ifal_index))
   return -VAR_1;

  VAR_17 = FUNC_1(VAR_12, VAR_15, VAR_13->ifal_prefixlen,
         VAR_13->ifal_index, VAR_16,
         VAR_10->nlmsg_flags & VAR_7);
  break;
 case 129:
  VAR_17 = FUNC_2(VAR_12, VAR_15, VAR_13->ifal_prefixlen,
         VAR_13->ifal_index);
  break;
 default:
  VAR_17 = -VAR_2;
 }
 return VAR_17;
}
