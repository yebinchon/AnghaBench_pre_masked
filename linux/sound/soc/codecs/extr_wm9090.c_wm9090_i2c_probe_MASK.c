
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm9090_priv {int pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct wm9090_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_6 (struct i2c_client*,struct wm9090_priv*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct wm9090_priv *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->regmap = FUNC_4(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_10 = FUNC_1(VAR_8->regmap);
  FUNC_2(&VAR_6->dev, "Failed to allocate regmap: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_8->regmap, VAR_3, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 != 0x9093) {
  FUNC_2(&VAR_6->dev, "Device is not a WM9090, ID=%x\n", VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_9(VAR_8->regmap, VAR_3, 0);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_6->dev.platform_data)
  FUNC_7(&VAR_8->pdata, VAR_6->dev.platform_data,
         sizeof(VAR_8->pdata));

 FUNC_6(VAR_6, VAR_8);

 VAR_10 = FUNC_5(&VAR_6->dev,
   &VAR_4, ((void*)0), 0);
 if (VAR_10 != 0) {
  FUNC_2(&VAR_6->dev, "Failed to register CODEC: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
