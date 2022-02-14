
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
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_29,
      struct snd_kcontrol *VAR_30, int VAR_31)
{
 struct snd_soc_component *VAR_32 = FUNC_5(VAR_29->dapm);
 unsigned int VAR_33;

 VAR_33 = FUNC_2(VAR_32, VAR_0);

 switch (VAR_31) {
 case 129:
  FUNC_3(VAR_32, VAR_1,
        VAR_3, VAR_2);

  FUNC_1(5);

  FUNC_3(VAR_32, VAR_28,
        VAR_15 |
        VAR_23,
        VAR_14 | VAR_22);

  FUNC_6(20);

  VAR_33 |= VAR_12 | VAR_20;
  FUNC_4(VAR_32, VAR_0, VAR_33);

  FUNC_4(VAR_32, VAR_10, VAR_4 |
         VAR_5);

  FUNC_0(VAR_32, VAR_11,
        VAR_8 |
        VAR_9,
        VAR_6 |
        VAR_7);

  VAR_33 |= VAR_24 | VAR_26 |
         VAR_16 | VAR_18;
  FUNC_4(VAR_32, VAR_0, VAR_33);

  break;
 case 128:
  FUNC_3(VAR_32, VAR_0,
        VAR_17 |
        VAR_25 |
        VAR_19 |
        VAR_27, 0);

  FUNC_3(VAR_32, VAR_0,
        VAR_13 |
        VAR_21, 0);

  FUNC_4(VAR_32, VAR_10, 0);

  FUNC_3(VAR_32, VAR_28,
        VAR_15 |
        VAR_23,
        0);
  break;
 }

 return 0;
}
