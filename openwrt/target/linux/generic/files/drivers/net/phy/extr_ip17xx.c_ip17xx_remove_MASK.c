
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct ip17xx_state* priv; } ;
struct ip17xx_state {int dev; scalar_t__ registered; } ;


 int FUNC_0 (struct ip17xx_state*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_0)
{
 struct ip17xx_state *VAR_1 = VAR_0->priv;

 if (VAR_1->registered)
  FUNC_1(&VAR_1->dev);
 FUNC_0(VAR_1);
}
