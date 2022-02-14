
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int mtu; } ;
struct netdev_notifier_info_ext {TYPE_1__ ext; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (void*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_3,
      unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_2(VAR_5);
 struct netdev_notifier_info_ext *VAR_7;

 switch (VAR_4) {
 case 129:
 case 128:
  FUNC_3(VAR_6);
  break;
 case 131:
  if (!(FUNC_0(VAR_6) & (VAR_1 | VAR_0)))
   FUNC_3(VAR_6);
  break;
 case 130:
  VAR_7 = VAR_5;
  FUNC_4(VAR_6, VAR_7->ext.mtu);
  FUNC_5(FUNC_1(VAR_6));
  break;
 }
 return VAR_2;
}
