
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tas2552_data {TYPE_1__* supplies; int regmap; struct i2c_client* tas2552_client; int enable_gpio; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct tas2552_data*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct tas2552_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct device*,int,TYPE_1__*) ;
 int FUNC_9 (struct device*,int *,TYPE_1__*,int) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*,int) ;
 int FUNC_15 (struct device*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_7,
      const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9;
 struct tas2552_data *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = &VAR_7->dev;
 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_10->enable_gpio = FUNC_5(VAR_9, "enable",
          VAR_2);
 if (FUNC_1(VAR_10->enable_gpio))
  return FUNC_2(VAR_10->enable_gpio);

 VAR_10->tas2552_client = VAR_7;
 VAR_10->regmap = FUNC_7(VAR_7, &VAR_5);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_11 = FUNC_2(VAR_10->regmap);
  FUNC_3(&VAR_7->dev, "Failed to allocate register map: %d\n",
   VAR_11);
  return VAR_11;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->supplies); VAR_12++)
  VAR_10->supplies[VAR_12].supply = VAR_6[VAR_12];

 VAR_11 = FUNC_8(VAR_9, FUNC_0(VAR_10->supplies),
          VAR_10->supplies);
 if (VAR_11 != 0) {
  FUNC_3(VAR_9, "Failed to request supplies: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_13(&VAR_7->dev);
 FUNC_14(&VAR_7->dev, 1000);
 FUNC_15(&VAR_7->dev);
 FUNC_10(&VAR_7->dev);
 FUNC_11(&VAR_7->dev);
 FUNC_12(&VAR_7->dev);

 FUNC_4(&VAR_7->dev, VAR_10);

 VAR_11 = FUNC_9(&VAR_7->dev,
          &VAR_3,
          VAR_4, FUNC_0(VAR_4));
 if (VAR_11 < 0)
  FUNC_3(&VAR_7->dev, "Failed to register component: %d\n", VAR_11);

 return VAR_11;
}
