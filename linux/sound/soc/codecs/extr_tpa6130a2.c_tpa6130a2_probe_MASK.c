
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpa6130a2_platform_data {scalar_t__ power_gpio; } ;
struct tpa6130a2_data {scalar_t__ power_gpio; int id; int regmap; int supply; struct device* dev; } ;
struct i2c_device_id {int driver_data; } ;
struct device {struct device_node* of_node; struct tpa6130a2_platform_data* platform_data; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_3 ;
 unsigned int VAR_4 ;

 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,scalar_t__,char*) ;
 struct tpa6130a2_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct device*,char const*) ;
 int FUNC_8 (struct device*,int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct i2c_client*,struct tpa6130a2_data*) ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int ) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int VAR_5 ;
 int FUNC_14 (struct tpa6130a2_data*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_7,
      const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9;
 struct tpa6130a2_data *VAR_10;
 struct tpa6130a2_platform_data *VAR_11 = VAR_7->dev.platform_data;
 struct device_node *VAR_12 = VAR_7->dev.of_node;
 const char *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_9 = &VAR_7->dev;

 VAR_10 = FUNC_5(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = VAR_9;

 VAR_10->regmap = FUNC_6(VAR_7, &VAR_6);
 if (FUNC_0(VAR_10->regmap))
  return FUNC_1(VAR_10->regmap);

 if (VAR_11) {
  VAR_10->power_gpio = VAR_11->power_gpio;
 } else if (VAR_12) {
  VAR_10->power_gpio = FUNC_12(VAR_12, "power-gpio", 0);
 } else {
  FUNC_2(VAR_9, "Platform data not set\n");
  FUNC_9();
  return -VAR_0;
 }

 FUNC_11(VAR_7, VAR_10);

 VAR_10->id = VAR_8->driver_data;

 if (VAR_10->power_gpio >= 0) {
  VAR_15 = FUNC_4(VAR_9, VAR_10->power_gpio,
     "tpa6130a2 enable");
  if (VAR_15 < 0) {
   FUNC_2(VAR_9, "Failed to request power GPIO (%d)\n",
    VAR_10->power_gpio);
   return VAR_15;
  }
  FUNC_10(VAR_10->power_gpio, 0);
 }

 switch (VAR_10->id) {
 default:
  FUNC_3(VAR_9, "Unknown TPA model (%d). Assuming 6130A2\n",
    VAR_10->id);

 case 129:
  VAR_13 = "Vdd";
  break;
 case 128:
  VAR_13 = "AVdd";
  break;
 }

 VAR_10->supply = FUNC_7(VAR_9, VAR_13);
 if (FUNC_0(VAR_10->supply)) {
  VAR_15 = FUNC_1(VAR_10->supply);
  FUNC_2(VAR_9, "Failed to request supply: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_14(VAR_10, 1);
 if (VAR_15 != 0)
  return VAR_15;



 FUNC_13(VAR_10->regmap, VAR_3, &VAR_14);
 VAR_14 &= VAR_4;
 if ((VAR_14 != 1) && (VAR_14 != 2))
  FUNC_3(VAR_9, "UNTESTED version detected (%d)\n", VAR_14);


 VAR_15 = FUNC_14(VAR_10, 0);
 if (VAR_15 != 0)
  return VAR_15;

 return FUNC_8(&VAR_7->dev,
   &VAR_5, ((void*)0), 0);
}
