
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct dw_dma_chip {int irq; struct device* dev; int regs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dw_dma_chip* FUNC_1 (int ) ;
 struct dw_dma_chip* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct dw_dma_chip* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct dw_dma_chip*) ;

__attribute__((used)) static struct dw_dma_chip *FUNC_8(struct device *VAR_2, struct resource *VAR_3,
 int VAR_4)
{
 struct dw_dma_chip *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_2(-VAR_0);

 VAR_5->irq = VAR_4;
 VAR_5->regs = FUNC_4(VAR_2, VAR_3);
 if (FUNC_3(VAR_5->regs))
  return FUNC_1(VAR_5->regs);

 VAR_6 = FUNC_6(VAR_2, FUNC_0(31));
 if (VAR_6)
  return FUNC_2(VAR_6);

 VAR_5->dev = VAR_2;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  return FUNC_2(VAR_6);

 return VAR_5;
}
