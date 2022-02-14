
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct clk_hw {int dummy; } ;
struct clk_aic32x4 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct clk_aic32x4* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct clk_aic32x4 *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5;

 FUNC_0(VAR_4->regmap, VAR_0, &VAR_5);

 return (VAR_5 & VAR_1) >> VAR_2;
}
