
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct TYPE_4__ {int stat; } ;
struct net {TYPE_1__ ct; } ;
struct ip_conntrack_stat {int dummy; } ;
struct TYPE_6__ {int portid; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 TYPE_3__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int,struct ip_conntrack_stat const*) ;
 int VAR_0 ;
 struct ip_conntrack_stat* FUNC_3 (int ,int) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 int VAR_3;
 struct net *VAR_4 = FUNC_4(VAR_1->sk);

 if (VAR_2->args[0] == VAR_0)
  return 0;

 for (VAR_3 = VAR_2->args[0]; VAR_3 < VAR_0; VAR_3++) {
  const struct ip_conntrack_stat *VAR_5;

  if (!FUNC_1(VAR_3))
   continue;

  VAR_5 = FUNC_3(VAR_4->ct.stat, VAR_3);
  if (FUNC_2(VAR_1, FUNC_0(VAR_2->skb).portid,
       VAR_2->nlh->nlmsg_seq,
       VAR_3, VAR_5) < 0)
   break;
 }
 VAR_2->args[0] = VAR_3;

 return VAR_1->len;
}
