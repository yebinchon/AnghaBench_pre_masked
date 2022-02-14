
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt1011_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; } ;
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


 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt1011_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_17,
  int VAR_18, int VAR_19, unsigned int VAR_20,
  unsigned int VAR_21)
{
 struct rt1011_priv *VAR_22 = FUNC_3(VAR_17);
 struct rl6231_pll_code VAR_23;
 int VAR_24;

 if (VAR_19 == VAR_22->pll_src && VAR_20 == VAR_22->pll_in &&
     VAR_21 == VAR_22->pll_out)
  return 0;

 if (!VAR_20 || !VAR_21) {
  FUNC_0(VAR_17->dev, "PLL disabled\n");

  VAR_22->pll_in = 0;
  VAR_22->pll_out = 0;
  FUNC_4(VAR_17, VAR_1,
   VAR_6, VAR_5);
  return 0;
 }

 switch (VAR_19) {
 case 129:
  FUNC_4(VAR_17, VAR_1,
   VAR_12, VAR_13);
  FUNC_4(VAR_17, VAR_1,
   VAR_10, VAR_11);
  FUNC_4(VAR_17, VAR_2,
   VAR_4, VAR_3);
  break;
 case 130:
  FUNC_4(VAR_17, VAR_1,
    VAR_10, VAR_9);
  break;
 case 128:
  FUNC_4(VAR_17, VAR_1,
   VAR_12, VAR_14);
  FUNC_4(VAR_17, VAR_1,
   VAR_10, VAR_11);
  break;
 default:
  FUNC_1(VAR_17->dev, "Unknown PLL Source %d\n", VAR_19);
  return -VAR_0;
 }

 VAR_24 = FUNC_2(VAR_20, VAR_21, &VAR_23);
 if (VAR_24 < 0) {
  FUNC_1(VAR_17->dev, "Unsupport input clock %d\n", VAR_20);
  return VAR_24;
 }

 FUNC_0(VAR_17->dev, "bypass=%d m=%d n=%d k=%d\n",
  VAR_23.m_bp, (VAR_23.m_bp ? 0 : VAR_23.m_code),
  VAR_23.n_code, VAR_23.k_code);

 FUNC_5(VAR_17, VAR_15,
  (VAR_23.m_bp ? 0 : VAR_23.m_code) << VAR_8 |
  VAR_23.m_bp << VAR_7 | VAR_23.n_code);
 FUNC_5(VAR_17, VAR_16,
  VAR_23.k_code);

 VAR_22->pll_in = VAR_20;
 VAR_22->pll_out = VAR_21;
 VAR_22->pll_src = VAR_19;

 return 0;
}
