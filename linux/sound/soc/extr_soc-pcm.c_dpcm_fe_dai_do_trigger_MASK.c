
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dpcm; TYPE_1__* dai_link; int dev; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
typedef enum snd_soc_dpcm_trigger { ____Placeholder_snd_soc_dpcm_trigger } snd_soc_dpcm_trigger ;
struct TYPE_4__ {int runtime_update; int state; } ;
struct TYPE_3__ {int* trigger; int name; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int,int) ;
 int FUNC_3 (struct snd_pcm_substream*,int) ;
 int FUNC_4 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6, int VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 int VAR_9 = VAR_6->stream, VAR_10;
 enum snd_soc_dpcm_trigger VAR_11 = VAR_8->dai_link->trigger[VAR_9];

 VAR_8->dpcm[VAR_9].runtime_update = VAR_4;

 switch (VAR_11) {
 case 128:


  FUNC_0(VAR_8->dev, "ASoC: pre trigger FE %s cmd %d\n",
    VAR_8->dai_link->name, VAR_7);

  VAR_10 = FUNC_4(VAR_6, VAR_7);
  if (VAR_10 < 0) {
   FUNC_1(VAR_8->dev,"ASoC: trigger FE failed %d\n", VAR_10);
   goto out;
  }

  VAR_10 = FUNC_2(VAR_8, VAR_6->stream, VAR_7);
  break;
 case 129:


  VAR_10 = FUNC_2(VAR_8, VAR_6->stream, VAR_7);
  if (VAR_10 < 0) {
   FUNC_1(VAR_8->dev,"ASoC: trigger FE failed %d\n", VAR_10);
   goto out;
  }

  FUNC_0(VAR_8->dev, "ASoC: post trigger FE %s cmd %d\n",
    VAR_8->dai_link->name, VAR_7);

  VAR_10 = FUNC_4(VAR_6, VAR_7);
  break;
 case 130:


  FUNC_0(VAR_8->dev, "ASoC: bespoke trigger FE %s cmd %d\n",
    VAR_8->dai_link->name, VAR_7);

  VAR_10 = FUNC_3(VAR_6, VAR_7);
  if (VAR_10 < 0) {
   FUNC_1(VAR_8->dev,"ASoC: trigger FE failed %d\n", VAR_10);
   goto out;
  }
  break;
 default:
  FUNC_1(VAR_8->dev, "ASoC: invalid trigger cmd %d for %s\n", VAR_7,
    VAR_8->dai_link->name);
  VAR_10 = -VAR_0;
  goto out;
 }

 switch (VAR_7) {
 case 133:
 case 134:
 case 135:
  VAR_8->dpcm[VAR_9].state = VAR_2;
  break;
 case 132:
 case 131:
  VAR_8->dpcm[VAR_9].state = VAR_3;
  break;
 case 136:
  VAR_8->dpcm[VAR_9].state = VAR_1;
  break;
 }

out:
 VAR_8->dpcm[VAR_9].runtime_update = VAR_5;
 return VAR_10;
}
