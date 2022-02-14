
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_37,
      struct snd_kcontrol *VAR_38, int VAR_39)
{
 struct snd_soc_component *VAR_40 = FUNC_3(VAR_37->dapm);

 switch (VAR_39) {
 case 129:

  FUNC_1(VAR_40, VAR_10,
        VAR_0 | VAR_2 |
        VAR_4,
        VAR_7 << VAR_1 |
        VAR_6 << VAR_3 |
        VAR_7 << VAR_5);
  FUNC_2(VAR_40, VAR_27 +
         VAR_26, 0xfc00);
  FUNC_1(VAR_40, VAR_9,
        VAR_36, VAR_35);
  FUNC_1(VAR_40, VAR_9,
        VAR_30, VAR_29);
  FUNC_1(VAR_40, VAR_9,
        VAR_30 | VAR_17 |
        VAR_20, VAR_28 |
        VAR_16 | VAR_19);
  FUNC_1(VAR_40, VAR_24,
        VAR_25 | VAR_34, 0);
  FUNC_0(100);
  FUNC_1(VAR_40, VAR_9,
        VAR_23 | VAR_17 |
        VAR_20, VAR_21 |
        VAR_15 | VAR_18);
  FUNC_0(20);
  FUNC_1(VAR_40, VAR_14,
        VAR_13, VAR_12);
  break;

 case 128:

  FUNC_1(VAR_40, VAR_10,
        VAR_0 | VAR_2 |
        VAR_4,
        VAR_8 << VAR_1 |
        VAR_6 << VAR_3 |
        VAR_8 << VAR_5);
  FUNC_2(VAR_40, VAR_27 +
         VAR_26, 0xfc00);
  FUNC_1(VAR_40, VAR_9,
        VAR_23, VAR_22);
  FUNC_1(VAR_40, VAR_9,
        VAR_33, VAR_32);
  FUNC_1(VAR_40, VAR_9,
        VAR_33 | VAR_17 |
        VAR_20, VAR_31 |
        VAR_16 | VAR_19);
  FUNC_1(VAR_40, VAR_14,
        VAR_13, VAR_11);
  FUNC_0(90);
  FUNC_1(VAR_40, VAR_24,
        VAR_25 | VAR_34,
        VAR_25 | VAR_34);
  FUNC_0(30);
  break;

 default:
  return 0;
 }

 return 0;
}
