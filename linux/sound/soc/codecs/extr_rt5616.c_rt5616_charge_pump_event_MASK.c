
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__,int,int) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_39,
        struct snd_kcontrol *VAR_40, int VAR_41)
{
 struct snd_soc_component *VAR_42 = FUNC_3(VAR_39->dapm);

 switch (VAR_41) {
 case 129:

  FUNC_1(VAR_42, VAR_3,
        VAR_5, VAR_4);
  FUNC_1(VAR_42, VAR_2,
        VAR_14 | VAR_24 |
        VAR_6, VAR_16 |
        VAR_22 | VAR_8);
  FUNC_2(VAR_42, VAR_27 +
         VAR_17, 0x9f00);

  FUNC_1(VAR_42, VAR_28,
        VAR_29 | VAR_30, 0);
  FUNC_1(VAR_42, VAR_36,
        VAR_34 | VAR_35,
        VAR_34 | VAR_35);
  FUNC_1(VAR_42, VAR_28,
        VAR_32 | VAR_33 |
        VAR_31, VAR_32 |
        VAR_33 | VAR_31);
  FUNC_0(50);
  FUNC_1(VAR_42, VAR_28,
        VAR_29 | VAR_30,
        VAR_29 | VAR_30);

  FUNC_1(VAR_42, VAR_0,
        VAR_26, VAR_25);
  FUNC_1(VAR_42, VAR_27 +
        VAR_1, 0x0200, 0x0200);
  FUNC_1(VAR_42, VAR_2,
        VAR_13 | VAR_24,
        VAR_12 | VAR_23);
  break;
 case 128:
  FUNC_1(VAR_42, VAR_27 +
        VAR_1, 0x0200, 0x0);
  FUNC_1(VAR_42, VAR_2,
        VAR_24 | VAR_19 |
        VAR_21, VAR_22 |
        VAR_18 | VAR_20);

  FUNC_1(VAR_42, VAR_2,
        VAR_38 |
        VAR_10 | VAR_13 |
        VAR_14 | VAR_24 |
        VAR_6,
        VAR_37 | VAR_9 |
        VAR_11 | VAR_15 |
        VAR_23 | VAR_7);
  FUNC_1(VAR_42, VAR_28,
        VAR_32 | VAR_33 |
        VAR_31, 0);
  break;
 default:
  return 0;
 }

 return 0;
}
