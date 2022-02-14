
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rt5640_priv {int hp_mute; int irq; int jack_work; int bp_work; int regmap; int ldo1_en; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_1__*,char*,unsigned int,...) ;
 int FUNC_6 (TYPE_1__*,char*,int,...) ;
 int FUNC_7 (TYPE_1__*,int ,struct rt5640_priv*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,char*) ;
 struct rt5640_priv* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (struct i2c_client*,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int,char*,struct rt5640_priv*) ;
 int FUNC_12 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct i2c_client*,struct rt5640_priv*) ;
 int VAR_14 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,unsigned int*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_21 (struct rt5640_priv*,int ) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_22,
      const struct i2c_device_id *VAR_23)
{
 struct rt5640_priv *VAR_24;
 int VAR_25;
 unsigned int VAR_26;

 VAR_24 = FUNC_9(&VAR_22->dev,
    sizeof(struct rt5640_priv),
    VAR_4);
 if (((void*)0) == VAR_24)
  return -VAR_2;
 FUNC_15(VAR_22, VAR_24);

 if (VAR_22->dev.of_node) {
  VAR_25 = FUNC_21(VAR_24, VAR_22->dev.of_node);
  if (VAR_25)
   return VAR_25;
 } else
  VAR_24->ldo1_en = -VAR_0;

 VAR_24->regmap = FUNC_10(VAR_22, &VAR_20);
 if (FUNC_3(VAR_24->regmap)) {
  VAR_25 = FUNC_4(VAR_24->regmap);
  FUNC_5(&VAR_22->dev, "Failed to allocate register map: %d\n",
   VAR_25);
  return VAR_25;
 }

 if (FUNC_14(VAR_24->ldo1_en)) {
  VAR_25 = FUNC_8(&VAR_22->dev, VAR_24->ldo1_en,
         VAR_5,
         "RT5640 LDO1_EN");
  if (VAR_25 < 0) {
   FUNC_5(&VAR_22->dev, "Failed to request LDO1_EN %d: %d\n",
    VAR_24->ldo1_en, VAR_25);
   return VAR_25;
  }
  FUNC_16(400);
 }

 FUNC_17(VAR_24->regmap, VAR_13, &VAR_26);
 if (VAR_26 != VAR_9) {
  FUNC_5(&VAR_22->dev,
   "Device with ID register %#x is not rt5640/39\n", VAR_26);
  return -VAR_1;
 }

 FUNC_20(VAR_24->regmap, VAR_12, 0);

 VAR_25 = FUNC_18(VAR_24->regmap, VAR_14,
        FUNC_0(VAR_14));
 if (VAR_25 != 0)
  FUNC_6(&VAR_22->dev, "Failed to apply regmap patch: %d\n", VAR_25);

 FUNC_19(VAR_24->regmap, VAR_10,
    VAR_11, VAR_11);

 VAR_24->hp_mute = 1;
 VAR_24->irq = VAR_22->irq;
 FUNC_1(&VAR_24->bp_work, VAR_15);
 FUNC_2(&VAR_24->jack_work, VAR_19);


 VAR_25 = FUNC_7(&VAR_22->dev, VAR_16, VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_11(&VAR_22->dev, VAR_24->irq, VAR_18,
          VAR_8 | VAR_7
          | VAR_6, "rt5640", VAR_24);
 if (VAR_25 == 0) {

  FUNC_13(VAR_24->irq);
 } else {
  FUNC_6(&VAR_22->dev, "Failed to reguest IRQ %d: %d\n",
    VAR_24->irq, VAR_25);
  VAR_24->irq = -VAR_3;
 }

 return FUNC_12(&VAR_22->dev,
          &VAR_21,
          VAR_17, FUNC_0(VAR_17));
}
