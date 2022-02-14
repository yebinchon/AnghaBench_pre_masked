
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* card; TYPE_2__* dpcm; TYPE_1__* dai_link; int dev; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 int VAR_6, VAR_7 = VAR_4->stream;

 FUNC_4(&VAR_5->card->mutex, VAR_0);
 FUNC_3(VAR_5, VAR_7, VAR_2);

 FUNC_0(VAR_5->dev, "ASoC: hw_free FE %s\n", VAR_5->dai_link->name);


 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 < 0)
  FUNC_1(VAR_5->dev,"ASoC: hw_free FE %s failed\n",
   VAR_5->dai_link->name);



 VAR_6 = FUNC_2(VAR_5, VAR_7);

 VAR_5->dpcm[VAR_7].state = VAR_1;
 FUNC_3(VAR_5, VAR_7, VAR_3);

 FUNC_5(&VAR_5->card->mutex);
 return 0;
}
