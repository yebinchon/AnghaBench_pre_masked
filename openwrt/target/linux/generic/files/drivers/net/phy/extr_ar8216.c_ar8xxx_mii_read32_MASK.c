
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int) ;} ;
struct ar8xxx_priv {struct mii_bus* mii_bus; } ;


 int FUNC_0 (struct mii_bus*,int,int) ;
 int FUNC_1 (struct mii_bus*,int,int) ;

u32
FUNC_2(struct ar8xxx_priv *VAR_0, int VAR_1, int VAR_2)
{
 struct mii_bus *VAR_3 = VAR_0->mii_bus;
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_3->read(VAR_3, VAR_1, VAR_2);
 VAR_5 = VAR_3->read(VAR_3, VAR_1, VAR_2 + 1);

 return (VAR_5 << 16) | VAR_4;
}
