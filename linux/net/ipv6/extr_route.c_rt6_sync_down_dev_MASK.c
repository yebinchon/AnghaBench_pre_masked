
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ skip_notify_on_dev_down; } ;
struct TYPE_6__ {TYPE_2__ sysctl; } ;
struct net {TYPE_3__ ipv6; } ;
struct TYPE_4__ {unsigned long event; } ;
struct arg_netdev_event {TYPE_1__ member_1; struct net_device* dev; } ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net*,int ,struct arg_netdev_event*) ;
 int FUNC_2 (struct net*,int ,struct arg_netdev_event*) ;
 int VAR_0 ;

void FUNC_3(struct net_device *VAR_1, unsigned long VAR_2)
{
 struct arg_netdev_event VAR_3 = {
  .dev = VAR_1,
  {
   .event = VAR_2,
  },
 };
 struct net *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->ipv6.sysctl.skip_notify_on_dev_down)
  FUNC_2(VAR_4, VAR_0, &VAR_3);
 else
  FUNC_1(VAR_4, VAR_0, &VAR_3);
}
