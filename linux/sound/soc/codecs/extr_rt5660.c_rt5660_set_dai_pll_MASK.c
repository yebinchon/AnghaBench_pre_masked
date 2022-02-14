
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5660_priv {int pll_src; unsigned int pll_in; unsigned int pll_out; } ;
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,struct rl6231_pll_code*) ;
 struct rt5660_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_12, int VAR_13, int VAR_14,
   unsigned int VAR_15, unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_12->component;
 struct rt5660_priv *VAR_18 = FUNC_3(VAR_17);
 struct rl6231_pll_code VAR_19;
 int VAR_20;

 if (VAR_14 == VAR_18->pll_src && VAR_15 == VAR_18->pll_in &&
  VAR_16 == VAR_18->pll_out)
  return 0;

 if (!VAR_15 || !VAR_16) {
  FUNC_0(VAR_17->dev, "PLL disabled\n");

  VAR_18->pll_in = 0;
  VAR_18->pll_out = 0;
  FUNC_4(VAR_17, VAR_1,
   VAR_10, VAR_11);
  return 0;
 }

 switch (VAR_14) {
 case 128:
  FUNC_4(VAR_17, VAR_1,
   VAR_3, VAR_4);
  break;

 case 129:
  FUNC_4(VAR_17, VAR_1,
   VAR_3, VAR_2);
  break;

 default:
  FUNC_1(VAR_17->dev, "Unknown PLL source %d\n", VAR_14);
  return -VAR_0;
 }

 VAR_20 = FUNC_2(VAR_15, VAR_16, &VAR_19);
 if (VAR_20 < 0) {
  FUNC_1(VAR_17->dev, "Unsupport input clock %d\n", VAR_15);
  return VAR_20;
 }

 FUNC_0(VAR_17->dev, "bypass=%d m=%d n=%d k=%d\n",
  VAR_19.m_bp, (VAR_19.m_bp ? 0 : VAR_19.m_code),
  VAR_19.n_code, VAR_19.k_code);

 FUNC_5(VAR_17, VAR_5,
  VAR_19.n_code << VAR_9 | VAR_19.k_code);
 FUNC_5(VAR_17, VAR_6,
  (VAR_19.m_bp ? 0 : VAR_19.m_code) << VAR_8 |
  VAR_19.m_bp << VAR_7);

 VAR_18->pll_in = VAR_15;
 VAR_18->pll_out = VAR_16;
 VAR_18->pll_src = VAR_14;

 return 0;
}
