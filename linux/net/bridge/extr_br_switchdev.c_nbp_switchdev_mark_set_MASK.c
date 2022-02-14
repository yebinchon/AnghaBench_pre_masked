
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int dummy; } ;
struct net_bridge_port {int dev; int br; int offload_fwd_mark; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct netdev_phys_item_id*,int) ;

int FUNC_3(struct net_bridge_port *VAR_1)
{
 struct netdev_phys_item_id VAR_2 = { };
 int VAR_3;

 FUNC_0();

 VAR_3 = FUNC_2(VAR_1->dev, &VAR_2, 1);
 if (VAR_3) {
  if (VAR_3 == -VAR_0)
   return 0;
  return VAR_3;
 }

 VAR_1->offload_fwd_mark = FUNC_1(VAR_1->br, VAR_1->dev);

 return 0;
}
