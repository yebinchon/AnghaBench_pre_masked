
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_usersa_flush {int proto; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int proto; } ;
struct km_event {struct net* net; int portid; int seq; int event; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct km_event*) ;
 struct xfrm_usersa_flush* FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct net*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_1->sk);
 struct km_event VAR_5;
 struct xfrm_usersa_flush *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_6->proto, 1, 0);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   return 0;
  return VAR_7;
 }
 VAR_5.data.proto = VAR_6->proto;
 VAR_5.event = VAR_2->nlmsg_type;
 VAR_5.seq = VAR_2->nlmsg_seq;
 VAR_5.portid = VAR_2->nlmsg_pid;
 VAR_5.net = VAR_4;
 FUNC_0(((void*)0), &VAR_5);

 return 0;
}
