
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {int mrgif_ck; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct mtk_base_afe *VAR_0)
{
 struct mt2701_afe_private *VAR_1 = VAR_0->platform_priv;

 return FUNC_0(VAR_1->mrgif_ck);
}
