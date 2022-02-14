
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct ak4458_priv {int * dev; void* mute_gpiod; void* reset_gpiod; void* regmap; } ;
struct ak4458_drvdata {int dai_drv; int comp_drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct ak4458_priv* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (struct i2c_client*,struct ak4458_priv*) ;
 struct ak4458_drvdata* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_4)
{
 struct ak4458_priv *VAR_5;
 const struct ak4458_drvdata *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->regmap = FUNC_5(VAR_4, &VAR_3);
 if (FUNC_0(VAR_5->regmap))
  return FUNC_1(VAR_5->regmap);

 FUNC_7(VAR_4, VAR_5);
 VAR_5->dev = &VAR_4->dev;

 VAR_6 = FUNC_8(&VAR_4->dev);

 VAR_5->reset_gpiod = FUNC_3(VAR_5->dev, "reset",
            VAR_2);
 if (FUNC_0(VAR_5->reset_gpiod))
  return FUNC_1(VAR_5->reset_gpiod);

 VAR_5->mute_gpiod = FUNC_3(VAR_5->dev, "mute",
           VAR_2);
 if (FUNC_0(VAR_5->mute_gpiod))
  return FUNC_1(VAR_5->mute_gpiod);

 VAR_7 = FUNC_6(VAR_5->dev, VAR_6->comp_drv,
           VAR_6->dai_drv, 1);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5->dev, "Failed to register CODEC: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_9(&VAR_4->dev);

 return 0;
}
