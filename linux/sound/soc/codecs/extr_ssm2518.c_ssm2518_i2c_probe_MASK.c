
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssm2518_platform_data {int enable_gpio; } ;
struct ssm2518 {int enable_gpio; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {scalar_t__ of_node; struct ssm2518_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int,int ,char*) ;
 struct ssm2518* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct i2c_client*,struct ssm2518*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct ssm2518*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
 const struct i2c_device_id *VAR_12)
{
 struct ssm2518_platform_data *VAR_13 = VAR_11->dev.platform_data;
 struct ssm2518 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(&VAR_11->dev, sizeof(*VAR_14), VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 if (VAR_13) {
  VAR_14->enable_gpio = VAR_13->enable_gpio;
 } else if (VAR_11->dev.of_node) {
  VAR_14->enable_gpio = FUNC_8(VAR_11->dev.of_node, 0);
  if (VAR_14->enable_gpio < 0 && VAR_14->enable_gpio != -VAR_0)
   return VAR_14->enable_gpio;
 } else {
  VAR_14->enable_gpio = -1;
 }

 if (FUNC_6(VAR_14->enable_gpio)) {
  VAR_15 = FUNC_2(&VAR_11->dev, VAR_14->enable_gpio,
    VAR_3, "SSM2518 nSD");
  if (VAR_15)
   return VAR_15;
 }

 FUNC_7(VAR_11, VAR_14);

 VAR_14->regmap = FUNC_4(VAR_11, &VAR_10);
 if (FUNC_0(VAR_14->regmap))
  return FUNC_1(VAR_14->regmap);







 FUNC_9(VAR_14->regmap, 1);
 VAR_15 = FUNC_11(VAR_14->regmap, VAR_6,
   VAR_4);
 FUNC_9(VAR_14->regmap, 0);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_10(VAR_14->regmap, VAR_7,
    VAR_5, 0x00);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_12(VAR_14, 0);
 if (VAR_15)
  return VAR_15;

 return FUNC_5(&VAR_11->dev,
   &VAR_8,
   &VAR_9, 1);
}
