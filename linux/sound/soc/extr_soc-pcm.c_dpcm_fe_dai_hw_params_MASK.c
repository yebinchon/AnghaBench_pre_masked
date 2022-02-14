
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* card; TYPE_2__* dpcm; int dev; TYPE_1__* dai_link; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_5__ {int state; int hw_params; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,size_t) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_5 (int *,struct snd_pcm_hw_params*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_4,
     struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 int VAR_7, VAR_8 = VAR_4->stream;

 FUNC_6(&VAR_6->card->mutex, VAR_0);
 FUNC_4(VAR_6, VAR_8, VAR_2);

 FUNC_5(&VAR_6->dpcm[VAR_4->stream].hw_params, VAR_5,
   sizeof(struct snd_pcm_hw_params));
 VAR_7 = FUNC_3(VAR_6, VAR_4->stream);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev,"ASoC: hw_params BE failed %d\n", VAR_7);
  goto out;
 }

 FUNC_0(VAR_6->dev, "ASoC: hw_params FE %s rate %d chan %x fmt %d\n",
   VAR_6->dai_link->name, FUNC_10(VAR_5),
   FUNC_8(VAR_5), FUNC_9(VAR_5));


 VAR_7 = FUNC_11(VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev,"ASoC: hw_params FE failed %d\n", VAR_7);
  FUNC_2(VAR_6, VAR_8);
  } else
  VAR_6->dpcm[VAR_8].state = VAR_1;

out:
 FUNC_4(VAR_6, VAR_8, VAR_3);
 FUNC_7(&VAR_6->card->mutex);
 return VAR_7;
}
