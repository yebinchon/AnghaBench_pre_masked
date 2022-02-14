
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct ak4118_priv {void* irq; void* reset; void* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct ak4118_priv* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int ,int *,int ,int,char*,struct ak4118_priv*) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct i2c_client*,struct ak4118_priv*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_11,
       const struct i2c_device_id *VAR_12)
{
 struct ak4118_priv *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(struct ak4118_priv),
         VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 VAR_13->regmap = FUNC_5(VAR_11, &VAR_9);
 if (FUNC_0(VAR_13->regmap))
  return FUNC_1(VAR_13->regmap);

 FUNC_9(VAR_11, VAR_13);

 VAR_13->reset = FUNC_3(&VAR_11->dev, "reset", VAR_4);
 if (FUNC_0(VAR_13->reset)) {
  VAR_14 = FUNC_1(VAR_13->reset);
  if (VAR_14 != -VAR_1)
   FUNC_2(&VAR_11->dev, "Failed to get reset: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13->irq = FUNC_3(&VAR_11->dev, "irq", VAR_3);
 if (FUNC_0(VAR_13->irq)) {
  VAR_14 = FUNC_1(VAR_13->irq);
  if (VAR_14 != -VAR_1)
   FUNC_2(&VAR_11->dev, "Failed to get IRQ: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_6(&VAR_11->dev, FUNC_8(VAR_13->irq),
     ((void*)0), VAR_8,
     VAR_6 | VAR_5,
     "ak4118-irq", VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "Fail to request_irq: %d\n", VAR_14);
  return VAR_14;
 }

 return FUNC_7(&VAR_11->dev,
    &VAR_10, &VAR_7, 1);
}
