
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5677_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; int regmap; } ;
struct rl6231_pll_code {int m_bp; int m_code; int n_code; int k_code; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt5677_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_15, int VAR_16, int VAR_17,
   unsigned int VAR_18, unsigned int VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_15->component;
 struct rt5677_priv *VAR_21 = FUNC_5(VAR_20);
 struct rl6231_pll_code VAR_22;
 int VAR_23;

 if (VAR_17 == VAR_21->pll_src && VAR_18 == VAR_21->pll_in &&
     VAR_19 == VAR_21->pll_out)
  return 0;

 if (!VAR_18 || !VAR_19) {
  FUNC_0(VAR_20->dev, "PLL disabled\n");

  VAR_21->pll_in = 0;
  VAR_21->pll_out = 0;
  FUNC_2(VAR_21->regmap, VAR_1,
   VAR_13, VAR_14);
  return 0;
 }

 switch (VAR_17) {
 case 128:
  FUNC_2(VAR_21->regmap, VAR_1,
   VAR_8, VAR_9);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
  switch (VAR_15->id) {
  case 136:
   FUNC_2(VAR_21->regmap, VAR_1,
    VAR_8, VAR_4);
   break;
  case 135:
   FUNC_2(VAR_21->regmap, VAR_1,
    VAR_8, VAR_5);
   break;
  case 134:
   FUNC_2(VAR_21->regmap, VAR_1,
    VAR_8, VAR_6);
   break;
  case 133:
   FUNC_2(VAR_21->regmap, VAR_1,
    VAR_8, VAR_7);
   break;
  default:
   break;
  }
  break;
 default:
  FUNC_1(VAR_20->dev, "Unknown PLL source %d\n", VAR_17);
  return -VAR_0;
 }

 VAR_23 = FUNC_4(VAR_18, VAR_19, &VAR_22);
 if (VAR_23 < 0) {
  FUNC_1(VAR_20->dev, "Unsupport input clock %d\n", VAR_18);
  return VAR_23;
 }

 FUNC_0(VAR_20->dev, "m_bypass=%d m=%d n=%d k=%d\n",
  VAR_22.m_bp, (VAR_22.m_bp ? 0 : VAR_22.m_code),
  VAR_22.n_code, VAR_22.k_code);

 FUNC_3(VAR_21->regmap, VAR_2,
  VAR_22.n_code << VAR_12 | VAR_22.k_code);
 FUNC_3(VAR_21->regmap, VAR_3,
  (VAR_22.m_bp ? 0 : VAR_22.m_code) << VAR_11 |
  VAR_22.m_bp << VAR_10);

 VAR_21->pll_in = VAR_18;
 VAR_21->pll_out = VAR_19;
 VAR_21->pll_src = VAR_17;

 return 0;
}
