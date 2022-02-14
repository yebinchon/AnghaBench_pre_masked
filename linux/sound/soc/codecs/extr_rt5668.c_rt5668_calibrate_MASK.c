
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5668_priv {int calibrate_mutex; int regmap; } ;


 int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct rt5668_priv *VAR_21)
{
 int VAR_22, VAR_23;

 FUNC_0(&VAR_21->calibrate_mutex);

 FUNC_5(VAR_21->regmap);
 FUNC_4(VAR_21->regmap, VAR_15, 0xa2bf);
 FUNC_6(15000, 20000);
 FUNC_4(VAR_21->regmap, VAR_15, 0xf2bf);
 FUNC_4(VAR_21->regmap, VAR_14, 0x0380);
 FUNC_4(VAR_21->regmap, VAR_16, 0x8001);
 FUNC_4(VAR_21->regmap, VAR_20, 0x0000);
 FUNC_4(VAR_21->regmap, VAR_19, 0x2080);
 FUNC_4(VAR_21->regmap, VAR_18, 0x4040);
 FUNC_4(VAR_21->regmap, VAR_5, 0x0069);
 FUNC_4(VAR_21->regmap, VAR_4, 0x3000);
 FUNC_4(VAR_21->regmap, VAR_12, 0x6000);
 FUNC_4(VAR_21->regmap, VAR_11, 0x0f26);
 FUNC_4(VAR_21->regmap, VAR_2, 0x7f05);
 FUNC_4(VAR_21->regmap, VAR_18, 0x686c);
 FUNC_4(VAR_21->regmap, VAR_3, 0x0d0d);
 FUNC_4(VAR_21->regmap, VAR_9, 0x000f);
 FUNC_4(VAR_21->regmap, VAR_16, 0x8d01);
 FUNC_4(VAR_21->regmap, VAR_7, 0x0321);
 FUNC_4(VAR_21->regmap, VAR_13, 0x0004);
 FUNC_4(VAR_21->regmap, VAR_6, 0x7c00);
 FUNC_4(VAR_21->regmap, VAR_8, 0x06a1);
 FUNC_4(VAR_21->regmap, VAR_1, 0x0311);
 FUNC_4(VAR_21->regmap, VAR_17, 0x0000);
 FUNC_4(VAR_21->regmap, VAR_0, 0x3320);

 FUNC_4(VAR_21->regmap, VAR_6, 0xfc00);

 for (VAR_23 = 0; VAR_23 < 60; VAR_23++) {
  FUNC_3(VAR_21->regmap, VAR_10, &VAR_22);
  if (!(VAR_22 & 0x8000))
   break;

  FUNC_6(10000, 10005);
 }

 if (VAR_23 >= 60)
  FUNC_2("HP Calibration Failure\n");


 FUNC_4(VAR_21->regmap, VAR_18, 0xc0c4);
 FUNC_4(VAR_21->regmap, VAR_16, 0x0000);

 FUNC_1(&VAR_21->calibrate_mutex);

}
