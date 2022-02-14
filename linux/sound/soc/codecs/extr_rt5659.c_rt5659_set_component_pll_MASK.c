
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5659_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; } ;
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt5659_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_14, int VAR_15,
    int VAR_16, unsigned int VAR_17,
    unsigned int VAR_18)
{
 struct rt5659_priv *VAR_19 = FUNC_3(VAR_14);
 struct rl6231_pll_code VAR_20;
 int VAR_21;

 if (VAR_16 == VAR_19->pll_src && VAR_17 == VAR_19->pll_in &&
     VAR_18 == VAR_19->pll_out)
  return 0;

 if (!VAR_17 || !VAR_18) {
  FUNC_0(VAR_14->dev, "PLL disabled\n");

  VAR_19->pll_in = 0;
  VAR_19->pll_out = 0;
  FUNC_4(VAR_14, VAR_1,
   VAR_12, VAR_13);
  return 0;
 }

 switch (VAR_16) {
 case 128:
  FUNC_4(VAR_14, VAR_1,
   VAR_5, VAR_6);
  break;
 case 131:
  FUNC_4(VAR_14, VAR_1,
    VAR_5, VAR_2);
  break;
 case 130:
  FUNC_4(VAR_14, VAR_1,
    VAR_5, VAR_3);
  break;
 case 129:
  FUNC_4(VAR_14, VAR_1,
    VAR_5, VAR_4);
  break;
 default:
  FUNC_1(VAR_14->dev, "Unknown PLL source %d\n", VAR_16);
  return -VAR_0;
 }

 VAR_21 = FUNC_2(VAR_17, VAR_18, &VAR_20);
 if (VAR_21 < 0) {
  FUNC_1(VAR_14->dev, "Unsupport input clock %d\n", VAR_17);
  return VAR_21;
 }

 FUNC_0(VAR_14->dev, "bypass=%d m=%d n=%d k=%d\n",
  VAR_20.m_bp, (VAR_20.m_bp ? 0 : VAR_20.m_code),
  VAR_20.n_code, VAR_20.k_code);

 FUNC_5(VAR_14, VAR_7,
  VAR_20.n_code << VAR_11 | VAR_20.k_code);
 FUNC_5(VAR_14, VAR_8,
  (VAR_20.m_bp ? 0 : VAR_20.m_code) << VAR_10 |
  VAR_20.m_bp << VAR_9);

 VAR_19->pll_in = VAR_17;
 VAR_19->pll_out = VAR_18;
 VAR_19->pll_src = VAR_16;

 return 0;
}
