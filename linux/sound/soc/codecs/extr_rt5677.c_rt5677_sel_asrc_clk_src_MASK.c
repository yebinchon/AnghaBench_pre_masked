
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
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
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 unsigned int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 unsigned int VAR_52 ;
 unsigned int VAR_53 ;
 unsigned int VAR_54 ;
 unsigned int VAR_55 ;
 unsigned int VAR_56 ;
 unsigned int VAR_57 ;
 unsigned int VAR_58 ;
 unsigned int VAR_59 ;
 unsigned int VAR_60 ;
 unsigned int VAR_61 ;
 unsigned int VAR_62 ;
 unsigned int VAR_63 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_64,
  unsigned int VAR_65, unsigned int VAR_66)
{
 struct rt5677_priv *VAR_67 = FUNC_1(VAR_64);
 unsigned int VAR_68 = 0, VAR_69 = 0;
 unsigned int VAR_70 = 0, VAR_71 = 0;
 unsigned int VAR_72 = 0, VAR_73 = 0;
 unsigned int VAR_74 = 0, VAR_75 = 0;
 unsigned int VAR_76 = 0, VAR_77 = 0;
 unsigned int VAR_78 = 0, VAR_79 = 0;

 switch (VAR_66) {
 case 134:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;

 default:
  return -VAR_0;
 }


 if (VAR_65 & VAR_43) {
  VAR_68 |= VAR_44;
  VAR_69 = (VAR_69 & ~VAR_44)
   | (VAR_66 << VAR_45);
 }

 if (VAR_65 & VAR_29) {
  VAR_68 |= VAR_25;
  VAR_69 = (VAR_69 & ~VAR_25)
   | (VAR_66 << VAR_26);
 }

 if (VAR_65 & VAR_30) {
  VAR_68 |= VAR_27;
  VAR_69 = (VAR_69 & ~VAR_27)
   | (VAR_66 << VAR_28);
 }

 if (VAR_68)
  FUNC_0(VAR_67->regmap, VAR_19, VAR_68,
   VAR_69);


 if (VAR_65 & VAR_35) {
  VAR_70 |= VAR_31;
  VAR_71 = (VAR_71 & ~VAR_31)
   | (VAR_66 << VAR_32);
 }

 if (VAR_65 & VAR_36) {
  VAR_70 |= VAR_33;
  VAR_71 = (VAR_71 & ~VAR_33)
   | (VAR_66 << VAR_34);
 }

 if (VAR_65 & VAR_41) {
  VAR_70 |= VAR_37;
  VAR_71 = (VAR_71 & ~VAR_37)
   | (VAR_66 << VAR_38);
 }

 if (VAR_65 & VAR_42) {
  VAR_70 |= VAR_39;
  VAR_71 = (VAR_71 & ~VAR_39)
   | (VAR_66 << VAR_40);
 }

 if (VAR_70)
  FUNC_0(VAR_67->regmap, VAR_20, VAR_70,
   VAR_71);


 if (VAR_65 & VAR_7) {
  VAR_72 |= VAR_11;
  VAR_73 = (VAR_73 & ~VAR_11)
   | (VAR_66 << VAR_12);
 }

 if (VAR_65 & VAR_8) {
  VAR_72 |= VAR_13;
  VAR_73 = (VAR_73 & ~VAR_13)
   | (VAR_66 << VAR_14);
 }

 if (VAR_65 & VAR_9) {
  VAR_72 |= VAR_15;
  VAR_73 = (VAR_73 & ~VAR_15)
   | (VAR_66 << VAR_16);
 }

 if (VAR_65 & VAR_10) {
  VAR_72 |= VAR_17;
  VAR_73 = (VAR_73 & ~VAR_17)
   | (VAR_66 << VAR_18);
 }

 if (VAR_72)
  FUNC_0(VAR_67->regmap, VAR_21, VAR_72,
   VAR_73);


 if (VAR_65 & VAR_5) {
  VAR_74 |= VAR_1;
  VAR_75 = (VAR_75 & ~VAR_1)
   | (VAR_66 << VAR_2);
 }

 if (VAR_65 & VAR_6) {
  VAR_74 |= VAR_3;
  VAR_75 = (VAR_75 & ~VAR_3)
   | (VAR_66 << VAR_4);
 }

 if (VAR_74)
  FUNC_0(VAR_67->regmap, VAR_22, VAR_74,
   VAR_75);


 if (VAR_65 & VAR_48) {
  VAR_76 |= VAR_46;
  VAR_77 = (VAR_77 & ~VAR_46)
   | (VAR_66 << VAR_47);
 }

 if (VAR_65 & VAR_51) {
  VAR_76 |= VAR_49;
  VAR_77 = (VAR_77 & ~VAR_49)
   | (VAR_66 << VAR_50);
 }

 if (VAR_76)
  FUNC_0(VAR_67->regmap, VAR_23, VAR_76,
   VAR_77);


 if (VAR_65 & VAR_54) {
  VAR_78 |= VAR_52;
  VAR_79 = (VAR_79 & ~VAR_52)
   | ((VAR_66 - 1) << VAR_53);
 }

 if (VAR_65 & VAR_57) {
  VAR_78 |= VAR_55;
  VAR_79 = (VAR_79 & ~VAR_55)
   | ((VAR_66 - 1) << VAR_56);
 }

 if (VAR_65 & VAR_60) {
  VAR_78 |= VAR_58;
  VAR_79 = (VAR_79 & ~VAR_58)
   | ((VAR_66 - 1) << VAR_59);
 }

 if (VAR_65 & VAR_63) {
  VAR_78 |= VAR_61;
  VAR_79 = (VAR_79 & ~VAR_61)
   | ((VAR_66 - 1) << VAR_62);
 }

 if (VAR_78)
  FUNC_0(VAR_67->regmap, VAR_24, VAR_78,
   VAR_79);

 return 0;
}
