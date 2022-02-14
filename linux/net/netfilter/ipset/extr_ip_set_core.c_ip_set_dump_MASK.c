
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlattr const* const*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5,
         const struct nlmsghdr *VAR_6,
         const struct nlattr * const VAR_7[],
         struct netlink_ext_ack *VAR_8)
{
 if (FUNC_2(FUNC_1(VAR_7)))
  return -VAR_0;

 {
  struct netlink_dump_control VAR_9 = {
   .dump = VAR_2,
   .done = VAR_1,
  };
  return FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9);
 }
}
