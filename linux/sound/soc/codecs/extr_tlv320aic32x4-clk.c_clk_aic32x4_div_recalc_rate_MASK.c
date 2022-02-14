
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_aic32x4 {int reg; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct clk_aic32x4* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
      unsigned long VAR_2)
{
 struct clk_aic32x4 *VAR_3 = FUNC_2(VAR_1);

 unsigned int VAR_4;

 FUNC_1(VAR_3->regmap, VAR_3->reg, &VAR_4);

 return FUNC_0(VAR_2, VAR_4 & VAR_0);
}
