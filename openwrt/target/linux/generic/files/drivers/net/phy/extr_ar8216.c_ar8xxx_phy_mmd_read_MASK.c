
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int mdio_lock; int (* read ) (struct mii_bus*,int,int ) ;} ;
struct ar8xxx_priv {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_bus*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mii_bus*,int,int ) ;

u16
FUNC_4(struct ar8xxx_priv *VAR_1, int VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct mii_bus *VAR_5 = VAR_1->mii_bus;
 u16 VAR_6;

 FUNC_1(&VAR_5->mdio_lock);
 FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
 VAR_6 = VAR_5->read(VAR_5, VAR_2, VAR_0);
 FUNC_2(&VAR_5->mdio_lock);

 return VAR_6;
}
