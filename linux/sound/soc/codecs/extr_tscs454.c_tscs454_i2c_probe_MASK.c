
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {int sysclk_src_id; int regmap; int sysclk; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int ) ;
 struct tscs454* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct tscs454*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct tscs454*,struct i2c_client*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_12,
  const struct i2c_device_id *VAR_13)
{
 struct tscs454 *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(&VAR_12->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_12(VAR_14, VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_8(VAR_12, VAR_14);

 for (VAR_15 = VAR_5; VAR_15 < VAR_4; VAR_15++) {
  VAR_14->sysclk = FUNC_5(&VAR_12->dev, VAR_9[VAR_15]);
  if (!FUNC_1(VAR_14->sysclk)) {
   break;
  } else if (FUNC_2(VAR_14->sysclk) != -VAR_0) {
   VAR_16 = FUNC_2(VAR_14->sysclk);
   FUNC_4(&VAR_12->dev, "Failed to get sysclk (%d)\n", VAR_16);
   return VAR_16;
  }
 }
 FUNC_3(&VAR_12->dev, "PLL input is %s\n", VAR_9[VAR_15]);
 VAR_14->sysclk_src_id = VAR_15;

 VAR_16 = FUNC_11(VAR_14->regmap,
   VAR_7, VAR_2);
 if (VAR_16 < 0) {
  FUNC_4(&VAR_12->dev, "Failed to reset the component (%d)\n", VAR_16);
  return VAR_16;
 }
 FUNC_9(VAR_14->regmap);

 VAR_16 = FUNC_10(VAR_14->regmap, VAR_11,
   FUNC_0(VAR_11));
 if (VAR_16 < 0) {
  FUNC_4(&VAR_12->dev, "Failed to apply patch (%d)\n", VAR_16);
  return VAR_16;
 }

 FUNC_11(VAR_14->regmap, VAR_6, 0x00);

 VAR_16 = FUNC_7(&VAR_12->dev, &VAR_8,
   VAR_10, FUNC_0(VAR_10));
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "Failed to register component (%d)\n", VAR_16);
  return VAR_16;
 }

 return 0;
}
