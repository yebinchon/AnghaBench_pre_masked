
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct cs4265_private {scalar_t__ regmap; scalar_t__ reset_gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,char*,unsigned int,...) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 struct cs4265_private* FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (struct i2c_client*,struct cs4265_private*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,int ,unsigned int*) ;
 int FUNC_13 (scalar_t__,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_12,
        const struct i2c_device_id *VAR_13)
{
 struct cs4265_private *VAR_14;
 int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17;

 VAR_14 = FUNC_6(&VAR_12->dev, sizeof(struct cs4265_private),
          VAR_7);
 if (VAR_14 == ((void*)0))
  return -VAR_6;

 VAR_14->regmap = FUNC_7(VAR_12, &VAR_10);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_15 = FUNC_2(VAR_14->regmap);
  FUNC_3(&VAR_12->dev, "regmap_init() failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_14->reset_gpio = FUNC_5(&VAR_12->dev,
  "reset", VAR_8);
 if (FUNC_1(VAR_14->reset_gpio))
  return FUNC_2(VAR_14->reset_gpio);

 if (VAR_14->reset_gpio) {
  FUNC_11(1);
  FUNC_9(VAR_14->reset_gpio, 1);
 }

 FUNC_10(VAR_12, VAR_14);

 VAR_15 = FUNC_12(VAR_14->regmap, VAR_0, &VAR_17);
 VAR_16 = VAR_17 & VAR_1;
 if (VAR_16 != VAR_2) {
  VAR_15 = -VAR_5;
  FUNC_3(&VAR_12->dev,
   "CS4265 Device ID (%X). Expected %X\n",
   VAR_16, VAR_0);
  return VAR_15;
 }
 FUNC_4(&VAR_12->dev,
  "CS4265 Version %x\n",
   VAR_17 & VAR_4);

 FUNC_13(VAR_14->regmap, VAR_3, 0x0F);

 VAR_15 = FUNC_8(&VAR_12->dev,
   &VAR_11, VAR_9,
   FUNC_0(VAR_9));
 return VAR_15;
}
