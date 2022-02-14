
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {size_t stream; } ;
struct dmaengine_pcm {TYPE_2__** chan; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct device* dev; } ;



__attribute__((used)) static struct device *FUNC_0(struct dmaengine_pcm *VAR_0,
 struct snd_pcm_substream *VAR_1)
{
 if (!VAR_0->chan[VAR_1->stream])
  return ((void*)0);

 return VAR_0->chan[VAR_1->stream]->device->dev;
}
