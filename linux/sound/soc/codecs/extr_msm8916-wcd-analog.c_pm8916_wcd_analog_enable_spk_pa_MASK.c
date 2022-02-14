
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
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
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_20,
         struct snd_kcontrol *VAR_21,
         int VAR_22)
{
 struct snd_soc_component *VAR_23 = FUNC_1(VAR_20->dapm);

 switch (VAR_22) {
 case 128:
  FUNC_0(VAR_23, VAR_3,
        VAR_17 |
        VAR_13 |
        VAR_19 |
        VAR_15,
        VAR_16|
        VAR_12 |
        VAR_18 |
        VAR_14);

  FUNC_0(VAR_23, VAR_0,
        VAR_5,
        VAR_4);
  break;
 case 129:
  FUNC_0(VAR_23, VAR_2,
        VAR_10,
        VAR_11);
  FUNC_0(VAR_23, VAR_20->reg,
        VAR_9,
        VAR_8);
  break;
 case 130:
  FUNC_0(VAR_23, VAR_3,
        VAR_17|
        VAR_13 |
        VAR_19 |
        VAR_15, 0);

  FUNC_0(VAR_23, VAR_1,
        VAR_6,
        VAR_7);
  FUNC_0(VAR_23, VAR_0,
        VAR_5, 0);
  break;
 }
 return 0;
}
