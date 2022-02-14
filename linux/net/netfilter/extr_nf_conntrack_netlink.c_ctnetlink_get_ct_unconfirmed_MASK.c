
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_4, struct sock *VAR_5,
     struct sk_buff *VAR_6,
     const struct nlmsghdr *VAR_7,
     const struct nlattr * const VAR_8[],
     struct netlink_ext_ack *VAR_9)
{
 if (VAR_7->nlmsg_flags & VAR_1) {
  struct netlink_dump_control VAR_10 = {
   .dump = VAR_3,
   .done = VAR_2,
  };
  return FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_10);
 }

 return -VAR_0;
}
