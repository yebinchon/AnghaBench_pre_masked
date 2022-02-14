
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {int ifa_prefixlen; int ifa_index; int ifa_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct in6_addr* FUNC_0 (struct nlattr*,struct nlattr*,struct in6_addr**) ;
 int VAR_6 ;
 int FUNC_1 (struct net*,int ,int ,struct in6_addr*,int ) ;
 int FUNC_2 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_7, struct nlmsghdr *VAR_8,
    struct netlink_ext_ack *VAR_9)
{
 struct net *VAR_10 = FUNC_5(VAR_7->sk);
 struct ifaddrmsg *VAR_11;
 struct nlattr *VAR_12[VAR_5+1];
 struct in6_addr *VAR_13, *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_4(VAR_8, sizeof(*VAR_11), VAR_12, VAR_5,
         VAR_6, VAR_9);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_11 = FUNC_3(VAR_8);
 VAR_13 = FUNC_0(VAR_12[VAR_1], VAR_12[VAR_4], &VAR_14);
 if (!VAR_13)
  return -VAR_0;

 VAR_15 = VAR_12[VAR_2] ? FUNC_2(VAR_12[VAR_2]) : VAR_11->ifa_flags;


 VAR_15 &= VAR_3;

 return FUNC_1(VAR_10, VAR_11->ifa_index, VAR_15, VAR_13,
         VAR_11->ifa_prefixlen);
}
