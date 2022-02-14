
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dpcm {TYPE_2__* be; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int dev; TYPE_1__* dai_link; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dpcm *VAR_0,
  struct snd_pcm_substream *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0->be->dev, "ASoC: trigger BE %s cmd %d\n",
   VAR_0->be->dai_link->name, VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_1(VAR_0->be->dev,"ASoC: trigger BE failed %d\n", VAR_3);

 return VAR_3;
}
