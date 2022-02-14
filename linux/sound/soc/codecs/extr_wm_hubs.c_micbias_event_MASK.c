
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int micb2_delay; int micb1_delay; } ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 struct wm_hubs_data* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_1->dapm);
 struct wm_hubs_data *VAR_5 = FUNC_1(VAR_4);

 switch (VAR_1->shift) {
 case 129:
  if (VAR_5->micb1_delay)
   FUNC_0(VAR_5->micb1_delay);
  break;
 case 128:
  if (VAR_5->micb2_delay)
   FUNC_0(VAR_5->micb2_delay);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
