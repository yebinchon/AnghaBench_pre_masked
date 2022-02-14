
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct wm8993_priv {TYPE_1__* supplies; int regmap; int * dev; int fll_lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_7__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int FUNC_4 (int *,char*,int) ;
 struct wm8993_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int *,int) ;
 int FUNC_9 (scalar_t__,struct wm8993_priv*) ;
 int FUNC_10 (struct i2c_client*,struct wm8993_priv*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int FUNC_14 (int ,TYPE_1__*,int) ;
 int FUNC_15 (int ,int ,int,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int,TYPE_1__*) ;
 int FUNC_18 (int,TYPE_1__*) ;
 int FUNC_19 (scalar_t__,int *,int ,int,char*,struct wm8993_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_15,
       const struct i2c_device_id *VAR_16)
{
 struct wm8993_priv *VAR_17;
 unsigned int VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_5(&VAR_15->dev, sizeof(struct wm8993_priv),
         VAR_2);
 if (VAR_17 == ((void*)0))
  return -VAR_1;

 VAR_17->dev = &VAR_15->dev;
 FUNC_11(&VAR_17->fll_lock);

 VAR_17->regmap = FUNC_6(VAR_15, &VAR_12);
 if (FUNC_1(VAR_17->regmap)) {
  VAR_19 = FUNC_2(VAR_17->regmap);
  FUNC_3(&VAR_15->dev, "Failed to allocate regmap: %d\n", VAR_19);
  return VAR_19;
 }

 FUNC_10(VAR_15, VAR_17);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_17->supplies); VAR_20++)
  VAR_17->supplies[VAR_20].supply = VAR_14[VAR_20];

 VAR_19 = FUNC_7(&VAR_15->dev, FUNC_0(VAR_17->supplies),
     VAR_17->supplies);
 if (VAR_19 != 0) {
  FUNC_3(&VAR_15->dev, "Failed to request supplies: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_18(FUNC_0(VAR_17->supplies),
        VAR_17->supplies);
 if (VAR_19 != 0) {
  FUNC_3(&VAR_15->dev, "Failed to enable supplies: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_13(VAR_17->regmap, VAR_8, &VAR_18);
 if (VAR_19 != 0) {
  FUNC_3(&VAR_15->dev, "Failed to read chip ID: %d\n", VAR_19);
  goto err_enable;
 }

 if (VAR_18 != 0x8993) {
  FUNC_3(&VAR_15->dev, "Invalid ID register value %x\n", VAR_18);
  VAR_19 = -VAR_0;
  goto err_enable;
 }

 VAR_19 = FUNC_16(VAR_17->regmap, VAR_8, 0xffff);
 if (VAR_19 != 0)
  goto err_enable;

 VAR_19 = FUNC_14(VAR_17->regmap, VAR_13,
        FUNC_0(VAR_13));
 if (VAR_19 != 0)
  FUNC_4(VAR_17->dev, "Failed to apply regmap patch: %d\n",
    VAR_19);

 if (VAR_15->irq) {

  VAR_19 = FUNC_15(VAR_17->regmap, VAR_5,
      VAR_6 |
      VAR_7, 7);
  if (VAR_19 != 0)
   goto err_enable;

  VAR_19 = FUNC_19(VAR_15->irq, ((void*)0), VAR_11,
        VAR_4 | VAR_3,
        "wm8993", VAR_17);
  if (VAR_19 != 0)
   goto err_enable;

 }

 FUNC_17(FUNC_0(VAR_17->supplies), VAR_17->supplies);

 FUNC_12(VAR_17->regmap, 1);

 VAR_19 = FUNC_8(&VAR_15->dev,
   &VAR_9, &VAR_10, 1);
 if (VAR_19 != 0) {
  FUNC_3(&VAR_15->dev, "Failed to register CODEC: %d\n", VAR_19);
  goto err_irq;
 }

 return 0;

err_irq:
 if (VAR_15->irq)
  FUNC_9(VAR_15->irq, VAR_17);
err_enable:
 FUNC_17(FUNC_0(VAR_17->supplies), VAR_17->supplies);
 return VAR_19;
}
