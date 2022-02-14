
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {int mtkaif_protocol; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct mt6358_priv *VAR_2)
{
 switch (VAR_2->mtkaif_protocol) {
 case 128:

  FUNC_0(VAR_2->regmap,
       VAR_0,
       0xffff, 0x0010);

  FUNC_0(VAR_2->regmap,
       VAR_1,
       0xff00, 0x3800);
  FUNC_0(VAR_2->regmap,
       VAR_1,
       0xff00, 0x3900);
  break;
 case 129:

  FUNC_0(VAR_2->regmap,
       VAR_0,
       0xffff, 0x0010);

  FUNC_0(VAR_2->regmap,
       VAR_1,
       0xff00, 0x3100);
  break;
 case 130:
 default:

  FUNC_0(VAR_2->regmap,
       VAR_0,
       0xffff, 0x0000);

  FUNC_0(VAR_2->regmap,
       VAR_1,
       0xff00, 0x3100);
  break;
 }
 return 0;
}
