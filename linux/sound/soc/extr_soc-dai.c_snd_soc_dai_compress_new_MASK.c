
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_dai {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* compress_new ) (struct snd_soc_pcm_runtime*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_pcm_runtime*,int) ;

int FUNC_1(struct snd_soc_dai *VAR_1,
        struct snd_soc_pcm_runtime *VAR_2, int VAR_3)
{
 if (VAR_1->driver->compress_new)
  return VAR_1->driver->compress_new(VAR_2, VAR_3);
 return -VAR_0;
}
