
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct simple_amp {int gpiod_enable; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 struct simple_amp* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
       struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_1->dapm);
 struct simple_amp *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 switch (VAR_3) {
 case 129:
  VAR_6 = 1;
  break;
 case 128:
  VAR_6 = 0;
  break;
 default:
  FUNC_0(1, "Unexpected event");
  return -VAR_0;
 }

 FUNC_1(VAR_5->gpiod_enable, VAR_6);

 return 0;
}
