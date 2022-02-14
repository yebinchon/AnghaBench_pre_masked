
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int chip_rev; } ;


 int FUNC_0 (struct ar8xxx_priv*,int,int,int) ;
 int FUNC_1 (struct ar8xxx_priv*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_0, int VAR_1)
{
 switch (VAR_0->chip_rev) {
 case 1:

  FUNC_0(VAR_0, VAR_1, 0, 0x02ea);

  FUNC_0(VAR_0, VAR_1, 0x3d, 0x68a0);
  break;

 case 2:
  FUNC_1(VAR_0, VAR_1, 0x7, 0x3c, 0x0);

 case 4:
  FUNC_1(VAR_0, VAR_1, 0x3, 0x800d, 0x803f);
  FUNC_0(VAR_0, VAR_1, 0x3d, 0x6860);
  FUNC_0(VAR_0, VAR_1, 0x5, 0x2c46);
  FUNC_0(VAR_0, VAR_1, 0x3c, 0x6000);
  break;
 }
}
