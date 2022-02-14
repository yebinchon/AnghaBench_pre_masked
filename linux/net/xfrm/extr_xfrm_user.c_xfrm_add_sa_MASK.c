
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_usersa_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct xfrm_state {TYPE_1__ km; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {scalar_t__ event; int portid; int seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_usersa_info* FUNC_2 (struct nlmsghdr*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct xfrm_usersa_info*,struct nlattr**) ;
 int FUNC_5 (struct xfrm_state*,int,int) ;
 int FUNC_6 (struct xfrm_state*) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_8 (struct net*,struct xfrm_usersa_info*,struct nlattr**,int*) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;
 int FUNC_11 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
  struct nlattr **VAR_6)
{
 struct net *VAR_7 = FUNC_3(VAR_4->sk);
 struct xfrm_usersa_info *VAR_8 = FUNC_2(VAR_5);
 struct xfrm_state *VAR_9;
 int VAR_10;
 struct km_event VAR_11;

 VAR_10 = FUNC_4(VAR_8, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_8(VAR_7, VAR_8, VAR_6, &VAR_10);
 if (!VAR_9)
  return VAR_10;

 FUNC_9(VAR_9);
 if (VAR_5->nlmsg_type == VAR_0)
  VAR_10 = FUNC_7(VAR_9);
 else
  VAR_10 = FUNC_11(VAR_9);

 FUNC_5(VAR_9, VAR_10 ? 0 : 1, 1);

 if (VAR_10 < 0) {
  VAR_9->km.state = VAR_1;
  FUNC_6(VAR_9);
  FUNC_0(VAR_9);
  goto out;
 }

 if (VAR_9->km.state == VAR_3)
  VAR_9->km.state = VAR_2;

 VAR_11.seq = VAR_5->nlmsg_seq;
 VAR_11.portid = VAR_5->nlmsg_pid;
 VAR_11.event = VAR_5->nlmsg_type;

 FUNC_1(VAR_9, &VAR_11);
out:
 FUNC_10(VAR_9);
 return VAR_10;
}
