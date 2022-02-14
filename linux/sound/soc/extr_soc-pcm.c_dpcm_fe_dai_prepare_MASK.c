
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
struct TYPE_5__ {int state; int be_clients; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_6->private_data;
 int VAR_8 = VAR_6->stream, VAR_9 = 0;

 FUNC_6(&VAR_7->card->mutex, VAR_1);

 FUNC_0(VAR_7->dev, "ASoC: prepare FE %s\n", VAR_7->dai_link->name);

 FUNC_4(VAR_7, VAR_8, VAR_4);


 if (FUNC_5(&VAR_7->dpcm[VAR_8].be_clients)) {
  FUNC_1(VAR_7->dev, "ASoC: no backend DAIs enabled for %s\n",
    VAR_7->dai_link->name);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_6->stream);
 if (VAR_9 < 0)
  goto out;


 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7->dev,"ASoC: prepare FE %s failed\n",
   VAR_7->dai_link->name);
  goto out;
 }


 FUNC_3(VAR_7, VAR_8, VAR_2);
 VAR_7->dpcm[VAR_8].state = VAR_3;

out:
 FUNC_4(VAR_7, VAR_8, VAR_5);
 FUNC_7(&VAR_7->card->mutex);

 return VAR_9;
}
