
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct Qdisc {int flags; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* ndo_setup_tc ) (struct net_device*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct net_device*,int,void*) ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct Qdisc *VAR_2, enum tc_setup_type VAR_3,
         void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_2->flags &= ~VAR_1;
 if (!FUNC_2(VAR_5) || !VAR_5->netdev_ops->ndo_setup_tc)
  return 0;

 VAR_6 = VAR_5->netdev_ops->ndo_setup_tc(VAR_5, VAR_3, VAR_4);
 if (VAR_6 == -VAR_0)
  return 0;

 if (!VAR_6)
  VAR_2->flags |= VAR_1;

 return VAR_6;
}
