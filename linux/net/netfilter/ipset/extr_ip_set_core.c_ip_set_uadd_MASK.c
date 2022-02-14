
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct sock*,struct sk_buff*,int ,struct nlmsghdr const*,struct nlattr const* const*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1, struct sock *VAR_2,
         struct sk_buff *VAR_3, const struct nlmsghdr *VAR_4,
         const struct nlattr * const VAR_5[],
         struct netlink_ext_ack *VAR_6)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_0, VAR_4, VAR_5, VAR_6);
}
