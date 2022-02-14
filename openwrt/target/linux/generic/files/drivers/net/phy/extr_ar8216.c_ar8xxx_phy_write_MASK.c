
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct ar8xxx_priv* priv; } ;
struct ar8xxx_priv {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* phy_write ) (struct ar8xxx_priv*,int,int,int ) ;} ;


 int FUNC_0 (struct ar8xxx_priv*,int,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2,
   u16 VAR_3)
{
 struct ar8xxx_priv *VAR_4 = VAR_0->priv;
 return VAR_4->chip->phy_write(VAR_4, VAR_1, VAR_2, VAR_3);
}
