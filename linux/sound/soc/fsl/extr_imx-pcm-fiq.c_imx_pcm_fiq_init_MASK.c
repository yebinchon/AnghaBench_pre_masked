
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct imx_pcm_fiq_params {TYPE_2__* dma_params_rx; TYPE_1__* dma_params_tx; scalar_t__ base; int irq; } ;
struct TYPE_4__ {int maxburst; } ;
struct TYPE_3__ {int maxburst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

int FUNC_5(struct platform_device *VAR_5,
  struct imx_pcm_fiq_params *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "failed to claim fiq: %d", VAR_7);
  return VAR_7;
 }

 FUNC_3(VAR_6->irq, 1);
 VAR_4 = VAR_6->irq;

 VAR_1 = VAR_6->irq;

 VAR_3 = (unsigned long)VAR_6->base;

 VAR_6->dma_params_tx->maxburst = 4;
 VAR_6->dma_params_rx->maxburst = 6;

 VAR_7 = FUNC_2(&VAR_5->dev, &VAR_2,
           ((void*)0), 0);
 if (VAR_7)
  goto failed_register;

 return 0;

failed_register:
 FUNC_3(VAR_4, 0);
 FUNC_4(&VAR_0);

 return VAR_7;
}
