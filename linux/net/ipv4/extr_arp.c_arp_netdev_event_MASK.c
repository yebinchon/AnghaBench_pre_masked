
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netdev_notifier_change_info {int flags_changed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *,struct net_device*) ;
 struct net_device* FUNC_3 (void*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_3, unsigned long VAR_4,
       void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_3(VAR_5);
 struct netdev_notifier_change_info *VAR_7;

 switch (VAR_4) {
 case 128:
  FUNC_2(&VAR_2, VAR_6);
  FUNC_5(FUNC_0(VAR_6));
  break;
 case 129:
  VAR_7 = VAR_5;
  if (VAR_7->flags_changed & VAR_0)
   FUNC_2(&VAR_2, VAR_6);
  if (!FUNC_4(VAR_6))
   FUNC_1(&VAR_2, VAR_6);
  break;
 default:
  break;
 }

 return VAR_1;
}
