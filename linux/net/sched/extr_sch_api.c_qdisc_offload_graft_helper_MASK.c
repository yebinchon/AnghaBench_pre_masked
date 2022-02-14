
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct Qdisc {int flags; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* ndo_setup_tc ) (struct net_device*,int,void*) ;} ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_0 ;
 struct Qdisc VAR_1 ;
 int FUNC_1 (struct net_device*,int,void*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_2, struct Qdisc *VAR_3,
    struct Qdisc *VAR_4, struct Qdisc *VAR_5,
    enum tc_setup_type VAR_6, void *VAR_7,
    struct netlink_ext_ack *VAR_8)
{
 bool VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_2) || !VAR_2->netdev_ops->ndo_setup_tc)
  return;

 VAR_10 = VAR_2->netdev_ops->ndo_setup_tc(VAR_2, VAR_6, VAR_7);


 if (!VAR_10 || !VAR_4 || VAR_4 == &VAR_1)
  return;




 VAR_9 = VAR_4->flags & VAR_0;
 VAR_9 |= VAR_3 && VAR_3->flags & VAR_0;
 VAR_9 |= VAR_5 && VAR_5->flags & VAR_0;

 if (VAR_9)
  FUNC_0(VAR_8, "Offloading graft operation failed.");
}
