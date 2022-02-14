
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int * qdisc_sleeping; int qdisc; } ;
struct net_device {int ingress_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct netdev_queue* FUNC_1 (struct net_device*) ;
 struct netdev_queue* FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*,struct netdev_queue*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct netdev_queue*) ;

struct netdev_queue *FUNC_5(struct net_device *VAR_2)
{
 struct netdev_queue *VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
