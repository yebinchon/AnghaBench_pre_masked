
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {int* ana_gain; int regmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct mt6358_priv*,int ,int) ;
 int FUNC_1 (struct mt6358_priv*,int) ;
 int FUNC_2 (struct mt6358_priv*,int) ;
 int FUNC_3 (struct mt6358_priv*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct mt6358_priv *VAR_29)
{

 FUNC_2(VAR_29, 1);

 FUNC_4(VAR_29->regmap, VAR_15,
      0x1 << 6, 0x1 << 6);


 FUNC_5(VAR_29->regmap, VAR_14, 0x4000);


 FUNC_5(VAR_29->regmap, VAR_24, VAR_4);


 FUNC_5(VAR_29->regmap, VAR_19, 0x0001);

 FUNC_5(VAR_29->regmap, VAR_20, 0x002c);

 FUNC_5(VAR_29->regmap, VAR_18, 0x0001);

 FUNC_5(VAR_29->regmap, VAR_22, 0x0003);

 FUNC_5(VAR_29->regmap, VAR_21, 0x0000);
 FUNC_6(250, 270);


 FUNC_4(VAR_29->regmap, VAR_12,
      0x1055, 0x1055);

 FUNC_5(VAR_29->regmap, VAR_13, 0x0001);
 FUNC_6(100, 120);


 FUNC_3(VAR_29);


 FUNC_5(VAR_29->regmap, VAR_6, 0x3000);


 FUNC_5(VAR_29->regmap, VAR_10, 0x0055);


 FUNC_5(VAR_29->regmap, VAR_9, 0x4900);


 FUNC_5(VAR_29->regmap, VAR_10, 0x0055);

 FUNC_5(VAR_29->regmap, VAR_14, 0x4033);


 FUNC_2(VAR_29, 0);


 FUNC_5(VAR_29->regmap, VAR_6, 0x30c0);

 FUNC_5(VAR_29->regmap, VAR_6, 0x30f0);

 FUNC_5(VAR_29->regmap, VAR_17, 0x0200);



 FUNC_5(VAR_29->regmap, VAR_8, 0x0000);


 FUNC_5(VAR_29->regmap, VAR_7, 0x0003);

 FUNC_1(VAR_29, 1);


 FUNC_5(VAR_29->regmap, VAR_23, VAR_5);

 FUNC_0(VAR_29,
       VAR_3,
       VAR_29->ana_gain[VAR_0]);


 FUNC_5(VAR_29->regmap, VAR_16, 0x0110);

 FUNC_5(VAR_29->regmap, VAR_16, 0x0112);

 FUNC_5(VAR_29->regmap, VAR_16, 0x0113);


 FUNC_4(VAR_29->regmap, VAR_23,
      VAR_25,
      VAR_29->ana_gain[VAR_1] <<
      VAR_26);
 FUNC_4(VAR_29->regmap, VAR_23,
      VAR_27,
      VAR_29->ana_gain[VAR_2] <<
      VAR_28);


 FUNC_4(VAR_29->regmap, VAR_11, 0x1, 0x1);

 FUNC_5(VAR_29->regmap, VAR_6, 0x30f9);

 FUNC_5(VAR_29->regmap, VAR_17, 0x0201);

 FUNC_5(VAR_29->regmap, VAR_16, 0x011b);

 FUNC_5(VAR_29->regmap, VAR_6, 0x35f9);

 return 0;
}
