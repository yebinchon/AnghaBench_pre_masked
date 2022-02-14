
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct mt6358_priv*,int ,int ) ;
 int FUNC_1 (struct mt6358_priv*,int) ;
 int FUNC_2 (struct mt6358_priv*,int) ;
 int FUNC_3 (struct mt6358_priv*,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mt6358_priv *VAR_15)
{

 FUNC_4(VAR_15->regmap, VAR_4,
      0x0f00, 0x0000);

 FUNC_4(VAR_15->regmap, VAR_11,
      0x3 << 2, 0x0000);


 FUNC_4(VAR_15->regmap, VAR_4,
      0x000f, 0x0000);


 FUNC_4(VAR_15->regmap, VAR_7, 0x1, 0x0);


 FUNC_0(VAR_15,
       VAR_15->ana_gain[VAR_0],
       VAR_1);


 FUNC_4(VAR_15->regmap, VAR_14,
      VAR_3, VAR_2);


 FUNC_2(VAR_15, 0);


 FUNC_4(VAR_15->regmap, VAR_5, 0x3, 0x0);


 FUNC_5(VAR_15->regmap, VAR_5, 0x3fc3);

 FUNC_5(VAR_15->regmap, VAR_5, 0x3fcf);


 FUNC_5(VAR_15->regmap, VAR_5, 0x3fff);


 FUNC_1(VAR_15, 0);


 FUNC_4(VAR_15->regmap, VAR_4,
      0x3 << 4, 0x0);

 FUNC_4(VAR_15->regmap, VAR_11,
      0x1, 0x0);


 FUNC_4(VAR_15->regmap, VAR_4,
      0x3 << 6, 0x0);

 FUNC_4(VAR_15->regmap, VAR_11,
      0x1 << 1, 0x0);


 FUNC_4(VAR_15->regmap, VAR_12,
      0xff << 8, 0x0000);


 FUNC_4(VAR_15->regmap, VAR_6,
      0x1 << 8, 0x1 << 8);

 FUNC_4(VAR_15->regmap, VAR_9, 0x1, 0x0);

 FUNC_4(VAR_15->regmap, VAR_8, 0x1055, 0x0);

 FUNC_4(VAR_15->regmap, VAR_13, 0x1, 0x1);


 FUNC_4(VAR_15->regmap, VAR_10,
      0x1 << 6, 0x0);

 FUNC_3(VAR_15, 0);

 return 0;
}
