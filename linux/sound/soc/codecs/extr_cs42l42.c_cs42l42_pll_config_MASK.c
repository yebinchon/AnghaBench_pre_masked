
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_component {int dev; } ;
struct cs42l42_private {int sclk; int srate; } ;
struct TYPE_3__ {int sclk; int mclk_int; int mclk_src_sel; int mclk_div; int sclk_prediv; int pll_div_int; int pll_div_frac; int pll_mode; int pll_divout; int pll_cal_ratio; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (int ,char*,int,int) ;
 TYPE_1__* VAR_66 ;
 struct cs42l42_private* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_67)
{
 struct cs42l42_private *VAR_68 = FUNC_5(VAR_67);
 int VAR_69;
 u32 VAR_70;

 for (VAR_69 = 0; VAR_69 < FUNC_0(VAR_66); VAR_69++) {
  if (VAR_66[VAR_69].sclk == VAR_68->sclk) {

   FUNC_6(VAR_67, VAR_38,
     VAR_33,
     ((VAR_66[VAR_69].mclk_int !=
     12000000) &&
     (VAR_66[VAR_69].mclk_int !=
     24000000)) <<
     VAR_34);



   FUNC_6(VAR_67, VAR_39,
     VAR_40 |
     VAR_36,
     (VAR_66[VAR_69].mclk_src_sel
     << VAR_41) |
     (VAR_66[VAR_69].mclk_div <<
     VAR_37));

   VAR_70 = VAR_68->sclk / VAR_68->srate;
   if (((VAR_70 * VAR_68->srate) != VAR_68->sclk)
    || ((VAR_70 % 2) != 0)) {
    FUNC_4(VAR_67->dev,
     "Unsupported sclk %d/sample rate %d\n",
     VAR_68->sclk,
     VAR_68->srate);
    return -VAR_65;
   }

   FUNC_6(VAR_67,
     VAR_26,
     VAR_20,
     FUNC_1(VAR_70 - 1) <<
     VAR_21);
   FUNC_6(VAR_67,
     VAR_27,
     VAR_20,
     FUNC_2(VAR_70 - 1) <<
     VAR_21);

   VAR_70 = VAR_70 / 2;
   FUNC_6(VAR_67,
     VAR_24,
     VAR_22,
     FUNC_1(VAR_70 - 1) <<
     VAR_23);
   FUNC_6(VAR_67,
     VAR_25,
     VAR_22,
     FUNC_2(VAR_70 - 1) <<
     VAR_23);
   FUNC_6(VAR_67,
     VAR_1,
     VAR_0,
     VAR_0);

   FUNC_6(VAR_67, VAR_1,
     VAR_3,
     VAR_2 <<
     VAR_4);

   FUNC_6(VAR_67, VAR_32,
     VAR_29,
     (VAR_28 |
     VAR_30) <<
     VAR_31);

   FUNC_6(VAR_67, VAR_35,
     VAR_15,
     VAR_14 <<
     VAR_16);
   FUNC_6(VAR_67,
     VAR_42,
     VAR_18,
     VAR_17 <<
     VAR_19);

   FUNC_6(VAR_67,
     VAR_12,
     VAR_7 |
     VAR_10,
     (VAR_6 <<
     VAR_8) |
     (VAR_9 <<
     VAR_11));

   FUNC_6(VAR_67,
     VAR_13,
     VAR_7 |
     VAR_10,
     (VAR_5 <<
     VAR_8) |
     (VAR_9 <<
     VAR_11));
   if (VAR_66[VAR_69].mclk_src_sel == 0) {

    FUNC_6(VAR_67,
     VAR_46,
     VAR_62, 0);
   } else {

    FUNC_6(VAR_67,
     VAR_51,
     VAR_63,
     VAR_66[VAR_69].sclk_prediv
     << VAR_64);
    FUNC_6(VAR_67,
     VAR_57,
     VAR_58,
     VAR_66[VAR_69].pll_div_int
     << VAR_59);
    FUNC_6(VAR_67,
     VAR_52,
     VAR_55,
     FUNC_1(
     VAR_66[VAR_69].pll_div_frac)
     << VAR_56);
    FUNC_6(VAR_67,
     VAR_53,
     VAR_55,
     FUNC_2(
     VAR_66[VAR_69].pll_div_frac)
     << VAR_56);
    FUNC_6(VAR_67,
     VAR_54,
     VAR_55,
     FUNC_3(
     VAR_66[VAR_69].pll_div_frac)
     << VAR_56);
    FUNC_6(VAR_67,
     VAR_48,
     VAR_60,
     VAR_66[VAR_69].pll_mode
     << VAR_61);
    FUNC_6(VAR_67,
     VAR_47,
     VAR_49,
     VAR_66[VAR_69].pll_divout
     << VAR_50);
    FUNC_6(VAR_67,
     VAR_43,
     VAR_44,
     VAR_66[VAR_69].pll_cal_ratio
     << VAR_45);
   }
   return 0;
  }
 }

 return -VAR_65;
}
