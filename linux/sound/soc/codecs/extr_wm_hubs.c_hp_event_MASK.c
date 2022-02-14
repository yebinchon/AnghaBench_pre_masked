
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_15,
      struct snd_kcontrol *VAR_16, int VAR_17)
{
 struct snd_soc_component *VAR_18 = FUNC_5(VAR_15->dapm);
 unsigned int VAR_19 = FUNC_2(VAR_18, VAR_0);

 switch (VAR_17) {
 case 129:
  FUNC_3(VAR_18, VAR_1,
        VAR_2, VAR_2);

  FUNC_1(5);

  FUNC_3(VAR_18, VAR_14,
        VAR_7 | VAR_11,
        VAR_7 | VAR_11);

  VAR_19 |= VAR_6 | VAR_10;
  FUNC_4(VAR_18, VAR_0, VAR_19);

  FUNC_3(VAR_18, VAR_5,
        VAR_3, 0);

  FUNC_0(VAR_18);

  VAR_19 |= VAR_12 | VAR_13 |
   VAR_8 | VAR_9;
  FUNC_4(VAR_18, VAR_0, VAR_19);
  break;

 case 128:
  FUNC_3(VAR_18, VAR_0,
        VAR_8 |
        VAR_12 |
        VAR_9 |
        VAR_13, 0);

  FUNC_3(VAR_18, VAR_0,
        VAR_6 |
        VAR_10, 0);

  FUNC_4(VAR_18, VAR_4, 0);

  FUNC_3(VAR_18, VAR_14,
        VAR_7 | VAR_11,
        0);
  break;
 }

 return 0;
}
