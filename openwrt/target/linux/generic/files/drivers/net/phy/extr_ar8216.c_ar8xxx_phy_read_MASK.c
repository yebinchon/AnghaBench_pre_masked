
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct ar8xxx_priv* priv; } ;
struct ar8xxx_priv {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* phy_read ) (struct ar8xxx_priv*,int,int) ;} ;


 int FUNC_0 (struct ar8xxx_priv*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct ar8xxx_priv *VAR_3 = VAR_0->priv;
 return VAR_3->chip->phy_read(VAR_3, VAR_1, VAR_2);
}
