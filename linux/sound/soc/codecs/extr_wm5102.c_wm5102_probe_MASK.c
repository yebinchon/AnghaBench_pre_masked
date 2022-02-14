
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct TYPE_19__ {int num_inputs; TYPE_1__* adsp; struct arizona* arizona; } ;
struct wm5102_priv {TYPE_14__ core; TYPE_2__* fll; } ;
struct TYPE_22__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct arizona {int regmap; int dev; int dac_comp_lock; } ;
struct TYPE_21__ {int vco_mult; } ;
struct TYPE_20__ {char* part; int num; int num_mems; TYPE_2__* mem; int regmap; int dev; int base; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct arizona*,int ,struct wm5102_priv*) ;
 int FUNC_3 (struct arizona*) ;
 int FUNC_4 (struct arizona*) ;
 int FUNC_5 (TYPE_14__*,int) ;
 int FUNC_6 (TYPE_14__*) ;
 int FUNC_7 (struct arizona*,int,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_8 (struct arizona*) ;
 int FUNC_9 (struct arizona*) ;
 int FUNC_10 (struct arizona*) ;
 int FUNC_11 (struct arizona*,int ,char*,int ,struct wm5102_priv*) ;
 int FUNC_12 (struct arizona*,int ,int) ;
 int FUNC_13 (TYPE_6__*,char*,int) ;
 struct arizona* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_6__*,char*,int) ;
 struct wm5102_priv* FUNC_17 (TYPE_6__*,int,int ) ;
 int FUNC_18 (TYPE_6__*,int *,TYPE_2__*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct platform_device*,struct wm5102_priv*) ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (int ,TYPE_2__,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__* VAR_19 ;
 TYPE_2__* VAR_20 ;
 TYPE_2__* VAR_21 ;
 int FUNC_24 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_22)
{
 struct arizona *VAR_23 = FUNC_14(VAR_22->dev.parent);
 struct wm5102_priv *VAR_24;
 int VAR_25, VAR_26;

 VAR_24 = FUNC_17(&VAR_22->dev, sizeof(struct wm5102_priv),
         VAR_14);
 if (VAR_24 == ((void*)0))
  return -VAR_13;
 FUNC_20(VAR_22, VAR_24);

 if (FUNC_1(VAR_12)) {
  if (!FUNC_15(VAR_23->dev)) {
   VAR_26 = FUNC_10(VAR_23);
   if (VAR_26 < 0)
    return VAR_26;
  }
 }

 FUNC_19(&VAR_23->dac_comp_lock);

 VAR_24->core.arizona = VAR_23;
 VAR_24->core.num_inputs = 6;

 FUNC_6(&VAR_24->core);

 VAR_24->core.adsp[0].part = "wm5102";
 VAR_24->core.adsp[0].num = 1;
 VAR_24->core.adsp[0].type = VAR_16;
 VAR_24->core.adsp[0].base = VAR_0;
 VAR_24->core.adsp[0].dev = VAR_23->dev;
 VAR_24->core.adsp[0].regmap = VAR_23->regmap;
 VAR_24->core.adsp[0].mem = VAR_21;
 VAR_24->core.adsp[0].num_mems = FUNC_0(VAR_21);

 VAR_26 = FUNC_24(&VAR_24->core.adsp[0]);
 if (VAR_26 != 0)
  return VAR_26;

 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_24->fll); VAR_25++)
  VAR_24->fll[VAR_25].vco_mult = 1;

 FUNC_7(VAR_23, 1, VAR_1 - 1,
    VAR_5, VAR_4,
    &VAR_24->fll[0]);
 FUNC_7(VAR_23, 2, VAR_2 - 1,
    VAR_7, VAR_6,
    &VAR_24->fll[1]);


 FUNC_23(VAR_23->regmap, VAR_8,
      VAR_9, 0x11);
 FUNC_23(VAR_23->regmap, VAR_10,
      VAR_11, 0x12);

 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_19); VAR_25++)
  FUNC_5(&VAR_24->core, VAR_25);


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_20); VAR_25++)
  FUNC_23(VAR_23->regmap, VAR_20[VAR_25],
       VAR_15, VAR_15);

 FUNC_21(&VAR_22->dev);
 FUNC_22(&VAR_22->dev);

 VAR_26 = FUNC_11(VAR_23, VAR_3,
      "ADSP2 Compressed IRQ", VAR_18,
      VAR_24);
 if (VAR_26 != 0) {
  FUNC_13(&VAR_22->dev, "Failed to request DSP IRQ: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_26 = FUNC_12(VAR_23, VAR_3, 1);
 if (VAR_26 != 0)
  FUNC_16(&VAR_22->dev,
    "Failed to set compressed IRQ as a wake source: %d\n",
    VAR_26);

 FUNC_4(VAR_23);

 VAR_26 = FUNC_9(VAR_23);
 if (VAR_26 < 0)
  goto err_dsp_irq;
 VAR_26 = FUNC_8(VAR_23);
 if (VAR_26 < 0)
  goto err_dsp_irq;

 VAR_26 = FUNC_18(&VAR_22->dev,
           &VAR_17,
           VAR_19,
           FUNC_0(VAR_19));
 if (VAR_26 < 0) {
  FUNC_13(&VAR_22->dev, "Failed to register component: %d\n", VAR_26);
  goto err_spk_irqs;
 }

 return VAR_26;

err_spk_irqs:
 FUNC_3(VAR_23);
err_dsp_irq:
 FUNC_12(VAR_23, VAR_3, 0);
 FUNC_2(VAR_23, VAR_3, VAR_24);

 return VAR_26;
}
