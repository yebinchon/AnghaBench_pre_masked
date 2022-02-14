
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock_diag_req {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_dump_control {int done; int dump; int start; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_6,
           struct nlmsghdr *VAR_7)
{
 int VAR_8 = sizeof(struct tipc_sock_diag_req);
 struct net *VAR_9 = FUNC_2(VAR_6->sk);

 if (FUNC_1(VAR_7) < VAR_8)
  return -VAR_0;

 if (VAR_7->nlmsg_flags & VAR_2) {
  struct netlink_dump_control VAR_10 = {
   .start = VAR_5,
   .dump = VAR_3,
   .done = VAR_4,
  };
  FUNC_0(VAR_9->diag_nlsk, VAR_6, VAR_7, &VAR_10);
  return 0;
 }
 return -VAR_1;
}
