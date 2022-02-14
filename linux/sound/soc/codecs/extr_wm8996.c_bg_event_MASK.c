
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
      struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_1->dapm);
 int VAR_5 = 0;

 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_4);
  break;
 case 129:
  FUNC_2(VAR_4);
  break;
 default:
  FUNC_0(1, "Invalid event %d\n", VAR_3);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
