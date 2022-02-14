
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs42l42_private {unsigned int hs_type; int* bias_thresholds; int regmap; int btn_det_init_dbnce; } ;


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
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
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
 unsigned int VAR_61 ;
 unsigned int VAR_62 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct cs42l42_private *VAR_74)
{
 unsigned int VAR_75;
 unsigned int VAR_76;


 FUNC_2(VAR_74->regmap,
  VAR_2,
  VAR_57 |
  VAR_29,
  (1 << VAR_58) |
  (1 << VAR_30));


 FUNC_2(VAR_74->regmap,
  VAR_33,
  VAR_34 |
  VAR_36 |
  VAR_22 |
  VAR_31,
  (2 << VAR_35) |
  (2 << VAR_37) |
  (0 << VAR_23) |
  (3 << VAR_32));


 FUNC_1(VAR_74->regmap, VAR_42, &VAR_75);

 VAR_74->hs_type = (VAR_75 & VAR_38) >>
    VAR_39;


 if ((VAR_74->hs_type == VAR_61) ||
       (VAR_74->hs_type == VAR_62)) {

  FUNC_2(VAR_74->regmap,
   VAR_24,
   VAR_25 |
   VAR_0 |
   VAR_67 |
   VAR_27,
   (0 << VAR_26) |
   (0 << VAR_1) |
   (0 << VAR_68) |
   (3 << VAR_28));


  FUNC_2(VAR_74->regmap,
   VAR_45,
   VAR_43 |
   VAR_12 |
   VAR_40,
   (1 << VAR_44) |
   (0 << VAR_13) |
   (VAR_74->bias_thresholds[0] <<
   VAR_41));


  FUNC_2(VAR_74->regmap,
   VAR_24,
   VAR_25 |
   VAR_0 |
   VAR_67 |
   VAR_27,
   (1 << VAR_26) |
   (1 << VAR_1) |
   (0 << VAR_68) |
   (3 << VAR_28));


  FUNC_2(VAR_74->regmap,
   VAR_46,
   VAR_8 |
   VAR_20 |
   VAR_59,
   (0 << VAR_9) |
   (3 << VAR_21) |
   (0 << VAR_60));

  FUNC_0(VAR_74->btn_det_init_dbnce);


  FUNC_1(VAR_74->regmap, VAR_11,
       &VAR_76);


  FUNC_2(VAR_74->regmap,
   VAR_10,
   VAR_49 |
   VAR_47 |
   VAR_51 |
   VAR_55 |
   VAR_53,
   (0 << VAR_50) |
   (0 << VAR_48) |
   (0 << VAR_52) |
   (1 << VAR_56) |
   (1 << VAR_54));
 } else {

  FUNC_2(VAR_74->regmap,
   VAR_46,
   VAR_8 |
   VAR_20 |
   VAR_59,
   (0 << VAR_9) |
   (1 << VAR_21) |
   (1 << VAR_60));
 }

 FUNC_2(VAR_74->regmap,
    VAR_3,
    VAR_18 |
    VAR_16 |
    VAR_14 |
    VAR_4 |
    VAR_6,
    (0 << VAR_19) |
    (0 << VAR_17) |
    (0 << VAR_15) |
    (1 << VAR_5) |
    (0 << VAR_7));


 FUNC_2(VAR_74->regmap,
  VAR_69,
  VAR_63 |
  VAR_65 |
  VAR_70 |
  VAR_72,
  (1 << VAR_64) |
  (1 << VAR_66) |
  (0 << VAR_71) |
  (0 << VAR_73));
}
