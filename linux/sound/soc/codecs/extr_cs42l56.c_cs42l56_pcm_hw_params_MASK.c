
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42l56_private {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct cs42l56_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
         struct snd_pcm_hw_params *VAR_4,
         struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct cs42l56_private *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7->mclk, FUNC_2(VAR_4));
 if (VAR_8 >= 0) {
  FUNC_4(VAR_6, VAR_0,
        VAR_1, VAR_8);
 } else {
  FUNC_1(VAR_6->dev, "unsupported mclk/sclk/lrclk ratio\n");
  return -VAR_2;
 }

 return 0;
}
