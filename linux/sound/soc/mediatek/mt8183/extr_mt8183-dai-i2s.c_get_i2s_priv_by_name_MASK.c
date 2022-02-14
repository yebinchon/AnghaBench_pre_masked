
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt8183_afe_private* platform_priv; } ;
struct mtk_afe_i2s_priv {int dummy; } ;
struct mt8183_afe_private {struct mtk_afe_i2s_priv** dai_priv; } ;


 int FUNC_0 (struct mtk_base_afe*,char const*) ;

__attribute__((used)) static struct mtk_afe_i2s_priv *FUNC_1(struct mtk_base_afe *VAR_0,
           const char *VAR_1)
{
 struct mt8183_afe_private *VAR_2 = VAR_0->platform_priv;
 int VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 < 0)
  return ((void*)0);

 return VAR_2->dai_priv[VAR_3];
}
