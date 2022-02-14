
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8824 {int vref_impedance; int micbias_voltage; int jack_eject_debounce; scalar_t__ sar_threshold_num; scalar_t__ jkdet_polarity; struct regmap* regmap; } ;


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
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nau8824*) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct nau8824 *VAR_77)
{
 struct regmap *VAR_78 = VAR_77->regmap;


 FUNC_2(VAR_78, VAR_53,
  VAR_74 | VAR_75, VAR_74 |
  (VAR_77->vref_impedance << VAR_76));
 FUNC_2(VAR_78, VAR_54,
  VAR_37, VAR_37);
 FUNC_0(2);
 FUNC_2(VAR_78, VAR_67,
  VAR_43, VAR_77->micbias_voltage);

 FUNC_2(VAR_78, VAR_54,
  VAR_46 | VAR_38 |
  VAR_39 | VAR_70,
  VAR_46 | VAR_38 |
  VAR_39 | VAR_70);

 FUNC_2(VAR_78, VAR_57,
  VAR_10 | VAR_14,
  (0x1 << VAR_11) |
  (0x1 << VAR_15));
 FUNC_2(VAR_78, VAR_62,
  VAR_31, VAR_31);
 FUNC_2(VAR_78, VAR_64,
  VAR_25 | VAR_22 |
  VAR_0 | VAR_1 |
  VAR_2 | VAR_3,
  VAR_25 | VAR_22 |
  VAR_0 | VAR_1 |
  VAR_2 | VAR_3);
 FUNC_2(VAR_78, VAR_58,
  VAR_9 | VAR_8 |
  VAR_13 | VAR_12 |
  VAR_18 | VAR_17 |
  VAR_19 | VAR_16,
  VAR_9 | VAR_8 |
  VAR_13 | VAR_12 |
  VAR_18 | VAR_17 |
  VAR_19 | VAR_16);

 FUNC_2(VAR_78, VAR_56,
  VAR_6,
  0x20 << VAR_7);
 FUNC_2(VAR_78, VAR_69,
  VAR_34, VAR_34);

 FUNC_2(VAR_78, VAR_55,
  VAR_72 | VAR_71 |
  VAR_45 | VAR_44,
  VAR_72 | VAR_71 |
  VAR_45 | VAR_44);




 FUNC_2(VAR_78, VAR_63,
  VAR_73, VAR_73);

 FUNC_2(VAR_78, VAR_59,
  VAR_24, VAR_23);
 FUNC_2(VAR_78, VAR_60,
  VAR_27, VAR_26);
 FUNC_2(VAR_78, VAR_63,
  VAR_21 | VAR_20,
  VAR_21 | VAR_20);



 FUNC_2(VAR_78, VAR_51,
  VAR_5, VAR_4);
 FUNC_2(VAR_78, VAR_61,
  VAR_28 | VAR_30,
  VAR_28 | VAR_29);

 FUNC_2(VAR_78, VAR_68,
  VAR_47 | VAR_49,
  (0x2 << VAR_48) |
  (0x3 << VAR_50));

 FUNC_2(VAR_78, VAR_65,
  VAR_35 | VAR_36,
  VAR_35 | VAR_36);

 FUNC_2(VAR_78, VAR_52,
  VAR_32 | VAR_33,
  VAR_32 | VAR_33);
 FUNC_2(VAR_78, VAR_66,
  VAR_42,

  VAR_77->jkdet_polarity ? 0 : VAR_42);
 FUNC_2(VAR_78,
  VAR_66, VAR_40,
  (VAR_77->jack_eject_debounce << VAR_41));
 if (VAR_77->sar_threshold_num)
  FUNC_1(VAR_77);
}
