
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
struct cs47l35 {TYPE_6__ core; int fll; } ;
struct TYPE_16__ {char* part; int num; int rev; int num_mems; int mem; int base; int regmap; int dev; int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 struct madera* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 struct cs47l35* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int *,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct madera*,int ,struct cs47l35*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int) ;
 int FUNC_13 (struct madera*,int,scalar_t__,int *) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (struct madera*,int ,char*,int ,struct cs47l35*) ;
 int FUNC_16 (struct madera*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct cs47l35*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int ,int ,int ,int ) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_16)
{
 struct madera *VAR_17 = FUNC_4(VAR_16->dev.parent);
 struct cs47l35 *VAR_18;
 int VAR_19, VAR_20;

 FUNC_1(FUNC_0(VAR_10) > VAR_7);


 if (!VAR_17->irq_dev) {
  FUNC_2(&VAR_16->dev, "irqchip driver not ready\n");
  return -VAR_3;
 }

 VAR_18 = FUNC_6(&VAR_16->dev, sizeof(struct cs47l35), VAR_4);
 if (!VAR_18)
  return -VAR_2;
 FUNC_17(VAR_16, VAR_18);

 VAR_18->core.madera = VAR_17;
 VAR_18->core.dev = &VAR_16->dev;
 VAR_18->core.num_inputs = 4;

 VAR_20 = FUNC_9(&VAR_18->core);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_14(&VAR_18->core);
 if (VAR_20)
  goto error_core;

 VAR_20 = FUNC_15(VAR_17, VAR_6,
     "ADSP2 Compressed IRQ", VAR_9,
     VAR_18);
 if (VAR_20) {
  FUNC_3(&VAR_16->dev, "Failed to request DSP IRQ: %d\n", VAR_20);
  goto error_overheat;
 }

 VAR_20 = FUNC_16(VAR_17, VAR_6, 1);
 if (VAR_20)
  FUNC_5(&VAR_16->dev, "Failed to set DSP IRQ wake: %d\n", VAR_20);

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  VAR_18->core.adsp[VAR_19].part = "cs47l35";
  VAR_18->core.adsp[VAR_19].num = VAR_19 + 1;
  VAR_18->core.adsp[VAR_19].type = VAR_8;
  VAR_18->core.adsp[VAR_19].rev = 1;
  VAR_18->core.adsp[VAR_19].dev = VAR_17->dev;
  VAR_18->core.adsp[VAR_19].regmap = VAR_17->regmap_32bit;

  VAR_18->core.adsp[VAR_19].base = VAR_15[VAR_19];
  VAR_18->core.adsp[VAR_19].mem = VAR_13[VAR_19];
  VAR_18->core.adsp[VAR_19].num_mems =
   FUNC_0(VAR_12);

  VAR_20 = FUNC_22(&VAR_18->core.adsp[VAR_19]);
  if (VAR_20) {
   for (--VAR_19; VAR_19 >= 0; --VAR_19)
    FUNC_23(&VAR_18->core.adsp[VAR_19]);
   goto error_dsp_irq;
  }
 }

 FUNC_13(VAR_17, 1, VAR_5 - 1, &VAR_18->fll);

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_10); VAR_19++)
  FUNC_12(&VAR_18->core, VAR_19);


 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_11); VAR_19++)
  FUNC_21(VAR_17->regmap, VAR_11[VAR_19],
       VAR_0, VAR_0);

 FUNC_19(&VAR_16->dev);
 FUNC_20(&VAR_16->dev);

 VAR_20 = FUNC_7(&VAR_16->dev,
           &VAR_14,
           VAR_10,
           FUNC_0(VAR_10));
 if (VAR_20 < 0) {
  FUNC_3(&VAR_16->dev, "Failed to register component: %d\n", VAR_20);
  goto error_pm_runtime;
 }

 return VAR_20;

error_pm_runtime:
 FUNC_18(&VAR_16->dev);

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++)
  FUNC_23(&VAR_18->core.adsp[VAR_19]);
error_dsp_irq:
 FUNC_16(VAR_17, VAR_6, 0);
 FUNC_10(VAR_17, VAR_6, VAR_18);
error_overheat:
 FUNC_11(&VAR_18->core);
error_core:
 FUNC_8(&VAR_18->core);

 return VAR_20;
}
