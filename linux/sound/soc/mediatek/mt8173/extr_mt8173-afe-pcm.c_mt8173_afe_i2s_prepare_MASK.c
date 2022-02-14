
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct mtk_base_afe {struct mt8173_afe_private* platform_priv; } ;
struct mt8173_afe_private {int * clocks; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mtk_base_afe*,int ,int,int *,int ) ;
 int FUNC_1 (struct mtk_base_afe*,int) ;
 int FUNC_2 (struct mtk_base_afe*,int) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct snd_pcm_runtime * const VAR_4 = VAR_2->runtime;
 struct mtk_base_afe *VAR_5 = FUNC_3(VAR_3);
 struct mt8173_afe_private *VAR_6 = VAR_5->platform_priv;
 int VAR_7;

 FUNC_0(VAR_5, VAR_6->clocks[VAR_0],
     VAR_4->rate * 256, ((void*)0), 0);
 FUNC_0(VAR_5, VAR_6->clocks[VAR_1],
     VAR_4->rate * 256, ((void*)0), 0);

 VAR_7 = FUNC_1(VAR_5, VAR_2->runtime->rate);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_5, 1);

 return 0;
}
