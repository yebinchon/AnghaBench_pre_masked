
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_dump_control {int done; int dump; } ;
struct netlink_diag_req {int dummy; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6)
{
 int VAR_7 = sizeof(struct netlink_diag_req);
 struct net *VAR_8 = FUNC_2(VAR_5->sk);

 if (FUNC_1(VAR_6) < VAR_7)
  return -VAR_0;

 if (VAR_6->nlmsg_flags & VAR_2) {
  struct netlink_dump_control VAR_9 = {
   .dump = VAR_3,
   .done = VAR_4,
  };
  return FUNC_0(VAR_8->diag_nlsk, VAR_5, VAR_6, &VAR_9);
 } else
  return -VAR_1;
}
