
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_userpolicy_info {int dir; } ;
struct xfrm_policy {int security; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {scalar_t__ event; int portid; int seq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfrm_policy*) ;
 int FUNC_1 (struct xfrm_policy*,int ,struct km_event*) ;
 struct xfrm_userpolicy_info* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (int ) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_userpolicy_info*) ;
 int FUNC_6 (struct nlattr**) ;
 int FUNC_7 (struct xfrm_policy*,int,int) ;
 int FUNC_8 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_9 (struct net*,struct xfrm_userpolicy_info*,struct nlattr**,int*) ;
 int FUNC_10 (int ,struct xfrm_policy*,int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_4(VAR_1->sk);
 struct xfrm_userpolicy_info *VAR_5 = FUNC_2(VAR_2);
 struct xfrm_policy *VAR_6;
 struct km_event VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_9(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (!VAR_6)
  return VAR_8;





 VAR_9 = VAR_2->nlmsg_type == VAR_0;
 VAR_8 = FUNC_10(VAR_5->dir, VAR_6, VAR_9);
 FUNC_7(VAR_6, VAR_8 ? 0 : 1, 1);

 if (VAR_8) {
  FUNC_3(VAR_6->security);
  FUNC_0(VAR_6);
  return VAR_8;
 }

 VAR_7.event = VAR_2->nlmsg_type;
 VAR_7.seq = VAR_2->nlmsg_seq;
 VAR_7.portid = VAR_2->nlmsg_pid;
 FUNC_1(VAR_6, VAR_5->dir, &VAR_7);

 FUNC_8(VAR_6);

 return 0;
}
