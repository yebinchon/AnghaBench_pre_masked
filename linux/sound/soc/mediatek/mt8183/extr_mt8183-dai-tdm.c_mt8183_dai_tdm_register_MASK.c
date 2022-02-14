
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe_dai {void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; void* num_dai_drivers; void* dai_drivers; int list; } ;
struct mtk_base_afe {int dev; int sub_dais; struct mt8183_afe_private* platform_priv; } ;
struct mtk_afe_tdm_priv {int mclk_multiple; int mclk_id; int bck_id; } ;
struct mt8183_afe_private {struct mtk_afe_tdm_priv** dai_priv; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

int FUNC_3(struct mtk_base_afe *VAR_8)
{
 struct mt8183_afe_private *VAR_9 = VAR_8->platform_priv;
 struct mtk_afe_tdm_priv *VAR_10;
 struct mtk_base_afe_dai *VAR_11;

 VAR_11 = FUNC_1(VAR_8->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_2(&VAR_11->list, &VAR_8->sub_dais);

 VAR_11->dai_drivers = VAR_5;
 VAR_11->num_dai_drivers = FUNC_0(VAR_5);

 VAR_11->dapm_widgets = VAR_7;
 VAR_11->num_dapm_widgets = FUNC_0(VAR_7);
 VAR_11->dapm_routes = VAR_6;
 VAR_11->num_dapm_routes = FUNC_0(VAR_6);

 VAR_10 = FUNC_1(VAR_8->dev, sizeof(struct mtk_afe_tdm_priv),
    VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->mclk_multiple = 128;
 VAR_10->bck_id = VAR_3;
 VAR_10->mclk_id = VAR_4;

 VAR_9->dai_priv[VAR_2] = VAR_10;
 return 0;
}
