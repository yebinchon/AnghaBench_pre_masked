
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {scalar_t__ dma_dev; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ dev; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct sst_dsp *VAR_2 = (struct sst_dsp *)VAR_1;

 return VAR_0->device->dev == VAR_2->dma_dev;
}
