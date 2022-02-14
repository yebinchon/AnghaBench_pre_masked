
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8825 {int vref_impedance; int jack_insert_debounce; int jack_eject_debounce; int micbias_voltage; struct regmap* regmap; scalar_t__ sar_threshold_num; scalar_t__ jkdet_polarity; scalar_t__ jkdet_pull_up; scalar_t__ jkdet_pull_enable; scalar_t__ jkdet_enable; } ;


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
 int FUNC_0 (struct nau8825*) ;
 int FUNC_1 (struct regmap*,int ,int,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nau8825 *VAR_57)
{
 struct regmap *VAR_58 = VAR_57->regmap;


 FUNC_2(VAR_58, VAR_50, 0x0001);

 FUNC_1(VAR_57->regmap, VAR_42,
  VAR_4, VAR_4);
 FUNC_1(VAR_57->regmap, VAR_43,
  VAR_18, VAR_18);


 FUNC_1(VAR_58, VAR_42,
  VAR_5,
  VAR_57->vref_impedance << VAR_6);

 FUNC_1(VAR_58, VAR_43,
  VAR_35 | VAR_19 |
  VAR_20 | VAR_56,
  VAR_35 | VAR_19 |
  VAR_20 | VAR_56);

 FUNC_1(VAR_58, VAR_49,
  VAR_29,
  VAR_57->jkdet_enable ? 0 : VAR_29);
 FUNC_1(VAR_58, VAR_49,
  VAR_30,
  VAR_57->jkdet_pull_enable ? 0 : VAR_30);
 FUNC_1(VAR_58, VAR_49,
  VAR_31,
  VAR_57->jkdet_pull_up ? VAR_31 : 0);
 FUNC_1(VAR_58, VAR_52,
  VAR_28,

  VAR_57->jkdet_polarity ? 0 : VAR_28);

 FUNC_1(VAR_58, VAR_52,
  VAR_26,
  VAR_57->jack_insert_debounce << VAR_27);
 FUNC_1(VAR_58, VAR_52,
  VAR_24,
  VAR_57->jack_eject_debounce << VAR_25);


 FUNC_1(VAR_58, VAR_51,
  VAR_22 | VAR_23,
  VAR_22 | VAR_23);

 FUNC_1(VAR_58, VAR_51, 0x7ff, 0x7ff);

 FUNC_1(VAR_58, VAR_54,
  VAR_32, VAR_57->micbias_voltage);

 if (VAR_57->sar_threshold_num)
  FUNC_0(VAR_57);




 FUNC_1(VAR_58, VAR_40,
  VAR_2 | VAR_0,
  VAR_1);
 FUNC_1(VAR_58, VAR_48,
  VAR_16, VAR_15);

 FUNC_1(VAR_58, VAR_44,
  VAR_34 | VAR_33,
  VAR_34 | VAR_33);




 FUNC_1(VAR_57->regmap, VAR_42,
  VAR_3, VAR_3);

 FUNC_1(VAR_58, VAR_48,
  VAR_14, VAR_14);


 FUNC_1(VAR_58, VAR_41,
  VAR_21 |
  VAR_13 | VAR_12,
  VAR_21 |
  VAR_13 | VAR_12);

 FUNC_1(VAR_58, VAR_45,
  VAR_7,
  0x20 << VAR_8);

 FUNC_1(VAR_58, VAR_55,
  VAR_36 | VAR_38,
  (0x2 << VAR_37) |
  (0x3 << VAR_39));

 FUNC_1(VAR_57->regmap, VAR_46,
  VAR_10, VAR_9);
 FUNC_1(VAR_57->regmap, VAR_47,
  VAR_10, VAR_11);

 FUNC_1(VAR_58, VAR_53,
  VAR_17, VAR_17);
}
