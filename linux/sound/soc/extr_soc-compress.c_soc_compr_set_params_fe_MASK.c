
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_8__* card; TYPE_7__* dpcm; TYPE_6__* dai_link; struct snd_soc_dai* cpu_dai; TYPE_2__* pcm; } ;
struct snd_soc_dai {TYPE_4__* driver; } ;
struct snd_pcm_substream {size_t stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_compr_stream {size_t direction; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_params {int dummy; } ;
struct TYPE_16__ {int mutex; } ;
struct TYPE_15__ {int runtime_update; int state; int hw_params; } ;
struct TYPE_14__ {TYPE_5__* compr_ops; } ;
struct TYPE_13__ {int (* set_params ) (struct snd_compr_stream*) ;} ;
struct TYPE_12__ {TYPE_3__* cops; } ;
struct TYPE_11__ {int (* set_params ) (struct snd_compr_stream*,struct snd_compr_params*,struct snd_soc_dai*) ;} ;
struct TYPE_10__ {TYPE_1__* streams; } ;
struct TYPE_9__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_compr_stream*,struct snd_compr_params*) ;
 int FUNC_7 (struct snd_compr_stream*,struct snd_compr_params*,struct snd_soc_dai*) ;
 int FUNC_8 (struct snd_compr_stream*) ;

__attribute__((used)) static int FUNC_9(struct snd_compr_stream *VAR_8,
       struct snd_compr_params *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_8->private_data;
 struct snd_pcm_substream *VAR_11 =
   VAR_10->pcm->streams[VAR_8->direction].substream;
 struct snd_soc_dai *VAR_12 = VAR_10->cpu_dai;
 int VAR_13, VAR_14;

 if (VAR_8->direction == VAR_2)
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_0;

 FUNC_4(&VAR_10->card->mutex, VAR_3);






 FUNC_3(&VAR_10->dpcm[VAR_11->stream].hw_params, 0,
  sizeof(struct snd_pcm_hw_params));

 VAR_10->dpcm[VAR_14].runtime_update = VAR_6;

 VAR_13 = FUNC_0(VAR_10, VAR_14);
 if (VAR_13 < 0)
  goto out;

 VAR_13 = FUNC_1(VAR_10, VAR_14);
 if (VAR_13 < 0)
  goto out;

 if (VAR_12->driver->cops && VAR_12->driver->cops->set_params) {
  VAR_13 = VAR_12->driver->cops->set_params(VAR_8, VAR_9, VAR_12);
  if (VAR_13 < 0)
   goto out;
 }

 VAR_13 = FUNC_6(VAR_8, VAR_9);
 if (VAR_13 < 0)
  goto out;

 if (VAR_10->dai_link->compr_ops && VAR_10->dai_link->compr_ops->set_params) {
  VAR_13 = VAR_10->dai_link->compr_ops->set_params(VAR_8);
  if (VAR_13 < 0)
   goto out;
 }

 FUNC_2(VAR_10, VAR_14, VAR_4);
 VAR_10->dpcm[VAR_14].state = VAR_5;

out:
 VAR_10->dpcm[VAR_14].runtime_update = VAR_7;
 FUNC_5(&VAR_10->card->mutex);
 return VAR_13;
}
