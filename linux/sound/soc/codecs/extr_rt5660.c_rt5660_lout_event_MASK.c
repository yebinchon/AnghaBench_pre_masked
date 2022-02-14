
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


 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_7,
 struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = FUNC_1(VAR_7->dapm);

 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_10, VAR_0,
   VAR_6 | VAR_1,
   VAR_5 | VAR_3);
  break;

 case 128:
  FUNC_0(VAR_10, VAR_0,
   VAR_6 | VAR_1,
   VAR_4 | VAR_2);
  break;

 default:
  return 0;
 }

 return 0;
}
