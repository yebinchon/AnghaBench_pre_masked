
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_1__* dai_link; } ;
struct snd_pcm_substream {int dummy; } ;
typedef enum snd_soc_dpcm_trigger { ____Placeholder_snd_soc_dpcm_trigger } snd_soc_dpcm_trigger ;
struct TYPE_2__ {int* trigger; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_5 (struct snd_soc_pcm_runtime*,int,int ) ;
 struct snd_pcm_substream* FUNC_6 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_3, int VAR_4)
{
 struct snd_pcm_substream *VAR_5 =
  FUNC_6(VAR_3, VAR_4);
 enum snd_soc_dpcm_trigger VAR_6 = VAR_3->dai_link->trigger[VAR_4];
 int VAR_7;

 FUNC_0(VAR_3->dev, "ASoC: runtime %s close on FE %s\n",
   VAR_4 ? "capture" : "playback", VAR_3->dai_link->name);

 if (VAR_6 == VAR_2) {

  FUNC_0(VAR_3->dev, "ASoC: bespoke trigger FE %s cmd stop\n",
    VAR_3->dai_link->name);

  VAR_7 = FUNC_7(VAR_5, VAR_0);
  if (VAR_7 < 0)
   FUNC_1(VAR_3->dev,"ASoC: trigger FE failed %d\n", VAR_7);
 } else {
  FUNC_0(VAR_3->dev, "ASoC: trigger FE %s cmd stop\n",
   VAR_3->dai_link->name);

  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_0);
  if (VAR_7 < 0)
   FUNC_1(VAR_3->dev,"ASoC: trigger FE failed %d\n", VAR_7);
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7 < 0)
  FUNC_1(VAR_3->dev,"ASoC: hw_free FE failed %d\n", VAR_7);

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 < 0)
  FUNC_1(VAR_3->dev,"ASoC: shutdown FE failed %d\n", VAR_7);


 FUNC_5(VAR_3, VAR_4, VAR_1);

 return 0;
}
