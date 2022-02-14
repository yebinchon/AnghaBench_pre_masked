
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int rx_bias_count; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_4,
  struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_4->dapm);
 struct wcd9335_codec *VAR_8 = FUNC_0(VAR_7->dev);

 switch (VAR_6) {
 case 128:
  VAR_8->rx_bias_count++;
  if (VAR_8->rx_bias_count == 1) {
   FUNC_3(VAR_7);
   FUNC_1(VAR_7,
      VAR_3,
      VAR_2,
      VAR_1);
  }
  break;
 case 129:
  VAR_8->rx_bias_count--;
  if (!VAR_8->rx_bias_count)
   FUNC_1(VAR_7,
     VAR_3,
     VAR_2,
     VAR_0);
  break;
 };

 return 0;
}
