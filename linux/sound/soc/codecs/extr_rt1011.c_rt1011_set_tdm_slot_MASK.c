
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_2 (struct snd_soc_dapm_context*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_29,
 unsigned int VAR_30, unsigned int VAR_31, int VAR_32, int VAR_33)
{
 struct snd_soc_component *VAR_34 = VAR_29->component;
 struct snd_soc_dapm_context *VAR_35 =
  FUNC_0(VAR_34);
 unsigned int VAR_36 = 0, VAR_37 = 0;
 int VAR_38 = 0;

 FUNC_2(VAR_35);
 if (VAR_31 || VAR_30)
  VAR_37 = VAR_25;

 switch (VAR_32) {
 case 4:
  VAR_36 |= VAR_18;
  VAR_36 |= VAR_15;
  break;
 case 6:
  VAR_36 |= VAR_19;
  VAR_36 |= VAR_16;
  break;
 case 8:
  VAR_36 |= VAR_20;
  VAR_36 |= VAR_17;
  break;
 case 2:
  break;
 default:
  VAR_38 = -VAR_0;
 }

 switch (VAR_33) {
 case 20:
  VAR_36 |= VAR_10;
  VAR_36 |= VAR_5;
  break;
 case 24:
  VAR_36 |= VAR_11;
  VAR_36 |= VAR_6;
  break;
 case 32:
  VAR_36 |= VAR_12;
  VAR_36 |= VAR_7;
  break;
 case 16:
  break;
 default:
  VAR_38 = -VAR_0;
 }

 FUNC_1(VAR_34, VAR_21,
  VAR_14 | VAR_9 |
  VAR_13 | VAR_8, VAR_36);
 FUNC_1(VAR_34, VAR_23,
  VAR_14 | VAR_9 |
  VAR_13 | VAR_8, VAR_36);
 FUNC_1(VAR_34, VAR_22,
  VAR_26, VAR_37);
 FUNC_1(VAR_34, VAR_24,
  VAR_27, VAR_37);
 FUNC_1(VAR_34, VAR_28,
  VAR_2 | VAR_4,
  VAR_1 | VAR_3);

 FUNC_3(VAR_35);
 return VAR_38;
}
