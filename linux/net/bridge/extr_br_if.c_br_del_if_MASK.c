
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge*) ;
 struct net_bridge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_bridge_port*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct net_bridge *VAR_2, struct net_device *VAR_3)
{
 struct net_bridge_port *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4 || VAR_4->br != VAR_2)
  return -VAR_0;





 FUNC_5(VAR_4);

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);

 FUNC_7(&VAR_2->lock);
 VAR_5 = FUNC_3(VAR_2);
 FUNC_8(&VAR_2->lock);

 if (VAR_5)
  FUNC_4(VAR_1, VAR_2->dev);

 FUNC_6(VAR_2->dev);

 return 0;
}
