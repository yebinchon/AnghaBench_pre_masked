
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mtk_base_afe {int dummy; } ;


 int FUNC_0 (struct mtk_base_afe*,struct snd_pcm_hw_params*,int ) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1,
     struct snd_soc_dai *VAR_2)
{
 struct mtk_base_afe *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3, VAR_1, VAR_2->id);
}
