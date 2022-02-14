
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct max98926_priv {int interleave_mode; int regmap; scalar_t__ i_slot; scalar_t__ v_slot; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct max98926_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max98926_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,scalar_t__*) ;
 int FUNC_11 (int ,int ,int*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
  const struct i2c_device_id *VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;
 struct max98926_priv *VAR_14;

 VAR_14 = FUNC_5(&VAR_9->dev,
   sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_8(VAR_9, VAR_14);
 VAR_14->regmap = FUNC_6(VAR_9, &VAR_7);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_11 = FUNC_2(VAR_14->regmap);
  FUNC_3(&VAR_9->dev,
    "Failed to allocate regmap: %d\n", VAR_11);
  goto err_out;
 }
 if (FUNC_9(VAR_9->dev.of_node, "interleave-mode"))
  VAR_14->interleave_mode = 1;

 if (!FUNC_10(VAR_9->dev.of_node, "vmon-slot-no", &VAR_13)) {
  if (VAR_13 > VAR_4) {
   FUNC_3(&VAR_9->dev, "vmon slot number is wrong:\n");
   return -VAR_0;
  }
  VAR_14->v_slot = VAR_13;
 }
 if (!FUNC_10(VAR_9->dev.of_node, "imon-slot-no", &VAR_13)) {
  if (VAR_13 > VAR_3) {
   FUNC_3(&VAR_9->dev, "imon slot number is wrong:\n");
   return -VAR_0;
  }
  VAR_14->i_slot = VAR_13;
 }
 VAR_11 = FUNC_11(VAR_14->regmap,
   VAR_5, &VAR_12);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_9->dev, "Failed to read: %x\n", VAR_12);
  return VAR_11;
 }

 VAR_11 = FUNC_7(&VAR_9->dev,
   &VAR_8,
   VAR_6, FUNC_0(VAR_6));
 if (VAR_11 < 0)
  FUNC_3(&VAR_9->dev,
    "Failed to register component: %d\n", VAR_11);
 FUNC_4(&VAR_9->dev, "device version: %x\n", VAR_12);
err_out:
 return VAR_11;
}
