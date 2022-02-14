
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* card; struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {TYPE_2__* driver; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_6__ {int pcm_mutex; int pcm_subclass; } ;
struct TYPE_5__ {TYPE_1__* cops; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_compr_stream*,int,struct snd_soc_dai*) ;} ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_dai*,int,int ) ;
 int FUNC_3 (struct snd_compr_stream*,int) ;
 int FUNC_4 (struct snd_compr_stream*,int,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_0, int VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->codec_dai;
 struct snd_soc_dai *VAR_4 = VAR_2->cpu_dai;
 int VAR_5;

 FUNC_0(&VAR_2->card->pcm_mutex, VAR_2->card->pcm_subclass);

 VAR_5 = FUNC_3(VAR_0, VAR_1);
 if (VAR_5 < 0)
  goto out;

 if (VAR_4->driver->cops && VAR_4->driver->cops->trigger)
  VAR_4->driver->cops->trigger(VAR_0, VAR_1, VAR_4);

 switch (VAR_1) {
 case 129:
  FUNC_2(VAR_3, 0, VAR_0->direction);
  break;
 case 128:
  FUNC_2(VAR_3, 1, VAR_0->direction);
  break;
 }

out:
 FUNC_1(&VAR_2->card->pcm_mutex);
 return VAR_5;
}
