
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_4__* card; TYPE_3__* dpcm; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_2__* driver; } ;
struct snd_compr_stream {scalar_t__ direction; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_8__ {int mutex; } ;
struct TYPE_7__ {int runtime_update; int state; } ;
struct TYPE_6__ {TYPE_1__* cops; } ;
struct TYPE_5__ {int (* trigger ) (struct snd_compr_stream*,int,struct snd_soc_dai*) ;} ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_soc_pcm_runtime*,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_compr_stream*,int) ;
 int FUNC_4 (struct snd_compr_stream*,int,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_11, int VAR_12)
{
 struct snd_soc_pcm_runtime *VAR_13 = VAR_11->private_data;
 struct snd_soc_dai *VAR_14 = VAR_13->cpu_dai;
 int VAR_15, VAR_16;

 if (VAR_12 == VAR_4 ||
     VAR_12 == VAR_3)
  return FUNC_3(VAR_11, VAR_12);

 if (VAR_11->direction == VAR_2)
  VAR_16 = VAR_1;
 else
  VAR_16 = VAR_0;

 FUNC_1(&VAR_13->card->mutex, VAR_5);

 if (VAR_14->driver->cops && VAR_14->driver->cops->trigger) {
  VAR_15 = VAR_14->driver->cops->trigger(VAR_11, VAR_12, VAR_14);
  if (VAR_15 < 0)
   goto out;
 }

 VAR_15 = FUNC_3(VAR_11, VAR_12);
 if (VAR_15 < 0)
  goto out;

 VAR_13->dpcm[VAR_16].runtime_update = VAR_9;

 VAR_15 = FUNC_0(VAR_13, VAR_16, VAR_12);

 switch (VAR_12) {
 case 130:
 case 131:
 case 132:
  VAR_13->dpcm[VAR_16].state = VAR_7;
  break;
 case 129:
 case 128:
  VAR_13->dpcm[VAR_16].state = VAR_8;
  break;
 case 133:
  VAR_13->dpcm[VAR_16].state = VAR_6;
  break;
 }

out:
 VAR_13->dpcm[VAR_16].runtime_update = VAR_10;
 FUNC_2(&VAR_13->card->mutex);
 return VAR_15;
}
