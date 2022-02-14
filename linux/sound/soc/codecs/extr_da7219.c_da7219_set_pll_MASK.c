
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned long long u64 ;
typedef unsigned int u32 ;
struct snd_soc_component {int dev; } ;
struct da7219_priv {int mclk_rate; } ;
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
 struct da7219_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;

int FUNC_5(struct snd_soc_component *VAR_22, int VAR_23, unsigned int VAR_24)
{
 struct da7219_priv *VAR_25 = FUNC_2(VAR_22);

 u8 VAR_26, VAR_27, VAR_28;
 u8 VAR_29, VAR_30, VAR_31;
 u32 VAR_32;
 u64 VAR_33;


 if (VAR_25->mclk_rate < 2000000) {
  FUNC_0(VAR_22->dev, "PLL input clock %d below valid range\n",
   VAR_25->mclk_rate);
  return -VAR_21;
 } else if (VAR_25->mclk_rate <= 4500000) {
  VAR_27 = VAR_7;
  VAR_28 = VAR_8;
 } else if (VAR_25->mclk_rate <= 9000000) {
  VAR_27 = VAR_11;
  VAR_28 = VAR_12;
 } else if (VAR_25->mclk_rate <= 18000000) {
  VAR_27 = VAR_13;
  VAR_28 = VAR_14;
 } else if (VAR_25->mclk_rate <= 36000000) {
  VAR_27 = VAR_5;
  VAR_28 = VAR_6;
 } else if (VAR_25->mclk_rate <= 54000000) {
  VAR_27 = VAR_9;
  VAR_28 = VAR_10;
 } else {
  FUNC_0(VAR_22->dev, "PLL input clock %d above valid range\n",
   VAR_25->mclk_rate);
  return -VAR_21;
 }
 VAR_32 = (VAR_25->mclk_rate / VAR_28);
 VAR_26 = VAR_27;


 switch (VAR_23) {
 case 130:
  VAR_26 |= VAR_17;
  FUNC_3(VAR_22, VAR_2,
        VAR_15 |
        VAR_18, VAR_26);
  return 0;
 case 129:
  VAR_26 |= VAR_19;
  break;
 case 128:
  VAR_26 |= VAR_20;
  break;
 default:
  FUNC_0(VAR_22->dev, "Invalid PLL config\n");
  return -VAR_21;
 }


 VAR_31 = VAR_24 / VAR_32;
 VAR_33 = (u64)(VAR_24 % VAR_32) * 8192ULL;
 FUNC_1(VAR_33, VAR_32);
 VAR_29 = (VAR_33 >> VAR_1) & VAR_0;
 VAR_30 = (VAR_33) & VAR_0;


 FUNC_4(VAR_22, VAR_4, VAR_29);
 FUNC_4(VAR_22, VAR_3, VAR_30);
 FUNC_4(VAR_22, VAR_16, VAR_31);
 FUNC_3(VAR_22, VAR_2,
       VAR_15 | VAR_18,
       VAR_26);

 return 0;
}
