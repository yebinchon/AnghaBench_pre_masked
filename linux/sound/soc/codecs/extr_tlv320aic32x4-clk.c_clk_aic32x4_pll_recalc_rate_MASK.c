
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_aic32x4_pll_muldiv {int dummy; } ;
struct clk_aic32x4 {int dummy; } ;


 unsigned long FUNC_0 (struct clk_aic32x4_pll_muldiv*,unsigned long) ;
 int FUNC_1 (struct clk_aic32x4*,struct clk_aic32x4_pll_muldiv*) ;
 struct clk_aic32x4* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
   unsigned long VAR_1)
{
 struct clk_aic32x4 *VAR_2 = FUNC_2(VAR_0);
 struct clk_aic32x4_pll_muldiv VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return 0;

 return FUNC_0(&VAR_3, VAR_1);
}
