
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_aic32x4_pll_muldiv {int dummy; } ;
struct clk_aic32x4 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_aic32x4_pll_muldiv*,unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_aic32x4*,struct clk_aic32x4_pll_muldiv*) ;
 struct clk_aic32x4* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1,
   unsigned long VAR_2,
   unsigned long VAR_3)
{
 struct clk_aic32x4 *VAR_4 = FUNC_2(VAR_1);
 struct clk_aic32x4_pll_muldiv VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5, VAR_2, VAR_3);
 if (VAR_6 < 0)
  return -VAR_0;

 return FUNC_1(VAR_4, &VAR_5);
}
