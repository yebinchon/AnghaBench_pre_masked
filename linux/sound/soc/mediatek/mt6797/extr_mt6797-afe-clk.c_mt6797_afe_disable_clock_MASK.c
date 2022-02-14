
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt6797_afe_private* platform_priv; } ;
struct mt6797_afe_private {int * clk; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct mtk_base_afe *VAR_4)
{
 struct mt6797_afe_private *VAR_5 = VAR_4->platform_priv;

 FUNC_0(VAR_5->clk[VAR_3]);
 FUNC_0(VAR_5->clk[VAR_2]);
 FUNC_0(VAR_5->clk[VAR_1]);
 FUNC_0(VAR_5->clk[VAR_0]);

 return 0;
}
