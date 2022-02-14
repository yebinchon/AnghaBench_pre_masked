
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe_dai {void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; void* num_dai_drivers; void* dai_drivers; int list; } ;
struct mtk_base_afe {int sub_dais; int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mtk_base_afe_dai* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

int FUNC_3(struct mtk_base_afe *VAR_5)
{
 struct mtk_base_afe_dai *VAR_6;

 VAR_6 = FUNC_1(VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->list, &VAR_5->sub_dais);

 VAR_6->dai_drivers = VAR_2;
 VAR_6->num_dai_drivers = FUNC_0(VAR_2);

 VAR_6->dapm_widgets = VAR_4;
 VAR_6->num_dapm_widgets = FUNC_0(VAR_4);
 VAR_6->dapm_routes = VAR_3;
 VAR_6->num_dapm_routes = FUNC_0(VAR_3);
 return 0;
}
