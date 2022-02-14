
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_dump_control {int dump; } ;
struct net {int diag_nlsk; } ;
struct inet_diag_req_v2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nlattr*,struct sk_buff*) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct nlmsghdr*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 scalar_t__ FUNC_3 (struct nlmsghdr*,int) ;
 int FUNC_4 (struct nlmsghdr*) ;
 struct nlattr* FUNC_5 (struct nlmsghdr*,int,int ) ;
 int FUNC_6 (struct nlmsghdr*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6)
{
 int VAR_7 = sizeof(struct inet_diag_req_v2);
 struct net *VAR_8 = FUNC_7(VAR_5->sk);

 if (FUNC_6(VAR_6) < VAR_7)
  return -VAR_0;

 if (VAR_6->nlmsg_type == VAR_3 &&
     VAR_6->nlmsg_flags & VAR_2) {
  if (FUNC_3(VAR_6, VAR_7)) {
   struct nlattr *VAR_9;
   int VAR_10;

   VAR_9 = FUNC_5(VAR_6, VAR_7,
            VAR_1);
   VAR_10 = FUNC_0(VAR_9, VAR_5);
   if (VAR_10)
    return VAR_10;
  }
  {
   struct netlink_dump_control VAR_11 = {
    .dump = VAR_4,
   };
   return FUNC_2(VAR_8->diag_nlsk, VAR_5, VAR_6, &VAR_11);
  }
 }

 return FUNC_1(VAR_6->nlmsg_type, VAR_5, VAR_6, FUNC_4(VAR_6));
}
