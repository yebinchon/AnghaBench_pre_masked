
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int dump; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_2, struct sock *VAR_3,
      struct sk_buff *VAR_4,
      const struct nlmsghdr *VAR_5,
      const struct nlattr * const VAR_6[],
      struct netlink_ext_ack *VAR_7)
{
 if (VAR_5->nlmsg_flags & VAR_0) {
  struct netlink_dump_control VAR_8 = {
   .dump = VAR_1,
  };
  return FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8);
 }

 return 0;
}
