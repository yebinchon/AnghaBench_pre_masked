
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct km_event {struct net* net; int portid; int seq; int event; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nlattr**) ;
 int FUNC_1 (int *,int ,struct km_event*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct net*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_2->sk);
 struct km_event VAR_6;
 u8 VAR_7 = VAR_1;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_7, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_5, VAR_7, 1);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   return 0;
  return VAR_8;
 }

 VAR_6.data.type = VAR_7;
 VAR_6.event = VAR_3->nlmsg_type;
 VAR_6.seq = VAR_3->nlmsg_seq;
 VAR_6.portid = VAR_3->nlmsg_pid;
 VAR_6.net = VAR_5;
 FUNC_1(((void*)0), 0, &VAR_6);
 return 0;
}
