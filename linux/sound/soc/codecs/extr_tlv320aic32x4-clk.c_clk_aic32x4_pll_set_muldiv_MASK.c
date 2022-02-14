
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_aic32x4_pll_muldiv {int r; int p; int j; int d; } ;
struct clk_aic32x4 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct clk_aic32x4 *VAR_7,
   struct clk_aic32x4_pll_muldiv *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_0(VAR_7->regmap, VAR_3,
    VAR_6, VAR_8->r);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7->regmap, VAR_3,
    VAR_4,
    VAR_8->p << VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7->regmap, VAR_2, VAR_8->j);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7->regmap, VAR_1, (VAR_8->d >> 8));
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_7->regmap, VAR_0, (VAR_8->d & 0xff));
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
