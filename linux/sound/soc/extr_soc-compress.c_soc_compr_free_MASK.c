
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pop_wait; TYPE_5__* card; int pmdown_time; int delayed_work; TYPE_2__* dai_link; struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_4__* driver; scalar_t__ rate; int active; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_10__ {int pcm_mutex; int pcm_subclass; } ;
struct TYPE_9__ {TYPE_3__* cops; } ;
struct TYPE_8__ {int (* shutdown ) (struct snd_compr_stream*,struct snd_soc_dai*) ;} ;
struct TYPE_7__ {TYPE_1__* compr_ops; } ;
struct TYPE_6__ {int (* shutdown ) (struct snd_compr_stream*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int,int ) ;
 int FUNC_5 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_6 (struct snd_soc_pcm_runtime*,int) ;
 scalar_t__ FUNC_7 (struct snd_soc_pcm_runtime*) ;
 int FUNC_8 (struct snd_compr_stream*,int *) ;
 int FUNC_9 (struct snd_compr_stream*) ;
 int FUNC_10 (struct snd_compr_stream*,struct snd_soc_dai*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct snd_compr_stream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->cpu_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->codec_dai;
 int VAR_9;

 FUNC_1(&VAR_6->card->pcm_mutex, VAR_6->card->pcm_subclass);

 if (VAR_5->direction == VAR_2)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 FUNC_6(VAR_6, VAR_9);

 FUNC_4(VAR_8, 1, VAR_5->direction);

 if (!VAR_7->active)
  VAR_7->rate = 0;

 if (!VAR_8->active)
  VAR_8->rate = 0;

 if (VAR_6->dai_link->compr_ops && VAR_6->dai_link->compr_ops->shutdown)
  VAR_6->dai_link->compr_ops->shutdown(VAR_5);

 FUNC_8(VAR_5, ((void*)0));

 if (VAR_7->driver->cops && VAR_7->driver->cops->shutdown)
  VAR_7->driver->cops->shutdown(VAR_5, VAR_7);

 if (VAR_5->direction == VAR_2) {
  if (FUNC_7(VAR_6)) {
   FUNC_5(VAR_6,
        VAR_1,
        VAR_3);
  } else {
   VAR_6->pop_wait = 1;
   FUNC_3(VAR_4,
        &VAR_6->delayed_work,
        FUNC_0(VAR_6->pmdown_time));
  }
 } else {

  FUNC_5(VAR_6,
       VAR_0,
       VAR_3);
 }

 FUNC_2(&VAR_6->card->pcm_mutex);
 return 0;
}
