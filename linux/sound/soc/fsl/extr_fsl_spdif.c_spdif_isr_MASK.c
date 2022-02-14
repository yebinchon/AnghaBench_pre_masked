
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {struct platform_device* pdev; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fsl_spdif_priv*) ;
 int FUNC_2 (struct fsl_spdif_priv*) ;
 int FUNC_3 (struct fsl_spdif_priv*) ;
 int FUNC_4 (struct fsl_spdif_priv*) ;
 int FUNC_5 (struct fsl_spdif_priv*) ;
 int FUNC_6 (struct fsl_spdif_priv*,char) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_19, void *VAR_20)
{
 struct fsl_spdif_priv *VAR_21 = (struct fsl_spdif_priv *)VAR_20;
 struct platform_device *VAR_22 = VAR_21->pdev;
 u32 VAR_23;

 VAR_23 = FUNC_1(VAR_21);

 if (VAR_23 & VAR_2)
  FUNC_2(VAR_21);

 if (VAR_23 & VAR_11)
  FUNC_0(&VAR_22->dev, "isr: Tx FIFO under/overrun\n");

 if (VAR_23 & VAR_10)
  FUNC_0(&VAR_22->dev, "isr: Tx FIFO resync\n");

 if (VAR_23 & VAR_1)
  FUNC_0(&VAR_22->dev, "isr: cstatus new\n");

 if (VAR_23 & VAR_17)
  FUNC_0(&VAR_22->dev, "isr: validity flag no good\n");

 if (VAR_23 & VAR_9)
  FUNC_3(VAR_21);

 if (VAR_23 & VAR_0)
  FUNC_0(&VAR_22->dev, "isr: receiver found parity bit error\n");

 if (VAR_23 & VAR_15)
  FUNC_6(VAR_21, 'U');

 if (VAR_23 & VAR_16)
  FUNC_0(&VAR_22->dev, "isr: U Channel receive register overrun\n");

 if (VAR_23 & VAR_4)
  FUNC_6(VAR_21, 'Q');

 if (VAR_23 & VAR_5)
  FUNC_0(&VAR_22->dev, "isr: Q Channel receive register overrun\n");

 if (VAR_23 & VAR_14)
  FUNC_5(VAR_21);

 if (VAR_23 & VAR_13)
  FUNC_4(VAR_21);

 if (VAR_23 & VAR_8)
  FUNC_0(&VAR_22->dev, "isr: Rx FIFO under/overrun\n");

 if (VAR_23 & VAR_7)
  FUNC_0(&VAR_22->dev, "isr: Rx FIFO resync\n");

 if (VAR_23 & VAR_3)
  FUNC_2(VAR_21);


 if (VAR_23 & VAR_12)
  FUNC_0(&VAR_22->dev, "isr: Tx FIFO empty\n");


 if (VAR_23 & VAR_6)
  FUNC_0(&VAR_22->dev, "isr: Rx FIFO full\n");

 return VAR_18;
}
