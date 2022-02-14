
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_5__* card; int delayed_work; scalar_t__ pop_wait; TYPE_4__* dai_link; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_2__* driver; } ;
struct snd_compr_stream {scalar_t__ direction; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_params {int dummy; } ;
struct TYPE_10__ {int pcm_mutex; int pcm_subclass; } ;
struct TYPE_9__ {TYPE_3__* compr_ops; } ;
struct TYPE_8__ {int (* set_params ) (struct snd_compr_stream*) ;} ;
struct TYPE_7__ {TYPE_1__* cops; } ;
struct TYPE_6__ {int (* set_params ) (struct snd_compr_stream*,struct snd_compr_params*,struct snd_soc_dai*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int ,int ) ;
 int FUNC_4 (struct snd_compr_stream*,struct snd_compr_params*) ;
 int FUNC_5 (struct snd_compr_stream*,struct snd_compr_params*,struct snd_soc_dai*) ;
 int FUNC_6 (struct snd_compr_stream*) ;

__attribute__((used)) static int FUNC_7(struct snd_compr_stream *VAR_4,
    struct snd_compr_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->cpu_dai;
 int VAR_8;

 FUNC_1(&VAR_6->card->pcm_mutex, VAR_6->card->pcm_subclass);
 if (VAR_7->driver->cops && VAR_7->driver->cops->set_params) {
  VAR_8 = VAR_7->driver->cops->set_params(VAR_4, VAR_5, VAR_7);
  if (VAR_8 < 0)
   goto err;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (VAR_8 < 0)
  goto err;

 if (VAR_6->dai_link->compr_ops && VAR_6->dai_link->compr_ops->set_params) {
  VAR_8 = VAR_6->dai_link->compr_ops->set_params(VAR_4);
  if (VAR_8 < 0)
   goto err;
 }

 if (VAR_4->direction == VAR_2)
  FUNC_3(VAR_6, VAR_1,
       VAR_3);
 else
  FUNC_3(VAR_6, VAR_0,
       VAR_3);


 VAR_6->pop_wait = 0;
 FUNC_2(&VAR_6->card->pcm_mutex);

 FUNC_0(&VAR_6->delayed_work);

 return 0;

err:
 FUNC_2(&VAR_6->card->pcm_mutex);
 return VAR_8;
}
