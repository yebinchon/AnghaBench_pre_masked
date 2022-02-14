
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak4642_priv {int mcko; } ;


 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct ak4642_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct ak4642_priv *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_4->mcko);

 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_1) * 256;

 return FUNC_0(VAR_3, VAR_5);
}
