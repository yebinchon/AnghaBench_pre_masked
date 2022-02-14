
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt8183_afe_private* platform_priv; } ;
struct mt8183_afe_private {int * clk; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct mtk_base_afe *VAR_8)
{
 struct mt8183_afe_private *VAR_9 = VAR_8->platform_priv;

 FUNC_0(VAR_9->clk[VAR_4]);
 FUNC_0(VAR_9->clk[VAR_3]);
 FUNC_0(VAR_9->clk[VAR_2]);
 FUNC_0(VAR_9->clk[VAR_1]);
 FUNC_0(VAR_9->clk[VAR_0]);
 FUNC_0(VAR_9->clk[VAR_7]);
 FUNC_0(VAR_9->clk[VAR_6]);
 FUNC_0(VAR_9->clk[VAR_5]);

 return 0;
}
