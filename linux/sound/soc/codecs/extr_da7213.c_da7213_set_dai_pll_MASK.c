
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long u64 ;
typedef unsigned int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct da7213_priv {int mclk_rate; int master; } ;
typedef int frac_div ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;




 int VAR_20 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned long long,unsigned int) ;
 struct da7213_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_21, int VAR_22,
         int VAR_23, unsigned int VAR_24, unsigned int VAR_25)
{
 struct snd_soc_component *VAR_26 = VAR_21->component;
 struct da7213_priv *VAR_27 = FUNC_2(VAR_26);

 u8 VAR_28, VAR_29, VAR_30;
 u8 VAR_31, VAR_32, VAR_33;
 u32 VAR_34;
 u64 VAR_35;


 if (VAR_27->mclk_rate == 32768) {
  if (!VAR_27->master) {
   FUNC_0(VAR_26->dev,
    "32KHz only valid if codec is clock master\n");
   return -VAR_20;
  }


  VAR_29 = VAR_14;
  VAR_30 = VAR_15;
  VAR_23 = 129;
  VAR_34 = 3750000;

 } else {
  if (VAR_27->mclk_rate < 5000000) {
   FUNC_0(VAR_26->dev,
    "PLL input clock %d below valid range\n",
    VAR_27->mclk_rate);
   return -VAR_20;
  } else if (VAR_27->mclk_rate <= 9000000) {
   VAR_29 = VAR_12;
   VAR_30 = VAR_13;
  } else if (VAR_27->mclk_rate <= 18000000) {
   VAR_29 = VAR_14;
   VAR_30 = VAR_15;
  } else if (VAR_27->mclk_rate <= 36000000) {
   VAR_29 = VAR_8;
   VAR_30 = VAR_9;
  } else if (VAR_27->mclk_rate <= 54000000) {
   VAR_29 = VAR_10;
   VAR_30 = VAR_11;
  } else {
   FUNC_0(VAR_26->dev,
    "PLL input clock %d above valid range\n",
    VAR_27->mclk_rate);
   return -VAR_20;
  }
  VAR_34 = (VAR_27->mclk_rate / VAR_30);
 }

 VAR_28 = VAR_29;


 switch (VAR_23) {
 case 131:
  FUNC_3(VAR_26, VAR_3,
        VAR_16 |
        VAR_18, VAR_28);
  return 0;
 case 130:
  break;
 case 128:
  VAR_28 |= VAR_19;
  VAR_25 = VAR_7;
  break;
 case 129:
  if (VAR_27->mclk_rate != 32768) {
   FUNC_0(VAR_26->dev,
    "32KHz mode only valid with 32KHz MCLK\n");
   return -VAR_20;
  }

  VAR_28 |= VAR_2 | VAR_19;
  VAR_25 = VAR_7;
  break;
 default:
  FUNC_0(VAR_26->dev, "Invalid PLL config\n");
  return -VAR_20;
 }


 VAR_33 = VAR_25 / VAR_34;
 VAR_35 = (u64)(VAR_25 % VAR_34) * 8192ULL;
 FUNC_1(VAR_35, VAR_34);
 VAR_31 = (VAR_35 >> VAR_1) & VAR_0;
 VAR_32 = (VAR_35) & VAR_0;


 FUNC_4(VAR_26, VAR_6, VAR_31);
 FUNC_4(VAR_26, VAR_5, VAR_32);
 FUNC_4(VAR_26, VAR_17, VAR_33);


 VAR_28 |= VAR_4;
 FUNC_3(VAR_26, VAR_3,
       VAR_16 | VAR_18,
       VAR_28);


 if (VAR_23 == 129) {
  FUNC_4(VAR_26, 0xF0, 0x8B);
  FUNC_4(VAR_26, 0xF1, 0x03);
  FUNC_4(VAR_26, 0xF1, 0x01);
  FUNC_4(VAR_26, 0xF0, 0x00);
 }

 return 0;
}
