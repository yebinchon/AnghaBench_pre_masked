
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5665_priv {int calibration_done; int calibrate_mutex; int regmap; } ;


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
 int VAR_21 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct rt5665_priv *VAR_22)
{
 int VAR_23, VAR_24;

 FUNC_0(&VAR_22->calibrate_mutex);

 FUNC_3(VAR_22->regmap, 1);

 FUNC_7(VAR_22->regmap, VAR_21, 0);
 FUNC_7(VAR_22->regmap, VAR_2, 0xa602);
 FUNC_7(VAR_22->regmap, VAR_11, 0x0c26);
 FUNC_7(VAR_22->regmap, VAR_14, 0x021f);
 FUNC_7(VAR_22->regmap, VAR_17, 0x480a);
 FUNC_7(VAR_22->regmap, VAR_20, 0x083f);
 FUNC_7(VAR_22->regmap, VAR_19, 0x0180);
 FUNC_7(VAR_22->regmap, VAR_6, 0x4040);
 FUNC_7(VAR_22->regmap, VAR_12, 0x0000);
 FUNC_7(VAR_22->regmap, VAR_5, 0x0001);
 FUNC_7(VAR_22->regmap, VAR_13, 0x0380);
 FUNC_7(VAR_22->regmap, VAR_7, 0x8000);
 FUNC_7(VAR_22->regmap, VAR_0, 0x1000);
 FUNC_7(VAR_22->regmap, VAR_4, 0x3030);
 FUNC_7(VAR_22->regmap, VAR_3, 0x3c05);
 FUNC_7(VAR_22->regmap, VAR_18, 0xaa3e);
 FUNC_8(15000, 20000);
 FUNC_7(VAR_22->regmap, VAR_18, 0xfe7e);
 FUNC_7(VAR_22->regmap, VAR_9, 0x0321);

 FUNC_7(VAR_22->regmap, VAR_8, 0xfc00);
 VAR_24 = 0;
 while (1) {
  FUNC_6(VAR_22->regmap, VAR_10, &VAR_23);
  if (VAR_23 & 0x8000)
   FUNC_8(10000, 10005);
  else
   break;

  if (VAR_24 > 60) {
   FUNC_2("HP Calibration Failure\n");
   FUNC_7(VAR_22->regmap, VAR_21, 0);
   FUNC_3(VAR_22->regmap, 0);
   goto out_unlock;
  }

  VAR_24++;
 }

 FUNC_7(VAR_22->regmap, VAR_15, 0x9e24);
 VAR_24 = 0;
 while (1) {
  FUNC_6(VAR_22->regmap, VAR_16, &VAR_23);
  if (VAR_23 & 0x8000)
   FUNC_8(10000, 10005);
  else
   break;

  if (VAR_24 > 60) {
   FUNC_2("MONO Calibration Failure\n");
   FUNC_7(VAR_22->regmap, VAR_21, 0);
   FUNC_3(VAR_22->regmap, 0);
   goto out_unlock;
  }

  VAR_24++;
 }

 FUNC_7(VAR_22->regmap, VAR_21, 0);
 FUNC_3(VAR_22->regmap, 0);

 FUNC_4(VAR_22->regmap);
 FUNC_5(VAR_22->regmap);

 FUNC_7(VAR_22->regmap, VAR_2, 0xa602);
 FUNC_7(VAR_22->regmap, VAR_1, 0x0120);

out_unlock:
 VAR_22->calibration_done = 1;
 FUNC_1(&VAR_22->calibrate_mutex);
}
