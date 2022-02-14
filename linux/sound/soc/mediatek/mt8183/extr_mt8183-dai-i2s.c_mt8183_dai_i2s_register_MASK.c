
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe_dai {void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; void* num_controls; void* controls; void* num_dai_drivers; void* dai_drivers; int list; } ;
struct mtk_base_afe {int sub_dais; int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mtk_base_afe_dai* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mtk_base_afe*) ;
 int FUNC_4 (struct mtk_base_afe*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

int FUNC_5(struct mtk_base_afe *VAR_6)
{
 struct mtk_base_afe_dai *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_7->list, &VAR_6->sub_dais);

 VAR_7->dai_drivers = VAR_3;
 VAR_7->num_dai_drivers = FUNC_0(VAR_3);

 VAR_7->controls = VAR_2;
 VAR_7->num_controls = FUNC_0(VAR_2);
 VAR_7->dapm_widgets = VAR_5;
 VAR_7->num_dapm_widgets = FUNC_0(VAR_5);
 VAR_7->dapm_routes = VAR_4;
 VAR_7->num_dapm_routes = FUNC_0(VAR_4);


 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;

 return 0;
}
