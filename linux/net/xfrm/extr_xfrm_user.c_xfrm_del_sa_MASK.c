
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_usersa_id {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {int event; int portid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_usersa_id* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct xfrm_state*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct xfrm_state*,int,int) ;
 int FUNC_5 (struct xfrm_state*) ;
 scalar_t__ FUNC_6 (struct xfrm_state*) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_8 (struct net*,struct xfrm_usersa_id*,struct nlattr**,int*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_3(VAR_2->sk);
 struct xfrm_state *VAR_6;
 int VAR_7 = -VAR_1;
 struct km_event VAR_8;
 struct xfrm_usersa_id *VAR_9 = FUNC_1(VAR_3);

 VAR_6 = FUNC_8(VAR_5, VAR_9, VAR_4, &VAR_7);
 if (VAR_6 == ((void*)0))
  return VAR_7;

 if ((VAR_7 = FUNC_2(VAR_6)) != 0)
  goto out;

 if (FUNC_6(VAR_6)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_5(VAR_6);

 if (VAR_7 < 0)
  goto out;

 VAR_8.seq = VAR_3->nlmsg_seq;
 VAR_8.portid = VAR_3->nlmsg_pid;
 VAR_8.event = VAR_3->nlmsg_type;
 FUNC_0(VAR_6, &VAR_8);

out:
 FUNC_4(VAR_6, VAR_7 ? 0 : 1, 1);
 FUNC_7(VAR_6);
 return VAR_7;
}
