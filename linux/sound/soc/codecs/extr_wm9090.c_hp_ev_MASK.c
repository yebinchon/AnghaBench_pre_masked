
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
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_17,
   struct snd_kcontrol *VAR_18, int VAR_19)
{
 struct snd_soc_component *VAR_20 = FUNC_4(VAR_17->dapm);
 unsigned int VAR_21 = FUNC_1(VAR_20, VAR_0);

 switch (VAR_19) {
 case 129:
  FUNC_2(VAR_20, VAR_1,
        VAR_2, VAR_2);

  FUNC_0(5);

  FUNC_2(VAR_20, VAR_16,
        VAR_9 | VAR_13,
        VAR_9 | VAR_13);

  VAR_21 |= VAR_8 | VAR_12;
  FUNC_3(VAR_20, VAR_0, VAR_21);







  FUNC_3(VAR_20, VAR_7,
         VAR_3 |
         VAR_4 |
         VAR_6 |
         VAR_5);
  FUNC_5(VAR_20);

  VAR_21 |= VAR_14 | VAR_15 |
   VAR_10 | VAR_11;
  FUNC_3(VAR_20, VAR_0, VAR_21);
  break;

 case 128:
  VAR_21 &= ~(VAR_11 |
    VAR_8 |
    VAR_10 |
    VAR_15 |
    VAR_12 |
    VAR_14);

  FUNC_3(VAR_20, VAR_0, VAR_21);

  FUNC_3(VAR_20, VAR_7, 0);

  FUNC_2(VAR_20, VAR_16,
        VAR_9 | VAR_13,
        0);

  FUNC_2(VAR_20, VAR_1,
        VAR_2, 0);
  break;
 }

 return 0;
}
