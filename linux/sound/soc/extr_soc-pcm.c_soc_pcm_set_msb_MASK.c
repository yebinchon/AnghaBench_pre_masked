
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 int VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = FUNC_1(VAR_0->runtime, 0, 0, VAR_1);
 if (VAR_3 != 0)
  FUNC_0(VAR_2->dev, "ASoC: Failed to set MSB %d: %d\n",
     VAR_1, VAR_3);
}
