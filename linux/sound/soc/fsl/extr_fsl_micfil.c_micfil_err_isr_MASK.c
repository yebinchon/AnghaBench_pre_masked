
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct fsl_micfil {int regmap; struct platform_device* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct fsl_micfil *VAR_7 = (struct fsl_micfil *)VAR_6;
 struct platform_device *VAR_8 = VAR_7->pdev;
 u32 VAR_9;

 FUNC_1(VAR_7->regmap, VAR_4, &VAR_9);

 if (VAR_9 & VAR_1)
  FUNC_0(&VAR_8->dev, "isr: Decimation Filter is running\n");

 if (VAR_9 & VAR_2)
  FUNC_0(&VAR_8->dev, "isr: FIR Filter Data ready\n");

 if (VAR_9 & VAR_3) {
  FUNC_0(&VAR_8->dev, "isr: ipg_clk_app is too low\n");
  FUNC_2(VAR_7->regmap, VAR_4,
      VAR_3, 1);
 }

 return VAR_0;
}
