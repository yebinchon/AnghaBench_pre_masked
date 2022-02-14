
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {int mclk_ck; } ;
struct mt2701_afe_private {struct mt2701_i2s_path* i2s_path; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct mtk_base_afe *VAR_0, int VAR_1)
{
 struct mt2701_afe_private *VAR_2 = VAR_0->platform_priv;
 struct mt2701_i2s_path *VAR_3 = &VAR_2->i2s_path[VAR_1];

 return FUNC_0(VAR_3->mclk_ck);
}
