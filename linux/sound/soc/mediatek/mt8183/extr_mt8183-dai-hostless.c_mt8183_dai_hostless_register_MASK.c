
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe_dai {void* num_dapm_routes; void* dapm_routes; void* num_dai_drivers; void* dai_drivers; int list; } ;
struct mtk_base_afe {int sub_dais; int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mtk_base_afe_dai* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 void* VAR_2 ;
 void* VAR_3 ;

int FUNC_3(struct mtk_base_afe *VAR_4)
{
 struct mtk_base_afe_dai *VAR_5;

 VAR_5 = FUNC_1(VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->list, &VAR_4->sub_dais);

 VAR_5->dai_drivers = VAR_2;
 VAR_5->num_dai_drivers = FUNC_0(VAR_2);

 VAR_5->dapm_routes = VAR_3;
 VAR_5->num_dapm_routes = FUNC_0(VAR_3);

 return 0;
}
