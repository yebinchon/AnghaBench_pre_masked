
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {int sysclk_src_id; int pll_lock; int coeff_ram_lock; int audio_params_lock; int regmap; int sysclk; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 struct tscs42xx* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (struct i2c_client*,struct tscs42xx*) ;
 int FUNC_9 (struct tscs42xx*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tscs42xx*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_14,
  const struct i2c_device_id *VAR_15)
{
 struct tscs42xx *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_5(&VAR_14->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_18 = -VAR_3;
  FUNC_3(&VAR_14->dev,
   "Failed to allocate memory for data (%d)\n", VAR_18);
  return VAR_18;
 }
 FUNC_8(VAR_14, VAR_16);

 for (VAR_17 = VAR_8; VAR_17 < VAR_7; VAR_17++) {
  VAR_16->sysclk = FUNC_4(&VAR_14->dev, VAR_10[VAR_17]);
  if (!FUNC_1(VAR_16->sysclk)) {
   break;
  } else if (FUNC_2(VAR_16->sysclk) != -VAR_2) {
   VAR_18 = FUNC_2(VAR_16->sysclk);
   FUNC_3(&VAR_14->dev, "Failed to get sysclk (%d)\n", VAR_18);
   return VAR_18;
  }
 }
 if (VAR_17 == VAR_7) {
  VAR_18 = -VAR_0;
  FUNC_3(&VAR_14->dev, "Failed to get a valid clock name (%d)\n",
    VAR_18);
  return VAR_18;
 }
 VAR_16->sysclk_src_id = VAR_17;

 VAR_16->regmap = FUNC_6(VAR_14, &VAR_13);
 if (FUNC_1(VAR_16->regmap)) {
  VAR_18 = FUNC_2(VAR_16->regmap);
  FUNC_3(&VAR_14->dev, "Failed to allocate regmap (%d)\n", VAR_18);
  return VAR_18;
 }

 FUNC_9(VAR_16);

 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18 <= 0) {
  FUNC_3(&VAR_14->dev, "No valid part (%d)\n", VAR_18);
  VAR_18 = -VAR_1;
  return VAR_18;
 }

 VAR_18 = FUNC_13(VAR_16->regmap, VAR_6, VAR_5);
 if (VAR_18 < 0) {
  FUNC_3(&VAR_14->dev, "Failed to reset device (%d)\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_12(VAR_16->regmap, VAR_12,
   FUNC_0(VAR_12));
 if (VAR_18 < 0) {
  FUNC_3(&VAR_14->dev, "Failed to apply patch (%d)\n", VAR_18);
  return VAR_18;
 }

 FUNC_10(&VAR_16->audio_params_lock);
 FUNC_10(&VAR_16->coeff_ram_lock);
 FUNC_10(&VAR_16->pll_lock);

 VAR_18 = FUNC_7(&VAR_14->dev,
   &VAR_9, &VAR_11, 1);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to register codec (%d)\n", VAR_18);
  return VAR_18;
 }

 return 0;
}
