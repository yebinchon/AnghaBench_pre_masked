
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5651_priv {int hp_mute; int irq; int jack_detect_work; int bp_work; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (int *,int ,struct rt5651_priv*) ;
 struct rt5651_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,int ,int ,int,char*,struct rt5651_priv*) ;
 int FUNC_11 (int *,int *,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct i2c_client*,struct rt5651_priv*) ;
 int VAR_10 ;
 int FUNC_14 (int ,int ,int*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_18,
      const struct i2c_device_id *VAR_19)
{
 struct rt5651_priv *VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_20 = FUNC_8(&VAR_18->dev, sizeof(*VAR_20),
    VAR_3);
 if (((void*)0) == VAR_20)
  return -VAR_1;

 FUNC_13(VAR_18, VAR_20);

 VAR_20->regmap = FUNC_9(VAR_18, &VAR_16);
 if (FUNC_3(VAR_20->regmap)) {
  VAR_21 = FUNC_4(VAR_20->regmap);
  FUNC_5(&VAR_18->dev, "Failed to allocate register map: %d\n",
   VAR_21);
  return VAR_21;
 }

 VAR_22 = FUNC_14(VAR_20->regmap, VAR_7, &VAR_21);
 if (VAR_22)
  return VAR_22;

 if (VAR_21 != VAR_8) {
  FUNC_5(&VAR_18->dev,
   "Device with ID register %#x is not rt5651\n", VAR_21);
  return -VAR_0;
 }

 FUNC_16(VAR_20->regmap, VAR_9, 0);

 VAR_21 = FUNC_15(VAR_20->regmap, VAR_10,
        FUNC_0(VAR_10));
 if (VAR_21 != 0)
  FUNC_6(&VAR_18->dev, "Failed to apply regmap patch: %d\n", VAR_21);

 VAR_20->irq = VAR_18->irq;
 VAR_20->hp_mute = 1;

 FUNC_1(&VAR_20->bp_work, VAR_11);
 FUNC_2(&VAR_20->jack_detect_work, VAR_15);


 VAR_21 = FUNC_7(&VAR_18->dev, VAR_12, VAR_20);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_10(&VAR_18->dev, VAR_20->irq, VAR_14,
          VAR_6 | VAR_5
          | VAR_4, "rt5651", VAR_20);
 if (VAR_21 == 0) {

  FUNC_12(VAR_20->irq);
 } else {
  FUNC_6(&VAR_18->dev, "Failed to reguest IRQ %d: %d\n",
    VAR_20->irq, VAR_21);
  VAR_20->irq = -VAR_2;
 }

 VAR_21 = FUNC_11(&VAR_18->dev,
    &VAR_17,
    VAR_13, FUNC_0(VAR_13));

 return VAR_21;
}
