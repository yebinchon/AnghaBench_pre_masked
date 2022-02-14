
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_assign_type; int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(struct net_device *VAR_2,
         struct net_device *VAR_3)
{
 if (VAR_2->addr_assign_type != VAR_1)
  return 0;

 FUNC_1(VAR_2->dev_addr, VAR_3->dev_addr);
 FUNC_0(VAR_0, VAR_2);
 return 1;
}
