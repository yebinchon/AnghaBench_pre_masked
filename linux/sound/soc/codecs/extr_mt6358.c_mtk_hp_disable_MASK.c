
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {int regmap; int * ana_gain; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mt6358_priv*,int ,int ) ;
 int FUNC_1 (struct mt6358_priv*,int) ;
 int FUNC_2 (struct mt6358_priv*,int) ;
 int FUNC_3 (struct mt6358_priv*,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mt6358_priv *VAR_12)
{

 FUNC_3(VAR_12, 1);


 FUNC_4(VAR_12->regmap, VAR_2,
      0x0f00, 0x0000);


 FUNC_4(VAR_12->regmap, VAR_10,
      0x0001, 0x0000);


 FUNC_4(VAR_12->regmap, VAR_2,
      0x000f, 0x0000);


 FUNC_4(VAR_12->regmap, VAR_5, 0x1, 0x0);


 FUNC_5(VAR_12->regmap, VAR_3, 0x3fc3);

 FUNC_5(VAR_12->regmap, VAR_3, 0x3fcf);


 FUNC_0(VAR_12,
       VAR_12->ana_gain[VAR_0],
       VAR_1);


 FUNC_5(VAR_12->regmap, VAR_3, 0x3fff);


 FUNC_1(VAR_12, 0);


 FUNC_2(VAR_12, 0);


 FUNC_4(VAR_12->regmap, VAR_3, 0x3, 0x0);


 FUNC_5(VAR_12->regmap, VAR_10, 0x0e00);


 FUNC_5(VAR_12->regmap, VAR_10, 0x0c00);


 FUNC_4(VAR_12->regmap, VAR_3,
      0x3 << 6, 0x0);


 FUNC_4(VAR_12->regmap, VAR_2,
      0x3 << 4, 0x0);


 FUNC_4(VAR_12->regmap, VAR_2,
      0x3 << 6, 0x0);


 FUNC_5(VAR_12->regmap, VAR_10, 0x0000);


 FUNC_4(VAR_12->regmap, VAR_3,
      0x3 << 4, 0x0);


 FUNC_4(VAR_12->regmap, VAR_3,
      0x3 << 2, 0x0);


 FUNC_4(VAR_12->regmap, VAR_4,
      0x1 << 8, 0x1 << 8);


 FUNC_4(VAR_12->regmap, VAR_7, 0x1, 0x0);

 FUNC_4(VAR_12->regmap, VAR_6,
      0x1055, 0x0);

 FUNC_4(VAR_12->regmap, VAR_11,
      0x1, 0x1);


 FUNC_4(VAR_12->regmap, VAR_8,
      0x1 << 14, 0x0);


 FUNC_4(VAR_12->regmap, VAR_9,
      0x1 << 6, 0x0);

 FUNC_3(VAR_12, 0);

 return 0;
}
