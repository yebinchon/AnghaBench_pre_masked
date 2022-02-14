
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_fdb_info {int offloaded; int vid; int addr; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int ,int ,int) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,int ,int ,int) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,int ,int ,int) ;
 struct net_bridge_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 struct net_device* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_1,
         unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_5(VAR_3);
 struct net_bridge_port *VAR_5;
 struct net_bridge *VAR_6;
 struct switchdev_notifier_fdb_info *VAR_7;
 int VAR_8 = VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5)
  goto out;

 VAR_6 = VAR_5->br;

 switch (VAR_2) {
 case 130:
  VAR_7 = VAR_3;
  VAR_8 = FUNC_0(VAR_6, VAR_5, VAR_7->addr,
      VAR_7->vid, 0);
  if (VAR_8) {
   VAR_8 = FUNC_4(VAR_8);
   break;
  }
  FUNC_2(VAR_6, VAR_5, VAR_7->addr,
         VAR_7->vid, 1);
  break;
 case 129:
  VAR_7 = VAR_3;
  VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_7->addr,
      VAR_7->vid, 0);
  if (VAR_8)
   VAR_8 = FUNC_4(VAR_8);
  break;
 case 128:
  VAR_7 = VAR_3;
  FUNC_2(VAR_6, VAR_5, VAR_7->addr,
         VAR_7->vid, VAR_7->offloaded);
  break;
 }

out:
 return VAR_8;
}
