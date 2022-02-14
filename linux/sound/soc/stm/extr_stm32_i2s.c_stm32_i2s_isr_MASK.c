
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct stm32_i2s_data {int irq_lock; scalar_t__ substream; int regmap; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (int ,int ,int ,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct stm32_i2s_data *VAR_11 = (struct stm32_i2s_data *)VAR_10;
 struct platform_device *VAR_12 = VAR_11->pdev;
 u32 VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_11->regmap, VAR_8, &VAR_13);
 FUNC_1(VAR_11->regmap, VAR_6, &VAR_14);

 VAR_15 = VAR_13 & VAR_14;
 if (!VAR_15) {
  FUNC_0(&VAR_12->dev, "Spurious IRQ sr=0x%08x, ier=0x%08x\n",
   VAR_13, VAR_14);
  return VAR_5;
 }

 FUNC_2(VAR_11->regmap, VAR_7,
     VAR_0, VAR_15);

 if (VAR_15 & VAR_1) {
  FUNC_0(&VAR_12->dev, "Overrun\n");
  VAR_16 = 1;
 }

 if (VAR_15 & VAR_3) {
  FUNC_0(&VAR_12->dev, "Underrun\n");
  VAR_16 = 1;
 }

 if (VAR_15 & VAR_2)
  FUNC_0(&VAR_12->dev, "Frame error\n");

 FUNC_4(&VAR_11->irq_lock);
 if (VAR_16 && VAR_11->substream)
  FUNC_3(VAR_11->substream);
 FUNC_5(&VAR_11->irq_lock);

 return VAR_4;
}
