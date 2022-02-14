
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp_device {int thread; } ;
struct sst_dsp {int irq; int dev; TYPE_1__* ops; struct sst_dsp_device* sst_dev; } ;
struct TYPE_2__ {int irq_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,char*,struct sst_dsp*) ;

int FUNC_2(struct sst_dsp *VAR_1)
{
 struct sst_dsp_device *VAR_2 = VAR_1->sst_dev;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1->irq, VAR_1->ops->irq_handler,
  VAR_2->thread, VAR_0, "AudioDSP", VAR_1);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "unable to grab threaded IRQ %d, disabling device\n",
          VAR_1->irq);

 return VAR_3;
}
