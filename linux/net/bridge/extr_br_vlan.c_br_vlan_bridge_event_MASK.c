
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changeupper_info {int linking; int upper_dev; } ;
struct net_device {int dummy; } ;
struct net_bridge {int default_pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct net_bridge*,int ) ;
 int FUNC_1 (struct net_bridge*,int ,int,int*,int *) ;
 int FUNC_2 (struct net_bridge*,int ) ;
 int FUNC_3 (struct net_device*,struct net_bridge*) ;
 int FUNC_4 (struct net_device*,int ,int ) ;
 struct net_bridge* FUNC_5 (struct net_device*) ;

int FUNC_6(struct net_device *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 struct netdev_notifier_changeupper_info *VAR_7;
 struct net_bridge *VAR_8 = FUNC_5(VAR_4);
 bool VAR_9;
 int VAR_10 = 0;

 switch (VAR_5) {
 case 130:
  VAR_10 = FUNC_1(VAR_8, VAR_8->default_pvid,
      VAR_1 |
      VAR_2 |
      VAR_0, &VAR_9, ((void*)0));
  break;
 case 129:
  FUNC_2(VAR_8, VAR_8->default_pvid);
  break;
 case 131:
  VAR_7 = VAR_6;
  FUNC_4(VAR_4, VAR_7->upper_dev, VAR_7->linking);
  break;

 case 132:
 case 128:
  if (!FUNC_0(VAR_8, VAR_3))
   break;
  FUNC_3(VAR_4, VAR_8);
  break;
 }

 return VAR_10;
}
