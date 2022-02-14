
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {unsigned int driver_data; } ;
struct i2c_client {int dev; } ;
struct alc5632_priv {unsigned int id; int regmap; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct alc5632_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,TYPE_1__*,int) ;
 int FUNC_7 (struct i2c_client*,struct alc5632_priv*) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
        const struct i2c_device_id *VAR_10)
{
 struct alc5632_priv *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;

 VAR_11 = FUNC_4(&VAR_9->dev,
    sizeof(struct alc5632_priv), VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 FUNC_7(VAR_9, VAR_11);

 VAR_11->regmap = FUNC_5(VAR_9, &VAR_7);
 if (FUNC_0(VAR_11->regmap)) {
  VAR_12 = FUNC_1(VAR_11->regmap);
  FUNC_3(&VAR_9->dev, "regmap_init() failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_13 = FUNC_8(VAR_11->regmap, VAR_0, &VAR_15);
 VAR_14 = FUNC_8(VAR_11->regmap, VAR_1, &VAR_16);
 if (VAR_13 != 0 || VAR_14 != 0) {
  FUNC_3(&VAR_9->dev,
  "Failed to read chip ID: ret1=%d, ret2=%d\n", VAR_13, VAR_14);
  return -VAR_3;
 }

 VAR_16 >>= 8;

 if ((VAR_15 != 0x10EC) || (VAR_16 != VAR_10->driver_data)) {
  FUNC_3(&VAR_9->dev,
  "Device is not a ALC5632: VID1=0x%x, VID2=0x%x\n", VAR_15, VAR_16);
  return -VAR_2;
 }

 VAR_12 = FUNC_2(VAR_11->regmap);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_9->dev, "Failed to issue reset\n");
  return VAR_12;
 }

 VAR_11->id = VAR_16;
 switch (VAR_11->id) {
 case 0x5c:
  VAR_6.name = "alc5632-hifi";
  break;
 default:
  return -VAR_2;
 }

 VAR_12 = FUNC_6(&VAR_9->dev,
  &VAR_8, &VAR_6, 1);

 if (VAR_12 < 0) {
  FUNC_3(&VAR_9->dev, "Failed to register component: %d\n", VAR_12);
  return VAR_12;
 }

 return VAR_12;
}
