
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_16__ {int num_inputs; struct arizona* arizona; } ;
struct wm8997_priv {TYPE_11__ core; TYPE_1__* fll; } ;
struct TYPE_18__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct arizona {int regmap; int dev; } ;
struct TYPE_17__ {int vco_mult; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (struct arizona*) ;
 int FUNC_3 (struct arizona*) ;
 int FUNC_4 (TYPE_11__*,int) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (struct arizona*,int,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_7 (struct arizona*) ;
 int FUNC_8 (struct arizona*) ;
 int FUNC_9 (struct arizona*) ;
 int FUNC_10 (TYPE_4__*,char*,int) ;
 struct arizona* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct wm8997_priv* FUNC_13 (TYPE_4__*,int,int ) ;
 int FUNC_14 (TYPE_4__*,int *,TYPE_1__*,int) ;
 int FUNC_15 (struct platform_device*,struct wm8997_priv*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int ,TYPE_1__,int,int) ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* VAR_16 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_17)
{
 struct arizona *VAR_18 = FUNC_11(VAR_17->dev.parent);
 struct wm8997_priv *VAR_19;
 int VAR_20, VAR_21;

 VAR_19 = FUNC_13(&VAR_17->dev, sizeof(struct wm8997_priv),
         VAR_12);
 if (VAR_19 == ((void*)0))
  return -VAR_11;
 FUNC_15(VAR_17, VAR_19);

 if (FUNC_1(VAR_10)) {
  if (!FUNC_12(VAR_18->dev)) {
   VAR_21 = FUNC_9(VAR_18);
   if (VAR_21 < 0)
    return VAR_21;
  }
 }

 VAR_19->core.arizona = VAR_18;
 VAR_19->core.num_inputs = 4;

 FUNC_5(&VAR_19->core);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_19->fll); VAR_20++)
  VAR_19->fll[VAR_20].vco_mult = 1;

 FUNC_6(VAR_18, 1, VAR_0 - 1,
    VAR_3, VAR_2,
    &VAR_19->fll[0]);
 FUNC_6(VAR_18, 2, VAR_1 - 1,
    VAR_5, VAR_4,
    &VAR_19->fll[1]);


 FUNC_18(VAR_18->regmap, VAR_6,
      VAR_7, 0x11);
 FUNC_18(VAR_18->regmap, VAR_8,
      VAR_9, 0x12);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_15); VAR_20++)
  FUNC_4(&VAR_19->core, VAR_20);


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_16); VAR_20++)
  FUNC_18(VAR_18->regmap, VAR_16[VAR_20],
       VAR_13, VAR_13);

 FUNC_16(&VAR_17->dev);
 FUNC_17(&VAR_17->dev);

 FUNC_3(VAR_18);

 VAR_21 = FUNC_8(VAR_18);
 if (VAR_21 < 0)
  return VAR_21;
 VAR_21 = FUNC_7(VAR_18);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_21 = FUNC_14(&VAR_17->dev,
           &VAR_14,
           VAR_15,
           FUNC_0(VAR_15));
 if (VAR_21 < 0) {
  FUNC_10(&VAR_17->dev, "Failed to register component: %d\n", VAR_21);
  goto err_spk_irqs;
 }

err_spk_irqs:
 FUNC_2(VAR_18);

 return VAR_21;
}
