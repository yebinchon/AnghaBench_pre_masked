
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int wanted_features; int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 VAR_1->wanted_features &= ~VAR_0;
 FUNC_1(VAR_1);

 if (FUNC_2(VAR_1->features & VAR_0))
  FUNC_0(VAR_1, "failed to disable GRO_HW!\n");
}
