
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ active; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_afe {struct mt8173_afe_private* platform_priv; } ;
struct mt8173_afe_private {int * clocks; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mtk_base_afe*,int ,int ) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct mtk_base_afe *VAR_4 = FUNC_1(VAR_3);
 struct mt8173_afe_private *VAR_5 = VAR_4->platform_priv;

 if (VAR_3->active)
  return;

 FUNC_0(VAR_4, VAR_5->clocks[VAR_1],
         VAR_5->clocks[VAR_0]);
}
