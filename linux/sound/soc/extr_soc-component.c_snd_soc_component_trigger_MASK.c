
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {TYPE_2__* driver; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_pcm_substream*,int) ;} ;


 int FUNC_0 (struct snd_pcm_substream*,int) ;

int FUNC_1(struct snd_soc_component *VAR_0,
         struct snd_pcm_substream *VAR_1,
         int VAR_2)
{
 if (VAR_0->driver->ops &&
     VAR_0->driver->ops->trigger)
  return VAR_0->driver->ops->trigger(VAR_1, VAR_2);

 return 0;
}
