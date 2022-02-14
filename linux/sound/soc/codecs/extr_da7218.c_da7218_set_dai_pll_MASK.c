
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned long long u64 ;
typedef unsigned int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct da7218_priv {int mclk_rate; } ;
typedef unsigned int frac_div ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;



 int VAR_21 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned long long,unsigned int) ;
 struct da7218_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_22, int VAR_23,
         int VAR_24, unsigned int VAR_25, unsigned int VAR_26)
{
 struct snd_soc_component *VAR_27 = VAR_22->component;
 struct da7218_priv *VAR_28 = FUNC_2(VAR_27);

 u8 VAR_29, VAR_30, VAR_31;
 u8 VAR_32, VAR_33, VAR_34;
 u32 VAR_35;
 u64 VAR_36;


 if (VAR_28->mclk_rate < 2000000) {
  FUNC_0(VAR_27->dev, "PLL input clock %d below valid range\n",
   VAR_28->mclk_rate);
  return -VAR_21;
 } else if (VAR_28->mclk_rate <= 4500000) {
  VAR_30 = VAR_7;
  VAR_31 = VAR_8;
 } else if (VAR_28->mclk_rate <= 9000000) {
  VAR_30 = VAR_11;
  VAR_31 = VAR_12;
 } else if (VAR_28->mclk_rate <= 18000000) {
  VAR_30 = VAR_13;
  VAR_31 = VAR_14;
 } else if (VAR_28->mclk_rate <= 36000000) {
  VAR_30 = VAR_5;
  VAR_31 = VAR_6;
 } else if (VAR_28->mclk_rate <= 54000000) {
  VAR_30 = VAR_9;
  VAR_31 = VAR_10;
 } else {
  FUNC_0(VAR_27->dev, "PLL input clock %d above valid range\n",
   VAR_28->mclk_rate);
  return -VAR_21;
 }
 VAR_35 = (VAR_28->mclk_rate / VAR_31);
 VAR_29 = VAR_30;


 switch (VAR_24) {
 case 130:
  VAR_29 |= VAR_17;
  FUNC_3(VAR_27, VAR_2,
        VAR_15 |
        VAR_18, VAR_29);
  return 0;
 case 129:
  VAR_29 |= VAR_19;
  break;
 case 128:
  VAR_29 |= VAR_20;
  break;
 default:
  FUNC_0(VAR_27->dev, "Invalid PLL config\n");
  return -VAR_21;
 }


 VAR_34 = VAR_26 / VAR_35;
 VAR_36 = (u64)(VAR_26 % VAR_35) * 8192ULL;
 FUNC_1(VAR_36, VAR_35);
 VAR_32 = (VAR_36 >> VAR_1) & VAR_0;
 VAR_33 = (VAR_36) & VAR_0;


 FUNC_4(VAR_27, VAR_4, VAR_32);
 FUNC_4(VAR_27, VAR_3, VAR_33);
 FUNC_4(VAR_27, VAR_16, VAR_34);
 FUNC_3(VAR_27, VAR_2,
       VAR_18 | VAR_15,
       VAR_29);

 return 0;
}
