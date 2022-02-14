
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_spdifout {int mclk; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct axg_spdifout* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct axg_spdifout *VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4 = FUNC_4(VAR_1);
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3->mclk, VAR_4 * 128);
 if (VAR_5) {
  FUNC_3(VAR_2->dev, "failed to set spdif clock\n");
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_2->dev, "failed to setup sample format\n");
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_2->dev, "failed to setup channel status words\n");
  return VAR_5;
 }

 return 0;
}
