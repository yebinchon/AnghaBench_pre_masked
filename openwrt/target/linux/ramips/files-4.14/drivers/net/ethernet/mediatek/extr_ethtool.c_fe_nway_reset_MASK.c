
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct fe_priv *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->phy_dev)
  goto out_nway_reset;

 return FUNC_0(VAR_2->phy_dev);

out_nway_reset:
 return -VAR_0;
}
