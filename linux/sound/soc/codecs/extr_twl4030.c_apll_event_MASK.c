
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 struct snd_soc_component* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
        struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_0(VAR_0->dapm);

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_3, 1);
  break;
 case 129:
  FUNC_1(VAR_3, 0);
  break;
 }
 return 0;
}
