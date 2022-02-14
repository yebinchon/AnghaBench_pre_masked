
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_5__* card; TYPE_2__* dai_link; int dev; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_4__* driver; int name; int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_10__ {int pcm_mutex; int pcm_subclass; } ;
struct TYPE_9__ {TYPE_3__* cops; } ;
struct TYPE_8__ {int (* startup ) (struct snd_compr_stream*,struct snd_soc_dai*) ;int (* shutdown ) (struct snd_compr_stream*,struct snd_soc_dai*) ;} ;
struct TYPE_7__ {int name; TYPE_1__* compr_ops; } ;
struct TYPE_6__ {int (* startup ) (struct snd_compr_stream*) ;} ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_compr_stream*,struct snd_soc_component*) ;
 int FUNC_5 (struct snd_compr_stream*,struct snd_soc_component**) ;
 int FUNC_6 (struct snd_compr_stream*,struct snd_soc_dai*) ;
 int FUNC_7 (struct snd_compr_stream*) ;
 int FUNC_8 (struct snd_compr_stream*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_compr_stream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct snd_soc_component *VAR_2;
 struct snd_soc_dai *VAR_3 = VAR_1->cpu_dai;
 int VAR_4;

 FUNC_1(&VAR_1->card->pcm_mutex, VAR_1->card->pcm_subclass);

 if (VAR_3->driver->cops && VAR_3->driver->cops->startup) {
  VAR_4 = VAR_3->driver->cops->startup(VAR_0, VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev,
    "Compress ASoC: can't open interface %s: %d\n",
    VAR_3->name, VAR_4);
   goto out;
  }
 }

 VAR_4 = FUNC_5(VAR_0, &VAR_2);
 if (VAR_4 < 0)
  goto machine_err;

 if (VAR_1->dai_link->compr_ops && VAR_1->dai_link->compr_ops->startup) {
  VAR_4 = VAR_1->dai_link->compr_ops->startup(VAR_0);
  if (VAR_4 < 0) {
   FUNC_0(VAR_1->dev,
    "Compress ASoC: %s startup failed: %d\n",
    VAR_1->dai_link->name, VAR_4);
   goto machine_err;
  }
 }

 FUNC_3(VAR_1, VAR_0->direction);

 FUNC_2(&VAR_1->card->pcm_mutex);

 return 0;

machine_err:
 FUNC_4(VAR_0, VAR_2);

 if (VAR_3->driver->cops && VAR_3->driver->cops->shutdown)
  VAR_3->driver->cops->shutdown(VAR_0, VAR_3);
out:
 FUNC_2(&VAR_1->card->pcm_mutex);
 return VAR_4;
}
