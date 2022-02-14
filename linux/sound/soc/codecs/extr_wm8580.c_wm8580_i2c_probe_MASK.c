
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm8580_priv {int drvdata; TYPE_1__* supplies; int regmap; } ;
struct of_device_id {int data; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct wm8580_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int,TYPE_1__*) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int) ;
 int FUNC_8 (struct i2c_client*,struct wm8580_priv*) ;
 struct of_device_id* FUNC_9 (int ,int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 const struct of_device_id *VAR_10;
 struct wm8580_priv *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(struct wm8580_priv),
         VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_11->regmap = FUNC_5(VAR_8, &VAR_6);
 if (FUNC_1(VAR_11->regmap))
  return FUNC_2(VAR_11->regmap);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11->supplies); VAR_13++)
  VAR_11->supplies[VAR_13].supply = VAR_7[VAR_13];

 VAR_12 = FUNC_6(&VAR_8->dev, FUNC_0(VAR_11->supplies),
          VAR_11->supplies);
 if (VAR_12 != 0) {
  FUNC_3(&VAR_8->dev, "Failed to request supplies: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_8(VAR_8, VAR_11);

 VAR_10 = FUNC_9(VAR_5, &VAR_8->dev);
 if (VAR_10)
  VAR_11->drvdata = VAR_10->data;

 if (!VAR_11->drvdata) {
  FUNC_3(&VAR_8->dev, "failed to find driver data\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_7(&VAR_8->dev,
   &VAR_3, VAR_4, FUNC_0(VAR_4));

 return VAR_12;
}
