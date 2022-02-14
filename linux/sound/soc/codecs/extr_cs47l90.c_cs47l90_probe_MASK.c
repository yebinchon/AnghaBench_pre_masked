
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct madera {int regmap; int regmap_32bit; int dev; int irq_dev; } ;
struct TYPE_18__ {int num_inputs; TYPE_1__* adsp; TYPE_3__* dev; struct madera* madera; } ;
struct cs47l90 {TYPE_6__ core; int * fll; } ;
struct TYPE_16__ {char* part; int num; int rev; int num_mems; int lock_regions; int mem; int base; int regmap; int dev; int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 struct madera* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 struct cs47l90* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int *,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (struct madera*,int ,struct cs47l90*) ;
 int FUNC_12 (TYPE_6__*,int,int ) ;
 int FUNC_13 (TYPE_6__*,int) ;
 int FUNC_14 (struct madera*,int,scalar_t__,int *) ;
 int FUNC_15 (struct madera*,int ,char*,int ,struct cs47l90*) ;
 int FUNC_16 (struct madera*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct cs47l90*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int ,int ,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_20)
{
 struct madera *VAR_21 = FUNC_4(VAR_20->dev.parent);
 struct cs47l90 *VAR_22;
 int VAR_23, VAR_24;

 FUNC_1(FUNC_0(VAR_13) > VAR_9);


 if (!VAR_21->irq_dev) {
  FUNC_2(&VAR_20->dev, "irqchip driver not ready\n");
  return -VAR_3;
 }

 VAR_22 = FUNC_6(&VAR_20->dev, sizeof(struct cs47l90),
          VAR_4);
 if (!VAR_22)
  return -VAR_2;

 FUNC_17(VAR_20, VAR_22);

 VAR_22->core.madera = VAR_21;
 VAR_22->core.dev = &VAR_20->dev;
 VAR_22->core.num_inputs = 10;

 VAR_24 = FUNC_9(&VAR_22->core);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_21, VAR_8,
     "ADSP2 Compressed IRQ", VAR_12,
     VAR_22);
 if (VAR_24 != 0) {
  FUNC_3(&VAR_20->dev, "Failed to request DSP IRQ: %d\n", VAR_24);
  goto error_core;
 }

 VAR_24 = FUNC_16(VAR_21, VAR_8, 1);
 if (VAR_24)
  FUNC_5(&VAR_20->dev, "Failed to set DSP IRQ wake: %d\n", VAR_24);

 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
  VAR_22->core.adsp[VAR_23].part = "cs47l90";
  VAR_22->core.adsp[VAR_23].num = VAR_23 + 1;
  VAR_22->core.adsp[VAR_23].type = VAR_10;
  VAR_22->core.adsp[VAR_23].rev = 2;
  VAR_22->core.adsp[VAR_23].dev = VAR_21->dev;
  VAR_22->core.adsp[VAR_23].regmap = VAR_21->regmap_32bit;

  VAR_22->core.adsp[VAR_23].base = VAR_16[VAR_23];
  VAR_22->core.adsp[VAR_23].mem = VAR_17[VAR_23];
  VAR_22->core.adsp[VAR_23].num_mems =
   FUNC_0(VAR_15);

  VAR_22->core.adsp[VAR_23].lock_regions = VAR_11;

  VAR_24 = FUNC_22(&VAR_22->core.adsp[VAR_23]);

  if (VAR_24 == 0) {
   VAR_24 = FUNC_12(&VAR_22->core, VAR_23,
       VAR_19);
   if (VAR_24 != 0)
    FUNC_23(&VAR_22->core.adsp[VAR_23]);
  }

  if (VAR_24) {
   for (--VAR_23; VAR_23 >= 0; --VAR_23) {
    FUNC_10(&VAR_22->core, VAR_23);
    FUNC_23(&VAR_22->core.adsp[VAR_23]);
   }
   goto error_dsp_irq;
  }
 }

 FUNC_14(VAR_21, 1, VAR_5 - 1,
   &VAR_22->fll[0]);
 FUNC_14(VAR_21, 2, VAR_6 - 1,
   &VAR_22->fll[1]);
 FUNC_14(VAR_21, 4, VAR_7 - 1,
   &VAR_22->fll[2]);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_13); VAR_23++)
  FUNC_13(&VAR_22->core, VAR_23);


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_14); VAR_23++)
  FUNC_21(VAR_21->regmap, VAR_14[VAR_23],
       VAR_0, VAR_0);

 FUNC_19(&VAR_20->dev);
 FUNC_20(&VAR_20->dev);

 VAR_24 = FUNC_7(&VAR_20->dev,
           &VAR_18,
           VAR_13,
           FUNC_0(VAR_13));
 if (VAR_24 < 0) {
  FUNC_3(&VAR_20->dev, "Failed to register component: %d\n", VAR_24);
  goto error_pm_runtime;
 }

 return VAR_24;

error_pm_runtime:
 FUNC_18(&VAR_20->dev);

 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
  FUNC_10(&VAR_22->core, VAR_23);
  FUNC_23(&VAR_22->core.adsp[VAR_23]);
 }
error_dsp_irq:
 FUNC_16(VAR_21, VAR_8, 0);
 FUNC_11(VAR_21, VAR_8, VAR_22);
error_core:
 FUNC_8(&VAR_22->core);

 return VAR_24;
}
