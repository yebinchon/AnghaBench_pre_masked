
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_diag_req {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_dump_control {int dump; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5)
{
 int VAR_6 = sizeof(struct vsock_diag_req);
 struct net *VAR_7 = FUNC_2(VAR_4->sk);

 if (FUNC_1(VAR_5) < VAR_6)
  return -VAR_0;

 if (VAR_5->nlmsg_flags & VAR_2) {
  struct netlink_dump_control VAR_8 = {
   .dump = VAR_3,
  };
  return FUNC_0(VAR_7->diag_nlsk, VAR_4, VAR_5, &VAR_8);
 }

 return -VAR_1;
}
