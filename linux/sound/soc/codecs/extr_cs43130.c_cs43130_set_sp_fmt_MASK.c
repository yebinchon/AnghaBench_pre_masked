
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs43130_private {int regmap; int mclk_int; TYPE_1__* dais; } ;
struct cs43130_clk_gen {int den; int num; } ;
struct TYPE_2__ {int dai_format; int dai_mode; } ;


 int FUNC_0 (int ) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;

 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;






 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 struct cs43130_clk_gen* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(int VAR_61, unsigned int VAR_62,
         struct snd_pcm_hw_params *VAR_63,
         struct cs43130_private *VAR_64)
{
 u16 VAR_65;
 u16 VAR_66;
 u8 VAR_67;
 u8 VAR_68;
 u8 VAR_69;
 u8 VAR_70;
 u8 VAR_71;
 u8 VAR_72;
 u8 VAR_73;
 u8 VAR_74;
 u8 VAR_75;
 const struct cs43130_clk_gen *VAR_76;

 switch (VAR_64->dais[VAR_61].dai_format) {
 case 129:
  VAR_66 = VAR_62;
  VAR_67 = 2;
  VAR_68 = 0;
  break;
 case 128:
  VAR_66 = VAR_62;
  VAR_67 = 2;
  VAR_68 = 1;
  break;
 case 131:
  VAR_66 = 1;
  VAR_67 = 2;
  VAR_68 = 1;
  break;
 case 130:
  VAR_66 = 1;
  VAR_67 = 0;
  VAR_68 = 1;
  break;
 default:
  return -VAR_56;
 }

 switch (VAR_64->dais[VAR_61].dai_mode) {
 case 132:
  VAR_75 = 0;
  break;
 case 133:
  VAR_75 = 1;
  break;
 default:
  return -VAR_56;
 }

 VAR_65 = VAR_62 * FUNC_2(VAR_63);
 VAR_70 = 1;
 VAR_71 = 0;
 VAR_73 = 0;
 VAR_74 = VAR_62 * (FUNC_2(VAR_63) - 1);

 VAR_69 = VAR_67 & VAR_16;
 VAR_69 |= (VAR_68 << VAR_41) & VAR_40;

 VAR_72 = VAR_71 & VAR_20;
 VAR_72 |= (VAR_71 << VAR_22) &
      VAR_21;
 VAR_72 |= (VAR_70 << VAR_37) &
      VAR_36;
 VAR_72 |= (VAR_70 << VAR_39) &
      VAR_38;
 VAR_72 |= (VAR_75 << VAR_27) &
      VAR_26;

 switch (VAR_61) {
 case 135:
 case 136:
  FUNC_4(VAR_64->regmap, VAR_10,
   VAR_23, (VAR_65 - 1) >>
   VAR_24);
  FUNC_4(VAR_64->regmap, VAR_11,
   VAR_23, (VAR_65 - 1) >>
   VAR_25);
  FUNC_4(VAR_64->regmap, VAR_8,
   VAR_17, (VAR_66 - 1) >>
   VAR_18);
  FUNC_4(VAR_64->regmap, VAR_9,
   VAR_17, (VAR_66 - 1) >>
   VAR_19);
  FUNC_5(VAR_64->regmap, VAR_7, VAR_69);
  FUNC_5(VAR_64->regmap, VAR_0, VAR_73);
  FUNC_5(VAR_64->regmap, VAR_2, VAR_74);
  FUNC_4(VAR_64->regmap, VAR_1,
   VAR_14, 1 << VAR_15);
  FUNC_4(VAR_64->regmap, VAR_3,
   VAR_14, 1 << VAR_15);
  FUNC_5(VAR_64->regmap, VAR_4, VAR_72);
  break;
 case 134:
  FUNC_4(VAR_64->regmap, VAR_52,
   VAR_23, (VAR_65 - 1) >>
   VAR_24);
  FUNC_4(VAR_64->regmap, VAR_53,
   VAR_23, (VAR_65 - 1) >>
   VAR_25);
  FUNC_4(VAR_64->regmap, VAR_50,
   VAR_17, (VAR_66 - 1) >>
   VAR_18);
  FUNC_4(VAR_64->regmap, VAR_51,
   VAR_17, (VAR_66 - 1) >>
   VAR_19);
  FUNC_5(VAR_64->regmap, VAR_49, VAR_69);
  FUNC_5(VAR_64->regmap, VAR_42, VAR_73);
  FUNC_5(VAR_64->regmap, VAR_44, VAR_74);
  FUNC_4(VAR_64->regmap, VAR_43,
   VAR_14, 1 << VAR_15);
  FUNC_4(VAR_64->regmap, VAR_45,
   VAR_14, 1 << VAR_15);
  FUNC_5(VAR_64->regmap, VAR_46, VAR_72);
  break;
 default:
  return -VAR_56;
 }

 switch (VAR_65) {
 case 16:
  VAR_76 = FUNC_1(VAR_64->mclk_int,
           FUNC_3(VAR_63),
           VAR_57,
           FUNC_0(VAR_57));
  break;
 case 32:
  VAR_76 = FUNC_1(VAR_64->mclk_int,
           FUNC_3(VAR_63),
           VAR_58,
           FUNC_0(VAR_58));
  break;
 case 48:
  VAR_76 = FUNC_1(VAR_64->mclk_int,
           FUNC_3(VAR_63),
           VAR_59,
           FUNC_0(VAR_59));
  break;
 case 64:
  VAR_76 = FUNC_1(VAR_64->mclk_int,
           FUNC_3(VAR_63),
           VAR_60,
           FUNC_0(VAR_60));
  break;
 default:
  return -VAR_56;
 }

 if (!VAR_76)
  return -VAR_56;

 switch (VAR_61) {
 case 135:
 case 136:
  FUNC_5(VAR_64->regmap, VAR_5,
        (VAR_76->den & VAR_28) >>
        VAR_29);
  FUNC_5(VAR_64->regmap, VAR_6,
        (VAR_76->den & VAR_30) >>
        VAR_31);
  FUNC_5(VAR_64->regmap, VAR_12,
        (VAR_76->num & VAR_32) >>
        VAR_33);
  FUNC_5(VAR_64->regmap, VAR_13,
        (VAR_76->num & VAR_34) >>
        VAR_35);
  break;
 case 134:
  FUNC_5(VAR_64->regmap, VAR_47,
        (VAR_76->den & VAR_28) >>
        VAR_29);
  FUNC_5(VAR_64->regmap, VAR_48,
        (VAR_76->den & VAR_30) >>
        VAR_31);
  FUNC_5(VAR_64->regmap, VAR_54,
        (VAR_76->num & VAR_32) >>
        VAR_33);
  FUNC_5(VAR_64->regmap, VAR_55,
        (VAR_76->num & VAR_34) >>
        VAR_35);
  break;
 default:
  return -VAR_56;
 }

 return 0;
}
