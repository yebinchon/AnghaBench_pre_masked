
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int lineout1n_ena; int lineout1p_ena; int lineout2n_ena; int lineout2p_ena; } ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;




 struct wm_hubs_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_1->dapm);
 struct wm_hubs_data *VAR_5 = FUNC_2(VAR_4);
 bool *VAR_6;

 switch (VAR_1->shift) {
 case 131:
  VAR_6 = &VAR_5->lineout1n_ena;
  break;
 case 130:
  VAR_6 = &VAR_5->lineout1p_ena;
  break;
 case 129:
  VAR_6 = &VAR_5->lineout2n_ena;
  break;
 case 128:
  VAR_6 = &VAR_5->lineout2p_ena;
  break;
 default:
  FUNC_1(1, "Unknown line output");
  return -VAR_0;
 }

 *VAR_6 = FUNC_0(VAR_3);

 return 0;
}
