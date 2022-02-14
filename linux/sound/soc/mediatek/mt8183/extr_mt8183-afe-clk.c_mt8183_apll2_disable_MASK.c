
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; struct mt8183_afe_private* platform_priv; } ;
struct mt8183_afe_private {int * clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct mtk_base_afe*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;

void FUNC_3(struct mtk_base_afe *VAR_6)
{
 struct mt8183_afe_private *VAR_7 = VAR_6->platform_priv;

 FUNC_2(VAR_6->regmap, VAR_3,
      VAR_0,
      0x0 << VAR_1);

 FUNC_2(VAR_6->regmap, VAR_2, 0x1, 0x0);

 FUNC_1(VAR_7->clk[VAR_5]);
 FUNC_1(VAR_7->clk[VAR_4]);

 FUNC_0(VAR_6, 0);
}
