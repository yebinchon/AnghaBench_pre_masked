
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int irq_lock; scalar_t__ substream; int regmap; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
typedef scalar_t__ snd_pcm_state_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct stm32_sai_sub_data*) ;
 int VAR_14 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_15, void *VAR_16)
{
 struct stm32_sai_sub_data *VAR_17 = (struct stm32_sai_sub_data *)VAR_16;
 struct platform_device *VAR_18 = VAR_17->pdev;
 unsigned int VAR_19, VAR_20, VAR_21;
 snd_pcm_state_t VAR_22 = VAR_10;

 FUNC_3(VAR_17->regmap, VAR_13, &VAR_20);
 FUNC_3(VAR_17->regmap, VAR_14, &VAR_19);

 VAR_21 = VAR_19 & VAR_20;
 if (!VAR_21)
  return VAR_1;

 FUNC_4(VAR_17->regmap, VAR_12, VAR_2,
     VAR_2);

 if (!VAR_17->substream) {
  FUNC_2(&VAR_18->dev, "Device stopped. Spurious IRQ 0x%x\n", VAR_19);
  return VAR_1;
 }

 if (VAR_21 & VAR_7) {
  FUNC_2(&VAR_18->dev, "IRQ %s\n",
   FUNC_0(VAR_17) ? "underrun" : "overrun");
  VAR_22 = VAR_11;
 }

 if (VAR_21 & VAR_6)
  FUNC_1(&VAR_18->dev, "IRQ mute detected\n");

 if (VAR_21 & VAR_8) {
  FUNC_2(&VAR_18->dev, "IRQ wrong clock configuration\n");
  VAR_22 = VAR_9;
 }

 if (VAR_21 & VAR_4)
  FUNC_2(&VAR_18->dev, "IRQ Codec not ready\n");

 if (VAR_21 & VAR_3) {
  FUNC_2(&VAR_18->dev, "IRQ Anticipated frame synchro\n");
  VAR_22 = VAR_11;
 }

 if (VAR_21 & VAR_5) {
  FUNC_2(&VAR_18->dev, "IRQ Late frame synchro\n");
  VAR_22 = VAR_11;
 }

 FUNC_6(&VAR_17->irq_lock);
 if (VAR_22 != VAR_10 && VAR_17->substream)
  FUNC_5(VAR_17->substream);
 FUNC_7(&VAR_17->irq_lock);

 return VAR_0;
}
