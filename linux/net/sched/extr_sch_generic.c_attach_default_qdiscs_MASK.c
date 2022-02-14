
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {int priv_flags; struct Qdisc* qdisc; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* attach ) (struct Qdisc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int *) ;
 struct netdev_queue* FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct Qdisc VAR_4 ;
 struct Qdisc* FUNC_3 (struct netdev_queue*,int *,int ,int *) ;
 int FUNC_4 (struct Qdisc*,int) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct netdev_queue *VAR_6;
 struct Qdisc *VAR_7;

 VAR_6 = FUNC_1(VAR_5, 0);

 if (!FUNC_2(VAR_5) ||
     VAR_5->priv_flags & VAR_0) {
  FUNC_0(VAR_5, VAR_2, ((void*)0));
  VAR_5->qdisc = VAR_6->qdisc_sleeping;
  FUNC_5(VAR_5->qdisc);
 } else {
  VAR_7 = FUNC_3(VAR_6, &VAR_3, VAR_1, ((void*)0));
  if (VAR_7) {
   VAR_5->qdisc = VAR_7;
   VAR_7->ops->attach(VAR_7);
  }
 }




}
