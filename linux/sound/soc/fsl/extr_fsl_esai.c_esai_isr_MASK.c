
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct fsl_esai {int task; scalar_t__ reset_at_xrun; int regmap; struct platform_device* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_16, void *VAR_17)
{
 struct fsl_esai *VAR_18 = (struct fsl_esai *)VAR_17;
 struct platform_device *VAR_19 = VAR_18->pdev;
 u32 VAR_20;
 u32 VAR_21;

 FUNC_2(VAR_18->regmap, VAR_14, &VAR_20);
 FUNC_2(VAR_18->regmap, VAR_15, &VAR_21);

 if ((VAR_21 & (VAR_12 | VAR_11)) &&
     VAR_18->reset_at_xrun) {
  FUNC_0(&VAR_19->dev, "reset module for xrun\n");
  FUNC_3(&VAR_18->task);
 }

 if (VAR_20 & VAR_9)
  FUNC_0(&VAR_19->dev, "isr: Transmission Initialized\n");

 if (VAR_20 & VAR_3)
  FUNC_1(&VAR_19->dev, "isr: Receiving overrun\n");

 if (VAR_20 & VAR_8)
  FUNC_1(&VAR_19->dev, "isr: Transmission underrun\n");

 if (VAR_20 & VAR_10)
  FUNC_0(&VAR_19->dev, "isr: Just transmitted the last slot\n");

 if (VAR_20 & VAR_5)
  FUNC_0(&VAR_19->dev, "isr: Transmission data exception\n");

 if (VAR_20 & VAR_7)
  FUNC_0(&VAR_19->dev, "isr: Transmitting even slots\n");

 if (VAR_20 & VAR_6)
  FUNC_0(&VAR_19->dev, "isr: Transmitting data\n");

 if (VAR_20 & VAR_4)
  FUNC_0(&VAR_19->dev, "isr: Just received the last slot\n");

 if (VAR_20 & VAR_0)
  FUNC_0(&VAR_19->dev, "isr: Receiving data exception\n");

 if (VAR_20 & VAR_2)
  FUNC_0(&VAR_19->dev, "isr: Receiving even slots\n");

 if (VAR_20 & VAR_1)
  FUNC_0(&VAR_19->dev, "isr: Receiving data\n");

 return VAR_13;
}
