
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8810_pll {int pll_int; int pll_frac; int mclk_scaler; scalar_t__ pre_factor; } ;
struct nau8810 {int dev; struct nau8810_pll pll; struct regmap* regmap; } ;


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
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int,int,int,scalar_t__) ;
 int FUNC_2 (unsigned int,int,struct nau8810_pll*) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 int FUNC_4 (struct regmap*,int ,int) ;
 struct nau8810* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_16, int VAR_17,
 int VAR_18, unsigned int VAR_19, unsigned int VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_16->component;
 struct nau8810 *VAR_22 = FUNC_5(VAR_21);
 struct regmap *VAR_23 = VAR_22->regmap;
 struct nau8810_pll *VAR_24 = &VAR_22->pll;
 int VAR_25, VAR_26;

 VAR_26 = VAR_20 / 256;
 VAR_25 = FUNC_2(VAR_19, VAR_26, VAR_24);
 if (VAR_25 < 0) {
  FUNC_0(VAR_22->dev, "Unsupported input clock %d\n", VAR_19);
  return VAR_25;
 }
 FUNC_1(VAR_22->dev, "pll_int=%x pll_frac=%x mclk_scaler=%x pre_factor=%x\n",
  VAR_24->pll_int, VAR_24->pll_frac, VAR_24->mclk_scaler,
  VAR_24->pre_factor);

 FUNC_3(VAR_23, VAR_15,
  VAR_9 | VAR_10,
  (VAR_24->pre_factor ? VAR_9 : 0) |
  VAR_24->pll_int);
 FUNC_4(VAR_23, VAR_12,
  (VAR_24->pll_frac >> VAR_5) &
  VAR_4);
 FUNC_4(VAR_23, VAR_13,
  (VAR_24->pll_frac >> VAR_7) &
  VAR_6);
 FUNC_4(VAR_23, VAR_14,
  VAR_24->pll_frac & VAR_8);
 FUNC_3(VAR_23, VAR_11, VAR_2,
  VAR_24->mclk_scaler << VAR_3);
 FUNC_3(VAR_23, VAR_11,
  VAR_0, VAR_1);

 return 0;
}
