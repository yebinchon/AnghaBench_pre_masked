
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct max98927_priv {int interleave_mode; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct max98927_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max98927_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct i2c_client*,struct max98927_priv*) ;
 int FUNC_10 (int ,char*,int*) ;
 int FUNC_11 (int ,int,int*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
 const struct i2c_device_id *VAR_7)
{

 int VAR_8 = 0, VAR_9;
 int VAR_10 = 0;
 struct max98927_priv *VAR_11 = ((void*)0);

 VAR_11 = FUNC_5(&VAR_6->dev,
  sizeof(*VAR_11), VAR_1);

 if (!VAR_11) {
  VAR_8 = -VAR_0;
  return VAR_8;
 }
 FUNC_8(VAR_6, VAR_11);


 if (!FUNC_10(VAR_6->dev.of_node,
  "interleave_mode", &VAR_9)) {
  if (VAR_9 > 0)
   VAR_11->interleave_mode = 1;
  else
   VAR_11->interleave_mode = 0;
 } else
  VAR_11->interleave_mode = 0;


 VAR_11->regmap
  = FUNC_6(VAR_6, &VAR_4);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_8 = FUNC_2(VAR_11->regmap);
  FUNC_3(&VAR_6->dev,
   "Failed to allocate regmap: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_11(VAR_11->regmap,
  VAR_2, &VAR_10);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_6->dev,
   "Failed to read: 0x%02X\n", VAR_2);
  return VAR_8;
 }
 FUNC_4(&VAR_6->dev, "MAX98927 revisionID: 0x%02X\n", VAR_10);


 FUNC_9(VAR_6, VAR_11);


 VAR_8 = FUNC_7(&VAR_6->dev,
  &VAR_5,
  VAR_3, FUNC_0(VAR_3));
 if (VAR_8 < 0)
  FUNC_3(&VAR_6->dev, "Failed to register component: %d\n", VAR_8);

 return VAR_8;
}
