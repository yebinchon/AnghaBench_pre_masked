
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_flags; } ;
struct netlink_dump_control {int min_dump_alloc; int dump; } ;
struct net {int diag_nlsk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int VAR_2 ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_3->sk);

 if (VAR_4->nlmsg_type == VAR_1 &&
     VAR_4->nlmsg_flags & VAR_0) {
  {
   struct netlink_dump_control VAR_6 = {
    .dump = VAR_2,
    .min_dump_alloc = FUNC_0(32768),
   };
   return FUNC_1(VAR_5->diag_nlsk, VAR_3, VAR_4, &VAR_6);
  }
 }
 return 0;
}
