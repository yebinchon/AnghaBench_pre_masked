
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8824_fll {int mclk_src; int ratio; int fll_int; int clk_ref_div; scalar_t__ fll_frac; } ;


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
 int FUNC_0 (struct regmap*,int ,int,int) ;
 int FUNC_1 (struct regmap*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct regmap *VAR_23,
 struct nau8824_fll *VAR_24)
{
 FUNC_0(VAR_23, VAR_15,
  VAR_1 | VAR_0,
  VAR_2 | VAR_24->mclk_src);
 FUNC_0(VAR_23, VAR_16,
  VAR_12, VAR_24->ratio);

 FUNC_1(VAR_23, VAR_17, VAR_24->fll_frac);

 FUNC_0(VAR_23, VAR_18,
  VAR_9, VAR_24->fll_int);

 FUNC_0(VAR_23, VAR_19,
  VAR_13,
  VAR_24->clk_ref_div << VAR_14);

 FUNC_0(VAR_23, VAR_20,
  VAR_4, VAR_5);

 FUNC_0(VAR_23,
  VAR_21, VAR_3, 0);
 if (VAR_24->fll_frac) {
  FUNC_0(VAR_23, VAR_20,
   VAR_11 | VAR_10 |
   VAR_8,
   VAR_11 | VAR_10 |
   VAR_7);
  FUNC_0(VAR_23, VAR_21,
   VAR_22, VAR_22);
 } else {
  FUNC_0(VAR_23, VAR_20,
   VAR_11 | VAR_10 |
   VAR_8, VAR_6);
  FUNC_0(VAR_23,
   VAR_21, VAR_22, 0);
 }
}
