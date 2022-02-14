
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


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_9,
 struct snd_kcontrol *VAR_10, int VAR_11)
{
 struct snd_soc_component *VAR_12 = FUNC_3(VAR_9->dapm);

 switch (VAR_11) {
 case 129:
  FUNC_0(VAR_12);
  FUNC_1(VAR_12, VAR_8,
   VAR_5 | VAR_7 |
   VAR_6,
   VAR_5 | VAR_7 |
   VAR_6);
  FUNC_1(VAR_12, VAR_4,
   VAR_1, VAR_2);
  break;

 case 128:
  FUNC_1(VAR_12, VAR_4,
   VAR_1, VAR_0);
  FUNC_2(VAR_12, VAR_3, 0);
  FUNC_1(VAR_12, VAR_8,
   VAR_5 | VAR_7 |
   VAR_6, 0);
  break;

 default:
  return 0;
 }

 return 0;
}
