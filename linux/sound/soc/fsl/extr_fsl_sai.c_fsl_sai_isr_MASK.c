
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsl_sai {int regmap; TYPE_2__* pdev; TYPE_1__* soc_data; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {unsigned int reg_offset; } ;


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
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_13, void *VAR_14)
{
 struct fsl_sai *VAR_15 = (struct fsl_sai *)VAR_14;
 unsigned int VAR_16 = VAR_15->soc_data->reg_offset;
 struct device *VAR_17 = &VAR_15->pdev->dev;
 u32 VAR_18, VAR_19, VAR_20;
 bool VAR_21 = 1;






 VAR_20 = (VAR_10 >> VAR_9) << VAR_7;


 FUNC_3(VAR_15->regmap, FUNC_1(VAR_16), &VAR_19);
 VAR_18 = VAR_19 & VAR_20;

 if (VAR_18)
  VAR_21 = 0;
 else
  goto irq_rx;

 if (VAR_18 & VAR_5)
  FUNC_2(VAR_17, "isr: Start of Tx word detected\n");

 if (VAR_18 & VAR_4)
  FUNC_2(VAR_17, "isr: Tx Frame sync error detected\n");

 if (VAR_18 & VAR_0) {
  FUNC_2(VAR_17, "isr: Transmit underrun detected\n");

  VAR_19 |= VAR_1;
 }

 if (VAR_18 & VAR_3)
  FUNC_2(VAR_17, "isr: Enabled transmit FIFO is empty\n");

 if (VAR_18 & VAR_2)
  FUNC_2(VAR_17, "isr: Transmit FIFO watermark has been reached\n");

 VAR_18 &= VAR_8;
 VAR_19 &= ~VAR_6;

 if (VAR_18)
  FUNC_4(VAR_15->regmap, FUNC_1(VAR_16), VAR_18 | VAR_19);

irq_rx:

 FUNC_3(VAR_15->regmap, FUNC_0(VAR_16), &VAR_19);
 VAR_18 = VAR_19 & VAR_20;

 if (VAR_18)
  VAR_21 = 0;
 else
  goto out;

 if (VAR_18 & VAR_5)
  FUNC_2(VAR_17, "isr: Start of Rx word detected\n");

 if (VAR_18 & VAR_4)
  FUNC_2(VAR_17, "isr: Rx Frame sync error detected\n");

 if (VAR_18 & VAR_0) {
  FUNC_2(VAR_17, "isr: Receive overflow detected\n");

  VAR_19 |= VAR_1;
 }

 if (VAR_18 & VAR_3)
  FUNC_2(VAR_17, "isr: Enabled receive FIFO is full\n");

 if (VAR_18 & VAR_2)
  FUNC_2(VAR_17, "isr: Receive FIFO watermark has been reached\n");

 VAR_18 &= VAR_8;
 VAR_19 &= ~VAR_6;

 if (VAR_18)
  FUNC_4(VAR_15->regmap, FUNC_0(VAR_16), VAR_18 | VAR_19);

out:
 if (VAR_21)
  return VAR_12;
 else
  return VAR_11;
}
