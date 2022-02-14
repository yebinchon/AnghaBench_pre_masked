
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int name; } ;
struct mpoa_client {int * old_ops; int new_ops; struct net_device* dev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct mpoa_client *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 FUNC_0("(%s)", VAR_0->dev->name);


 if (VAR_1->netdev_ops != &VAR_0->new_ops) {
  FUNC_1(" mpc already stopped, not fatal\n");
  return;
 }
 FUNC_1("\n");

 VAR_1->netdev_ops = VAR_0->old_ops;
 VAR_0->old_ops = ((void*)0);


}
