
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int mdio_lock; int (* read ) (struct mii_bus*,int,int ) ;int (* write ) (struct mii_bus*,int,int ,int ) ;} ;
struct ar8xxx_priv {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mii_bus*,int,int ,int ) ;
 int FUNC_3 (struct mii_bus*,int,int ) ;

void
FUNC_4(struct ar8xxx_priv *VAR_2, int VAR_3,
           u16 VAR_4, u16 *VAR_5)
{
       struct mii_bus *VAR_6 = VAR_2->mii_bus;

       FUNC_0(&VAR_6->mdio_lock);
       VAR_6->write(VAR_6, VAR_3, VAR_0, VAR_4);
       *VAR_5 = VAR_6->read(VAR_6, VAR_3, VAR_1);
       FUNC_1(&VAR_6->mdio_lock);
}
