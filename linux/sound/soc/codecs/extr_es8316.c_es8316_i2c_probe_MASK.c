
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int irq; } ;
struct es8316_priv {int irq; int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct es8316_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct device*,int ,int *,int ,int,char*,struct es8316_priv*) ;
 int FUNC_6 (struct device*,int *,int *,int) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct i2c_client*,struct es8316_priv*) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_9,
       const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct es8316_priv *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(&VAR_9->dev, sizeof(struct es8316_priv),
         VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 FUNC_8(VAR_9, VAR_12);

 VAR_12->regmap = FUNC_4(VAR_9, &VAR_7);
 if (FUNC_0(VAR_12->regmap))
  return FUNC_1(VAR_12->regmap);

 VAR_12->irq = VAR_9->irq;
 FUNC_9(&VAR_12->lock);

 VAR_13 = FUNC_5(VAR_11, VAR_12->irq, ((void*)0), VAR_6,
     VAR_4 | VAR_3,
     "es8316", VAR_12);
 if (VAR_13 == 0) {

  FUNC_7(VAR_12->irq);
 } else {
  FUNC_2(VAR_11, "Failed to get IRQ %d: %d\n", VAR_12->irq, VAR_13);
  VAR_12->irq = -VAR_1;
 }

 return FUNC_6(&VAR_9->dev,
          &VAR_8,
          &VAR_5, 1);
}
