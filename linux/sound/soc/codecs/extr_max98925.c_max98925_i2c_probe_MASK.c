
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct max98925_priv {int regmap; scalar_t__ i_slot; scalar_t__ v_slot; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct max98925_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max98925_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ,char*,scalar_t__*) ;
 int FUNC_10 (int ,int ,int*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_12,
        const struct i2c_device_id *VAR_13)
{
 int VAR_14, VAR_15;
 u32 VAR_16;
 struct max98925_priv *VAR_17;

 VAR_17 = FUNC_5(&VAR_12->dev,
   sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 FUNC_8(VAR_12, VAR_17);
 VAR_17->regmap = FUNC_6(VAR_12, &VAR_10);
 if (FUNC_1(VAR_17->regmap)) {
  VAR_14 = FUNC_2(VAR_17->regmap);
  FUNC_3(&VAR_12->dev,
    "Failed to allocate regmap: %d\n", VAR_14);
  return VAR_14;
 }

 if (!FUNC_9(VAR_12->dev.of_node, "vmon-slot-no", &VAR_16)) {
  if (VAR_16 > VAR_5) {
   FUNC_3(&VAR_12->dev, "vmon slot number is wrong:\n");
   return -VAR_0;
  }
  VAR_17->v_slot = VAR_16;
 }
 if (!FUNC_9(VAR_12->dev.of_node, "imon-slot-no", &VAR_16)) {
  if (VAR_16 > VAR_4) {
   FUNC_3(&VAR_12->dev, "imon slot number is wrong:\n");
   return -VAR_0;
  }
  VAR_17->i_slot = VAR_16;
 }

 VAR_14 = FUNC_10(VAR_17->regmap, VAR_6, &VAR_15);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_12->dev, "Read revision failed\n");
  return VAR_14;
 }

 if ((VAR_15 != VAR_7) && (VAR_15 != VAR_8)) {
  VAR_14 = -VAR_1;
  FUNC_3(&VAR_12->dev, "Invalid revision (%d 0x%02X)\n",
   VAR_14, VAR_15);
  return VAR_14;
 }

 FUNC_4(&VAR_12->dev, "device version 0x%02X\n", VAR_15);

 VAR_14 = FUNC_7(&VAR_12->dev,
   &VAR_11,
   VAR_9, FUNC_0(VAR_9));
 if (VAR_14 < 0)
  FUNC_3(&VAR_12->dev,
    "Failed to register component: %d\n", VAR_14);
 return VAR_14;
}
