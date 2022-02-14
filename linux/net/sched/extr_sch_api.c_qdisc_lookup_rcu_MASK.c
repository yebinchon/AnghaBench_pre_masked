
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netdev_queue {int qdisc_sleeping; } ;
struct net_device {int qdisc; } ;
struct Qdisc {int dummy; } ;


 struct netdev_queue* FUNC_0 (struct net_device*) ;
 struct Qdisc* FUNC_1 (int ,int ) ;

struct Qdisc *FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct netdev_queue *VAR_2;
 struct Qdisc *VAR_3;

 if (!VAR_1)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_0->qdisc, VAR_1);
 if (VAR_3)
  goto out;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2->qdisc_sleeping, VAR_1);
out:
 return VAR_3;
}
