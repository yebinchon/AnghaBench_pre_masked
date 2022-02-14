
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_base_afe {int dev; struct mt8183_afe_private* platform_priv; } ;
struct mtk_afe_i2s_priv {int dummy; } ;
struct mt8183_afe_private {struct mtk_afe_i2s_priv** dai_priv; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtk_afe_i2s_priv* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mtk_afe_i2s_priv*,TYPE_1__*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_4)
{
 struct mt8183_afe_private *VAR_5 = VAR_4->platform_priv;
 struct mtk_afe_i2s_priv *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4->dev,
     sizeof(struct mtk_afe_i2s_priv),
     VAR_2);
  if (!VAR_6)
   return -VAR_1;

  FUNC_1(VAR_6, &VAR_3[VAR_7],
         sizeof(struct mtk_afe_i2s_priv));

  VAR_5->dai_priv[VAR_3[VAR_7].id] = VAR_6;
 }

 return 0;
}
