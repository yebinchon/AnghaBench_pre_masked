
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_18__ {int num_inputs; TYPE_1__* adsp; struct arizona* arizona; } ;
struct wm5110_priv {TYPE_14__ core; TYPE_2__* fll; } ;
struct TYPE_21__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct arizona {int regmap; int dev; } ;
struct TYPE_20__ {int vco_mult; } ;
struct TYPE_19__ {char* part; int num; int num_mems; int mem; scalar_t__ base; int regmap; int dev; int type; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_17 ;
 int FUNC_2 (struct arizona*,int ,struct wm5110_priv*) ;
 int FUNC_3 (struct arizona*) ;
 int FUNC_4 (struct arizona*) ;
 int FUNC_5 (TYPE_14__*,int) ;
 int FUNC_6 (struct arizona*,int,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_7 (struct arizona*) ;
 int FUNC_8 (struct arizona*) ;
 int FUNC_9 (struct arizona*) ;
 int FUNC_10 (struct arizona*,int ,char*,int ,struct wm5110_priv*) ;
 int FUNC_11 (struct arizona*,int ,int) ;
 int FUNC_12 (TYPE_6__*,char*,int) ;
 struct arizona* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_6__*,char*,int) ;
 struct wm5110_priv* FUNC_16 (TYPE_6__*,int,int ) ;
 int FUNC_17 (TYPE_6__*,int *,TYPE_2__*,int) ;
 int FUNC_18 (struct platform_device*,struct wm5110_priv*) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (TYPE_6__*) ;
 int FUNC_21 (int ,TYPE_2__,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* VAR_20 ;
 TYPE_2__* VAR_21 ;
 TYPE_2__* VAR_22 ;
 int * VAR_23 ;
 int FUNC_22 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_24)
{
 struct arizona *VAR_25 = FUNC_13(VAR_24->dev.parent);
 struct wm5110_priv *VAR_26;
 int VAR_27, VAR_28;

 VAR_26 = FUNC_16(&VAR_24->dev, sizeof(struct wm5110_priv),
         VAR_14);
 if (VAR_26 == ((void*)0))
  return -VAR_13;
 FUNC_18(VAR_24, VAR_26);

 if (FUNC_1(VAR_12)) {
  if (!FUNC_14(VAR_25->dev)) {
   VAR_28 = FUNC_9(VAR_25);
   if (VAR_28 < 0)
    return VAR_28;
  }
 }

 VAR_26->core.arizona = VAR_25;
 VAR_26->core.num_inputs = 8;

 for (VAR_27 = 0; VAR_27 < VAR_16; VAR_27++) {
  VAR_26->core.adsp[VAR_27].part = "wm5110";
  VAR_26->core.adsp[VAR_27].num = VAR_27 + 1;
  VAR_26->core.adsp[VAR_27].type = VAR_17;
  VAR_26->core.adsp[VAR_27].dev = VAR_25->dev;
  VAR_26->core.adsp[VAR_27].regmap = VAR_25->regmap;

  VAR_26->core.adsp[VAR_27].base = VAR_0
   + (0x100 * VAR_27);
  VAR_26->core.adsp[VAR_27].mem = VAR_23[VAR_27];
  VAR_26->core.adsp[VAR_27].num_mems
   = FUNC_0(VAR_22);

  VAR_28 = FUNC_22(&VAR_26->core.adsp[VAR_27]);
  if (VAR_28 != 0)
   return VAR_28;
 }

 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_26->fll); VAR_27++)
  VAR_26->fll[VAR_27].vco_mult = 3;

 FUNC_6(VAR_25, 1, VAR_1 - 1,
    VAR_5, VAR_4,
    &VAR_26->fll[0]);
 FUNC_6(VAR_25, 2, VAR_2 - 1,
    VAR_7, VAR_6,
    &VAR_26->fll[1]);


 FUNC_21(VAR_25->regmap, VAR_8,
      VAR_9, 0x11);
 FUNC_21(VAR_25->regmap, VAR_10,
      VAR_11, 0x12);

 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_20); VAR_27++)
  FUNC_5(&VAR_26->core, VAR_27);


 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_21); VAR_27++)
  FUNC_21(VAR_25->regmap, VAR_21[VAR_27],
       VAR_15, VAR_15);

 FUNC_19(&VAR_24->dev);
 FUNC_20(&VAR_24->dev);

 VAR_28 = FUNC_10(VAR_25, VAR_3,
      "ADSP2 Compressed IRQ", VAR_19,
      VAR_26);
 if (VAR_28 != 0) {
  FUNC_12(&VAR_24->dev, "Failed to request DSP IRQ: %d\n", VAR_28);
  return VAR_28;
 }

 VAR_28 = FUNC_11(VAR_25, VAR_3, 1);
 if (VAR_28 != 0)
  FUNC_15(&VAR_24->dev,
    "Failed to set compressed IRQ as a wake source: %d\n",
    VAR_28);

 FUNC_4(VAR_25);

 VAR_28 = FUNC_8(VAR_25);
 if (VAR_28 < 0)
  goto err_dsp_irq;
 VAR_28 = FUNC_7(VAR_25);
 if (VAR_28 < 0)
  goto err_dsp_irq;

 VAR_28 = FUNC_17(&VAR_24->dev,
           &VAR_18,
           VAR_20,
           FUNC_0(VAR_20));
 if (VAR_28 < 0) {
  FUNC_12(&VAR_24->dev, "Failed to register component: %d\n", VAR_28);
  goto err_spk_irqs;
 }

 return VAR_28;

err_spk_irqs:
 FUNC_3(VAR_25);
err_dsp_irq:
 FUNC_11(VAR_25, VAR_3, 0);
 FUNC_2(VAR_25, VAR_3, VAR_26);

 return VAR_28;
}
