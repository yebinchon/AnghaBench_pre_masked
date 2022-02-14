
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_base_afe {TYPE_1__* dev; struct mt8183_afe_private* platform_priv; } ;
struct mtk_afe_i2s_priv {int share_i2s_id; } ;
struct mt8183_afe_private {struct mtk_afe_i2s_priv** dai_priv; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {size_t id; char* share_property_name; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_base_afe*,char const*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (struct device_node const*,char const*,char const**) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_2)
{
 struct mt8183_afe_private *VAR_3 = VAR_2->platform_priv;
 const struct device_node *VAR_4 = VAR_2->dev->of_node;
 const char *VAR_5;
 const char *VAR_6;
 struct mtk_afe_i2s_priv *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_3->dai_priv[VAR_1[VAR_8].id];
  VAR_6 = VAR_1[VAR_8].share_property_name;
  if (FUNC_1(VAR_4, VAR_6, &VAR_5))
   continue;
  VAR_7->share_i2s_id = FUNC_0(VAR_2, VAR_5);
 }

 return 0;
}
