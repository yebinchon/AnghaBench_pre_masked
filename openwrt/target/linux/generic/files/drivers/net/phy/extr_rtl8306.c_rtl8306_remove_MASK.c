
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dev; } ;
struct phy_device {struct rtl_priv* priv; } ;


 int FUNC_0 (struct rtl_priv*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct phy_device *VAR_0)
{
 struct rtl_priv *VAR_1 = VAR_0->priv;
 FUNC_1(&VAR_1->dev);
 FUNC_0(VAR_1);
}
