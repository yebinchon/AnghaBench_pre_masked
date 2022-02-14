
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_13__ {int num_inputs; struct arizona* arizona; } ;
struct wm8998_priv {TYPE_11__ core; TYPE_1__* fll; } ;
struct TYPE_15__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct arizona {int regmap; int dev; } ;
struct TYPE_14__ {int vco_mult; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct arizona*) ;
 int FUNC_3 (struct arizona*) ;
 int FUNC_4 (TYPE_11__*,int) ;
 int FUNC_5 (struct arizona*,int,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_6 (struct arizona*) ;
 int FUNC_7 (struct arizona*) ;
 int FUNC_8 (TYPE_4__*,char*,int) ;
 struct arizona* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct wm8998_priv* FUNC_11 (TYPE_4__*,int,int ) ;
 int FUNC_12 (TYPE_4__*,int *,TYPE_1__*,int) ;
 int FUNC_13 (struct platform_device*,struct wm8998_priv*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ,TYPE_1__,int ,int ) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_13)
{
 struct arizona *VAR_14 = FUNC_9(VAR_13->dev.parent);
 struct wm8998_priv *VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = FUNC_11(&VAR_13->dev, sizeof(struct wm8998_priv),
         VAR_8);
 if (!VAR_15)
  return -VAR_7;
 FUNC_13(VAR_13, VAR_15);

 if (FUNC_1(VAR_6)) {
  if (!FUNC_10(VAR_14->dev)) {
   VAR_17 = FUNC_7(VAR_14);
   if (VAR_17 < 0)
    return VAR_17;
  }
 }

 VAR_15->core.arizona = VAR_14;
 VAR_15->core.num_inputs = 3;

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_15->fll); VAR_16++)
  VAR_15->fll[VAR_16].vco_mult = 1;

 FUNC_5(VAR_14, 1, VAR_0 - 1,
    VAR_3, VAR_2,
    &VAR_15->fll[0]);
 FUNC_5(VAR_14, 2, VAR_1 - 1,
    VAR_5, VAR_4,
    &VAR_15->fll[1]);

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_11); VAR_16++)
  FUNC_4(&VAR_15->core, VAR_16);


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_12); VAR_16++)
  FUNC_16(VAR_14->regmap, VAR_12[VAR_16],
       VAR_9, VAR_9);

 FUNC_14(&VAR_13->dev);
 FUNC_15(&VAR_13->dev);

 FUNC_3(VAR_14);

 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_12(&VAR_13->dev,
           &VAR_10,
           VAR_11,
           FUNC_0(VAR_11));
 if (VAR_17 < 0) {
  FUNC_8(&VAR_13->dev, "Failed to register component: %d\n", VAR_17);
  goto err_spk_irqs;
 }

 return VAR_17;

err_spk_irqs:
 FUNC_2(VAR_14);

 return VAR_17;
}
