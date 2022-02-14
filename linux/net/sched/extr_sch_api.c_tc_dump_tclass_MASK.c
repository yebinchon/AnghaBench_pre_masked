
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_ifindex; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; int nlh; } ;
struct netdev_queue {int qdisc_sleeping; } ;
struct net_device {int qdisc; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int ) ;
 struct netdev_queue* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct tcmsg* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct net* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct sk_buff*,struct tcmsg*,struct netlink_callback*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, struct netlink_callback *VAR_1)
{
 struct tcmsg *VAR_2 = FUNC_3(VAR_1->nlh);
 struct net *VAR_3 = FUNC_5(VAR_0->sk);
 struct netdev_queue *VAR_4;
 struct net_device *VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_4(VAR_1->nlh) < sizeof(*VAR_2))
  return 0;
 VAR_5 = FUNC_0(VAR_3, VAR_2->tcm_ifindex);
 if (!VAR_5)
  return 0;

 VAR_7 = VAR_1->args[0];
 VAR_6 = 0;

 if (FUNC_6(VAR_5->qdisc, VAR_0, VAR_2, VAR_1, &VAR_6, VAR_7) < 0)
  goto done;

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 &&
     FUNC_6(VAR_4->qdisc_sleeping, VAR_0, VAR_2, VAR_1,
    &VAR_6, VAR_7) < 0)
  goto done;

done:
 VAR_1->args[0] = VAR_6;

 FUNC_2(VAR_5);
 return VAR_0->len;
}
