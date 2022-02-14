
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {TYPE_1__* soc; } ;
struct TYPE_2__ {int has_one_heart_mode; } ;


 int FUNC_0 (struct mtk_base_afe*,int) ;
 int FUNC_1 (struct mtk_base_afe*,int ) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct mtk_base_afe *VAR_2 = FUNC_2(VAR_1);
 struct mt2701_afe_private *VAR_3 = VAR_2->platform_priv;
 int VAR_4 = FUNC_1(VAR_2, VAR_1->id);
 bool VAR_5 = VAR_3->soc->has_one_heart_mode;

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_5 ? 1 : VAR_4);
}
