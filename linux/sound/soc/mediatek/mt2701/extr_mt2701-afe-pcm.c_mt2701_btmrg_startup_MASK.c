
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {int* mrg_enable; } ;


 int FUNC_0 (struct mtk_base_afe*) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct mtk_base_afe *VAR_2 = FUNC_1(VAR_1);
 struct mt2701_afe_private *VAR_3 = VAR_2->platform_priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->mrg_enable[VAR_0->stream] = 1;

 return 0;
}
