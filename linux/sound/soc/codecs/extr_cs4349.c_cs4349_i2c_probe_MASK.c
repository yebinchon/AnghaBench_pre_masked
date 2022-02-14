
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct cs4349_private {int reset_gpio; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 struct cs4349_private* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct i2c_client*,struct cs4349_private*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
          const struct i2c_device_id *VAR_7)
{
 struct cs4349_private *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->regmap = FUNC_5(VAR_6, &VAR_4);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  FUNC_2(&VAR_6->dev, "regmap_init() failed: %d\n", VAR_9);
  return VAR_9;
 }


 VAR_8->reset_gpio = FUNC_3(&VAR_6->dev,
  "reset", VAR_2);
 if (FUNC_0(VAR_8->reset_gpio))
  return FUNC_1(VAR_8->reset_gpio);

 FUNC_7(VAR_8->reset_gpio, 1);

 FUNC_8(VAR_6, VAR_8);

 return FUNC_6(&VAR_6->dev,
  &VAR_5,
  &VAR_3, 1);
}
