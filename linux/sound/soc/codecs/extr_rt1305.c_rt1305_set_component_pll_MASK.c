
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt1305_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; } ;
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
 int VAR_17 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt1305_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_18,
  int VAR_19, int VAR_20, unsigned int VAR_21,
  unsigned int VAR_22)
{
 struct rt1305_priv *VAR_23 = FUNC_3(VAR_18);
 struct rl6231_pll_code VAR_24;
 int VAR_25;

 if (VAR_20 == VAR_23->pll_src && VAR_21 == VAR_23->pll_in &&
     VAR_22 == VAR_23->pll_out)
  return 0;

 if (!VAR_21 || !VAR_22) {
  FUNC_0(VAR_18->dev, "PLL disabled\n");

  VAR_23->pll_in = 0;
  VAR_23->pll_out = 0;
  FUNC_4(VAR_18, VAR_1,
   VAR_10 | VAR_13,
   VAR_11 | VAR_12);
  return 0;
 }

 switch (VAR_20) {
 case 129:
  FUNC_4(VAR_18, VAR_1,
   VAR_15 | VAR_13 |
   VAR_3,
   VAR_16 | VAR_14);
  FUNC_4(VAR_18,
   VAR_2, VAR_8,
   VAR_9);
  break;
 case 130:
  FUNC_4(VAR_18,
   VAR_1, VAR_13,
   VAR_12);
  break;
 case 128:
  FUNC_4(VAR_18, VAR_1,
   VAR_15 | VAR_13 |
   VAR_3,
   VAR_17 | VAR_14);
  VAR_21 = 98304000;
  break;
 default:
  FUNC_1(VAR_18->dev, "Unknown PLL Source %d\n", VAR_20);
  return -VAR_0;
 }

 VAR_25 = FUNC_2(VAR_21, VAR_22, &VAR_24);
 if (VAR_25 < 0) {
  FUNC_1(VAR_18->dev, "Unsupport input clock %d\n", VAR_21);
  return VAR_25;
 }

 FUNC_0(VAR_18->dev, "bypass=%d m=%d n=%d k=%d\n",
  VAR_24.m_bp, (VAR_24.m_bp ? 0 : VAR_24.m_code),
  VAR_24.n_code, VAR_24.k_code);

 FUNC_5(VAR_18, VAR_4,
  (VAR_24.m_bp ? 0 : VAR_24.m_code) << VAR_7 |
  VAR_24.m_bp << VAR_6 |
  VAR_24.n_code);
 FUNC_5(VAR_18, VAR_5,
  VAR_24.k_code);

 VAR_23->pll_in = VAR_21;
 VAR_23->pll_out = VAR_22;
 VAR_23->pll_src = VAR_20;

 return 0;
}
