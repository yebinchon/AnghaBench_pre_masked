
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int name; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct mtk_base_afe {struct mt8183_afe_private* platform_priv; } ;
struct mtk_afe_tdm_priv {int mclk_apll; } ;
struct mt8183_afe_private {struct mtk_afe_tdm_priv** dai_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mtk_base_afe*,int ) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
        struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3 = VAR_2;
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_3->dapm);
 struct mtk_base_afe *VAR_5 = FUNC_1(VAR_4);
 struct mt8183_afe_private *VAR_6 = VAR_5->platform_priv;
 struct mtk_afe_tdm_priv *VAR_7 = VAR_6->dai_priv[VAR_0];
 int VAR_8;


 VAR_8 = FUNC_0(VAR_5, VAR_1->name);

 return (VAR_7->mclk_apll == VAR_8) ? 1 : 0;
}
