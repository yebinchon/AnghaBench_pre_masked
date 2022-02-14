
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5663_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; int codec_ver; } ;
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt5663_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_13, int VAR_14, int VAR_15,
   unsigned int VAR_16, unsigned int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_13->component;
 struct rt5663_priv *VAR_19 = FUNC_3(VAR_18);
 struct rl6231_pll_code VAR_20;
 int VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (VAR_15 == VAR_19->pll_src && VAR_16 == VAR_19->pll_in &&
     VAR_17 == VAR_19->pll_out)
  return 0;

 if (!VAR_16 || !VAR_17) {
  FUNC_0(VAR_18->dev, "PLL disabled\n");

  VAR_19->pll_in = 0;
  VAR_19->pll_out = 0;
  FUNC_4(VAR_18, VAR_1,
   VAR_9, VAR_10);
  return 0;
 }

 switch (VAR_19->codec_ver) {
 case 130:
  VAR_22 = VAR_11;
  VAR_23 = VAR_12;
  break;
 case 131:
  VAR_22 = VAR_2;
  VAR_23 = VAR_3;
  break;
 default:
  FUNC_1(VAR_18->dev, "Unknown CODEC Version\n");
  return -VAR_0;
 }

 switch (VAR_15) {
 case 128:
  VAR_24 = 0x0;
  break;
 case 129:
  VAR_24 = 0x1;
  break;
 default:
  FUNC_1(VAR_18->dev, "Unknown PLL source %d\n", VAR_15);
  return -VAR_0;
 }
 FUNC_4(VAR_18, VAR_1, VAR_22, (VAR_24 << VAR_23));

 VAR_21 = FUNC_2(VAR_16, VAR_17, &VAR_20);
 if (VAR_21 < 0) {
  FUNC_1(VAR_18->dev, "Unsupport input clock %d\n", VAR_16);
  return VAR_21;
 }

 FUNC_0(VAR_18->dev, "bypass=%d m=%d n=%d k=%d\n", VAR_20.m_bp,
  (VAR_20.m_bp ? 0 : VAR_20.m_code), VAR_20.n_code,
  VAR_20.k_code);

 FUNC_5(VAR_18, VAR_4,
  VAR_20.n_code << VAR_8 | VAR_20.k_code);
 FUNC_5(VAR_18, VAR_5,
  (VAR_20.m_bp ? 0 : VAR_20.m_code) << VAR_7 |
  VAR_20.m_bp << VAR_6);

 VAR_19->pll_in = VAR_16;
 VAR_19->pll_out = VAR_17;
 VAR_19->pll_src = VAR_15;

 return 0;
}
