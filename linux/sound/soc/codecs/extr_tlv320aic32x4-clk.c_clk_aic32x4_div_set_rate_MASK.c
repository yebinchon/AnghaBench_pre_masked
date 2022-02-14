
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct clk_aic32x4 {int reg; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct clk_aic32x4* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 struct clk_aic32x4 *VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 > 128)
  return -VAR_1;

 return FUNC_1(VAR_5->regmap, VAR_5->reg,
    VAR_0, VAR_6);
}
