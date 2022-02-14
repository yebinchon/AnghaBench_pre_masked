
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct madera {int regmap; int regmap_32bit; int dev; int irq_dev; } ;
struct TYPE_20__ {int num_inputs; TYPE_1__* adsp; TYPE_3__* dev; struct madera* madera; } ;
struct cs47l15 {TYPE_6__ core; int * fll; } ;
struct TYPE_18__ {char* part; int num; int rev; int num_mems; int lock_regions; int * mem; int base; int regmap; int dev; int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 struct madera* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 struct cs47l15* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int *,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,int ) ;
 int FUNC_11 (struct madera*,int ,struct cs47l15*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,int ,int ) ;
 int FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (struct madera*,int,scalar_t__,int *) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (struct madera*,int ,char*,int ,struct cs47l15*) ;
 int FUNC_18 (struct madera*,int ,int) ;
 int FUNC_19 (struct platform_device*,struct cs47l15*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (int ,int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_19)
{
 struct madera *VAR_20 = FUNC_4(VAR_19->dev.parent);
 struct cs47l15 *VAR_21;
 int VAR_22, VAR_23;

 FUNC_1(FUNC_0(VAR_14) > VAR_8);


 if (!VAR_20->irq_dev) {
  FUNC_2(&VAR_19->dev, "irqchip driver not ready\n");
  return -VAR_2;
 }

 VAR_21 = FUNC_6(&VAR_19->dev, sizeof(struct cs47l15),
          VAR_3);
 if (!VAR_21)
  return -VAR_1;

 FUNC_19(VAR_19, VAR_21);

 VAR_21->core.madera = VAR_20;
 VAR_21->core.dev = &VAR_19->dev;
 VAR_21->core.num_inputs = 4;

 VAR_23 = FUNC_9(&VAR_21->core);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_16(&VAR_21->core);
 if (VAR_23)
  goto error_core;

 VAR_23 = FUNC_17(VAR_20, VAR_7,
     "ADSP2 Compressed IRQ", VAR_13,
     VAR_21);
 if (VAR_23 != 0) {
  FUNC_3(&VAR_19->dev, "Failed to request DSP IRQ: %d\n", VAR_23);
  goto error_overheat;
 }

 VAR_23 = FUNC_18(VAR_20, VAR_7, 1);
 if (VAR_23)
  FUNC_5(&VAR_19->dev, "Failed to set DSP IRQ wake: %d\n", VAR_23);

 VAR_21->core.adsp[0].part = "cs47l15";
 VAR_21->core.adsp[0].num = 1;
 VAR_21->core.adsp[0].type = VAR_9;
 VAR_21->core.adsp[0].rev = 2;
 VAR_21->core.adsp[0].dev = VAR_20->dev;
 VAR_21->core.adsp[0].regmap = VAR_20->regmap_32bit;

 VAR_21->core.adsp[0].base = VAR_4;
 VAR_21->core.adsp[0].mem = VAR_16;
 VAR_21->core.adsp[0].num_mems = FUNC_0(VAR_16);

 VAR_21->core.adsp[0].lock_regions =
  VAR_10 | VAR_11 | VAR_12;

 VAR_23 = FUNC_24(&VAR_21->core.adsp[0]);
 if (VAR_23 != 0)
  goto error_dsp_irq;

 VAR_23 = FUNC_13(&VAR_21->core, 0, VAR_18);
 if (VAR_23)
  goto error_adsp;

 FUNC_15(VAR_20, 1, VAR_5 - 1,
   &VAR_21->fll[0]);
 FUNC_15(VAR_20, 4, VAR_6 - 1,
   &VAR_21->fll[1]);

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_14); VAR_22++)
  FUNC_14(&VAR_21->core, VAR_22);


 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_15); VAR_22++)
  FUNC_23(VAR_20->regmap, VAR_15[VAR_22],
       VAR_0, VAR_0);

 FUNC_21(&VAR_19->dev);
 FUNC_22(&VAR_19->dev);

 VAR_23 = FUNC_7(&VAR_19->dev,
           &VAR_17,
           VAR_14,
           FUNC_0(VAR_14));
 if (VAR_23 < 0) {
  FUNC_3(&VAR_19->dev, "Failed to register component: %d\n", VAR_23);
  goto error_pm_runtime;
 }

 return VAR_23;

error_pm_runtime:
 FUNC_20(&VAR_19->dev);
 FUNC_10(&VAR_21->core, 0);
error_adsp:
 FUNC_25(&VAR_21->core.adsp[0]);
error_dsp_irq:
 FUNC_18(VAR_20, VAR_7, 0);
 FUNC_11(VAR_20, VAR_7, VAR_21);
error_overheat:
 FUNC_12(&VAR_21->core);
error_core:
 FUNC_8(&VAR_21->core);

 return VAR_23;
}
