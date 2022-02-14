
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct clk_aic32x4 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct clk_aic32x4* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct clk_aic32x4 *VAR_5 = FUNC_1(VAR_3);

 return FUNC_0(VAR_5->regmap,
    VAR_0,
    VAR_1,
    VAR_4 << VAR_2);
}
