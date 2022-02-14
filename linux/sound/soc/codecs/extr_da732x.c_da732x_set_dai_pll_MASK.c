
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned long long u64 ;
struct snd_soc_component {int dev; } ;
struct da732x_priv {int pll_en; int sysclk; } ;
typedef unsigned int frac_div ;


 unsigned long long VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned long long,int) ;
 struct da732x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_11, int VAR_12,
         int VAR_13, unsigned int VAR_14,
         unsigned int VAR_15)
{
 struct da732x_priv *VAR_16 = FUNC_3(VAR_11);
 int VAR_17, VAR_18;
 u8 VAR_19, VAR_20, VAR_21;
 u64 VAR_22;


 if (VAR_15 == 0) {
  FUNC_4(VAR_11, VAR_3,
        VAR_2, 0);
  VAR_16->pll_en = 0;
  return 0;
 }

 if (VAR_16->pll_en)
  return -VAR_9;

 if (VAR_13 == VAR_7) {

  switch (VAR_16->sysclk) {
  case 11290000:
  case 12288000:
  case 22580000:
  case 24576000:
  case 45160000:
  case 49152000:
   FUNC_5(VAR_11, VAR_3,
          VAR_1);
   return 0;
  default:
   FUNC_1(VAR_11->dev,
    "Cannot use PLL Bypass, invalid SYSCLK rate\n");
   return -VAR_10;
  }
 }

 VAR_18 = FUNC_0(VAR_11, VAR_16->sysclk);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_17 = (VAR_16->sysclk / VAR_18);
 VAR_21 = VAR_15 / VAR_17;
 VAR_22 = (u64)(VAR_15 % VAR_17) * 8192ULL;
 FUNC_2(VAR_22, VAR_17);
 VAR_20 = (VAR_22 >> VAR_0) & VAR_8;
 VAR_19 = (VAR_22) & VAR_8;

 FUNC_5(VAR_11, VAR_5, VAR_19);
 FUNC_5(VAR_11, VAR_6, VAR_20);
 FUNC_5(VAR_11, VAR_4, VAR_21);

 FUNC_4(VAR_11, VAR_3, VAR_2,
       VAR_2);

 VAR_16->pll_en = 1;

 return 0;
}
