
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
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_12,
      struct snd_kcontrol *VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = FUNC_1(VAR_12->dapm);

 switch (VAR_14) {
 case 128:

  FUNC_0(VAR_15, VAR_11,
        VAR_6 |
        VAR_10,
        VAR_5 |
        VAR_9);


  FUNC_0(VAR_15, VAR_0,
        VAR_4 |
        VAR_8,
        VAR_3 |
        VAR_7);
  break;
 case 129:
  FUNC_0(VAR_15, VAR_1,
        VAR_2, 0);
  break;
 }

 return 0;
}
