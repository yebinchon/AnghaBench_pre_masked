
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8540_fll {int mclk_src; int ratio; int fll_int; int clk_ref_div; scalar_t__ fll_frac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;
 int FUNC_1 (struct regmap*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct regmap *VAR_26,
 struct nau8540_fll *VAR_27)
{
 FUNC_0(VAR_26, VAR_18,
  VAR_1 | VAR_0,
  VAR_2 | VAR_27->mclk_src);
 FUNC_0(VAR_26, VAR_19,
  VAR_13 | VAR_16,
  VAR_27->ratio | (0x6 << VAR_17));

 FUNC_1(VAR_26, VAR_20, VAR_27->fll_frac);

 FUNC_0(VAR_26, VAR_21,
  VAR_10, VAR_27->fll_int);

 FUNC_0(VAR_26, VAR_22,
  VAR_14,
  VAR_27->clk_ref_div << VAR_15);
 FUNC_0(VAR_26, VAR_23,
  VAR_5, VAR_6);
 FUNC_0(VAR_26,
  VAR_24, VAR_4, 0);
 if (VAR_27->fll_frac) {
  FUNC_0(VAR_26, VAR_23,
   VAR_12 | VAR_11 |
   VAR_9,
   VAR_12 | VAR_11 |
   VAR_8);
  FUNC_0(VAR_26, VAR_24,
   VAR_25 | VAR_3,
   VAR_25 | VAR_3);
 } else {
  FUNC_0(VAR_26, VAR_23,
   VAR_12 | VAR_11 |
   VAR_9, VAR_7);
  FUNC_0(VAR_26, VAR_24,
   VAR_25 | VAR_3, 0);
 }
}
