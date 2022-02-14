
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_base_afe {struct mt8183_afe_private* platform_priv; } ;
struct mt8183_afe_private {int * clk; } ;
struct TYPE_2__ {int m_sel_id; int div_clk_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(struct mtk_base_afe *VAR_2, int VAR_3)
{
 struct mt8183_afe_private *VAR_4 = VAR_2->platform_priv;
 int VAR_5 = VAR_1[VAR_3].m_sel_id;
 int VAR_6 = VAR_1[VAR_3].div_clk_id;


 if (VAR_3 == VAR_0)
  return;

 FUNC_0(VAR_4->clk[VAR_6]);
 if (VAR_5 >= 0)
  FUNC_0(VAR_4->clk[VAR_5]);
}
