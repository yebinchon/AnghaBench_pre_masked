
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5682_priv {int calibrate_mutex; int regmap; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct rt5682_priv *VAR_15)
{
 int VAR_16, VAR_17;

 FUNC_0(&VAR_15->calibrate_mutex);

 FUNC_5(VAR_15->regmap);
 FUNC_4(VAR_15->regmap, VAR_12, 0xa2af);
 FUNC_6(15000, 20000);
 FUNC_4(VAR_15->regmap, VAR_12, 0xf2af);
 FUNC_4(VAR_15->regmap, VAR_11, 0x0300);
 FUNC_4(VAR_15->regmap, VAR_4, 0x8000);
 FUNC_4(VAR_15->regmap, VAR_13, 0x0100);
 FUNC_4(VAR_15->regmap, VAR_9, 0x3800);
 FUNC_4(VAR_15->regmap, VAR_3, 0x3000);
 FUNC_4(VAR_15->regmap, VAR_1, 0x7005);
 FUNC_4(VAR_15->regmap, VAR_14, 0x686c);
 FUNC_4(VAR_15->regmap, VAR_2, 0x0d0d);
 FUNC_4(VAR_15->regmap, VAR_6, 0x0321);
 FUNC_4(VAR_15->regmap, VAR_10, 0x0004);
 FUNC_4(VAR_15->regmap, VAR_5, 0x7c00);
 FUNC_4(VAR_15->regmap, VAR_7, 0x06a1);
 FUNC_4(VAR_15->regmap, VAR_0, 0x0311);
 FUNC_4(VAR_15->regmap, VAR_5, 0x7c00);

 FUNC_4(VAR_15->regmap, VAR_5, 0xfc00);

 for (VAR_17 = 0; VAR_17 < 60; VAR_17++) {
  FUNC_3(VAR_15->regmap, VAR_8, &VAR_16);
  if (!(VAR_16 & 0x8000))
   break;

  FUNC_6(10000, 10005);
 }

 if (VAR_17 >= 60)
  FUNC_2("HP Calibration Failure\n");


 FUNC_4(VAR_15->regmap, VAR_12, 0x02af);
 FUNC_4(VAR_15->regmap, VAR_11, 0x0080);
 FUNC_4(VAR_15->regmap, VAR_4, 0x0000);
 FUNC_4(VAR_15->regmap, VAR_13, 0x0000);
 FUNC_4(VAR_15->regmap, VAR_3, 0x2000);
 FUNC_4(VAR_15->regmap, VAR_1, 0x2005);
 FUNC_4(VAR_15->regmap, VAR_14, 0xc0c4);

 FUNC_1(&VAR_15->calibrate_mutex);

}
