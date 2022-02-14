
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct mtk_base_afe {int regmap; struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {scalar_t__* mrg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtk_base_afe*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_5,
      struct snd_soc_dai *VAR_6)
{
 struct mtk_base_afe *VAR_7 = FUNC_2(VAR_6);
 struct mt2701_afe_private *VAR_8 = VAR_7->platform_priv;


 if (!VAR_8->mrg_enable[!VAR_5->stream]) {
  FUNC_1(VAR_7->regmap, VAR_0,
       VAR_1, 0);
  FUNC_1(VAR_7->regmap, VAR_2,
       VAR_3, 0);
  FUNC_1(VAR_7->regmap, VAR_2,
       VAR_4, 0);
  FUNC_0(VAR_7);
 }

 VAR_8->mrg_enable[VAR_5->stream] = 0;
}
