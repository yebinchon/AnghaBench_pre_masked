
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct netdev_notifier_change_info {int flags_changed; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* devconf_all; } ;
struct net {TYPE_3__ ipv6; } ;
struct TYPE_4__ {int ndisc_notify; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct TYPE_5__ {int ndisc_notify; } ;


 int VAR_0 ;





 int VAR_1 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net*,int) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*) ;
 int VAR_2 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,struct net_device*) ;
 int FUNC_6 (int *,struct net_device*) ;
 int FUNC_7 (int *,struct net_device*) ;
 struct net_device* FUNC_8 (void*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_8(VAR_5);
 struct netdev_notifier_change_info *VAR_7;
 struct net *VAR_8 = FUNC_0(VAR_6);
 struct inet6_dev *VAR_9;

 switch (VAR_4) {
 case 131:
  FUNC_6(&VAR_2, VAR_6);
  FUNC_1(0, VAR_8, 0);

 case 128:
  VAR_9 = FUNC_2(VAR_6);
  if (!VAR_9)
   break;
  if (VAR_9->cnf.ndisc_notify ||
      VAR_8->ipv6.devconf_all->ndisc_notify)
   FUNC_4(VAR_6);
  FUNC_3(VAR_9);
  break;
 case 132:
  VAR_7 = VAR_5;
  if (VAR_7->flags_changed & VAR_0)
   FUNC_6(&VAR_2, VAR_6);
  if (!FUNC_9(VAR_6))
   FUNC_5(&VAR_2, VAR_6);
  break;
 case 130:
  FUNC_7(&VAR_2, VAR_6);
  FUNC_1(0, VAR_8, 0);
  break;
 case 129:
  FUNC_4(VAR_6);
  break;
 default:
  break;
 }

 return VAR_1;
}
