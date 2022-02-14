
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42l42_private {int swidth; int srate; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct cs42l42_private* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct cs42l42_private *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_4->srate = FUNC_1(VAR_1);
 VAR_4->swidth = FUNC_2(VAR_1);

 VAR_5 = FUNC_0(VAR_3);

 return VAR_5;
}
