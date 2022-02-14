
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_aic32x4_pll_muldiv {unsigned int r; unsigned int p; unsigned int j; unsigned int d; } ;
struct clk_aic32x4 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct clk_aic32x4 *VAR_7,
   struct clk_aic32x4_pll_muldiv *VAR_8)
{

 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7->regmap, VAR_3, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8->r = VAR_9 & VAR_6;
 VAR_8->p = (VAR_9 & VAR_4) >> VAR_5;

 VAR_10 = FUNC_0(VAR_7->regmap, VAR_2, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8->j = VAR_9;

 VAR_10 = FUNC_0(VAR_7->regmap, VAR_1, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8->d = VAR_9 << 8;

 VAR_10 = FUNC_0(VAR_7->regmap, VAR_0, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8->d |= VAR_9;

 return 0;
}
