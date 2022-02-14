
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_1(VAR_2->dapm);

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_5, VAR_0,
   VAR_1, VAR_1);
  break;

 case 128:
  FUNC_0(VAR_5, VAR_0,
   VAR_1, 0);
  break;

 default:
  return 0;
 }

 return 0;

}
