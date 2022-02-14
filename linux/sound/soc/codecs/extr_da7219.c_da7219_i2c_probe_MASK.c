
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct da7219_priv {int regmap; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,char*,int) ;
 struct da7219_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct da7219_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_18,
       const struct i2c_device_id *VAR_19)
{
 struct da7219_priv *VAR_20;
 unsigned int VAR_21, VAR_22;
 int VAR_23, VAR_24;

 VAR_20 = FUNC_3(&VAR_18->dev, sizeof(struct da7219_priv),
         VAR_14);
 if (!VAR_20)
  return -VAR_13;

 FUNC_6(VAR_18, VAR_20);

 VAR_20->regmap = FUNC_4(VAR_18, &VAR_16);
 if (FUNC_0(VAR_20->regmap)) {
  VAR_24 = FUNC_1(VAR_20->regmap);
  FUNC_2(&VAR_18->dev, "regmap_init() failed: %d\n", VAR_24);
  return VAR_24;
 }

 FUNC_8(VAR_20->regmap, 1);


 FUNC_9(VAR_20->regmap, VAR_6, &VAR_21);
 if (VAR_21) {
  FUNC_10(VAR_20->regmap, VAR_4,
        VAR_5);
  FUNC_10(VAR_20->regmap, VAR_8, 0x00);
  FUNC_10(VAR_20->regmap, VAR_9, 0x01);

  for (VAR_23 = 0; VAR_23 < VAR_12; ++VAR_23) {
   FUNC_9(VAR_20->regmap, VAR_10,
        &VAR_22);
   if (!VAR_22)
    break;

   FUNC_7(VAR_11);
  }
 }


 FUNC_11(VAR_20->regmap, VAR_0,
     VAR_1, 0);
 FUNC_11(VAR_20->regmap, VAR_2,
     VAR_3,
     VAR_3);
 FUNC_11(VAR_20->regmap, VAR_6,
     VAR_7, 0);

 FUNC_8(VAR_20->regmap, 0);

 VAR_24 = FUNC_5(&VAR_18->dev,
         &VAR_17,
         &VAR_15, 1);
 if (VAR_24 < 0) {
  FUNC_2(&VAR_18->dev, "Failed to register da7219 component: %d\n",
   VAR_24);
 }
 return VAR_24;
}
