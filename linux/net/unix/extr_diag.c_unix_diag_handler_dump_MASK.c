
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_diag_req {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_dump_control {int dump; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct nlmsghdr*) ;
 struct net* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4)
{
 int VAR_5 = sizeof(struct unix_diag_req);
 struct net *VAR_6 = FUNC_3(VAR_3->sk);

 if (FUNC_2(VAR_4) < VAR_5)
  return -VAR_0;

 if (VAR_4->nlmsg_flags & VAR_1) {
  struct netlink_dump_control VAR_7 = {
   .dump = VAR_2,
  };
  return FUNC_0(VAR_6->diag_nlsk, VAR_3, VAR_4, &VAR_7);
 } else
  return FUNC_4(VAR_3, VAR_4, FUNC_1(VAR_4));
}
