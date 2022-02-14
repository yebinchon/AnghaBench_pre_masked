
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct packet_diag_req {scalar_t__ sdiag_protocol; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_dump_control {int dump; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 struct packet_diag_req* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct nlmsghdr*) ;
 int VAR_3 ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5)
{
 int VAR_6 = sizeof(struct packet_diag_req);
 struct net *VAR_7 = FUNC_3(VAR_4->sk);
 struct packet_diag_req *VAR_8;

 if (FUNC_2(VAR_5) < VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5);

 if (VAR_8->sdiag_protocol)
  return -VAR_0;

 if (VAR_5->nlmsg_flags & VAR_2) {
  struct netlink_dump_control VAR_9 = {
   .dump = VAR_3,
  };
  return FUNC_0(VAR_7->diag_nlsk, VAR_4, VAR_5, &VAR_9);
 } else
  return -VAR_1;
}
