
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct da7218_priv {int in_filt_en; int mic_lvl_det_en; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ) ;
 struct da7218_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_7,
      struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = FUNC_3(VAR_7->dapm);
 struct da7218_priv *VAR_11 = FUNC_1(VAR_10);
 u8 VAR_12;

 switch (VAR_7->reg) {
 case 133:
  VAR_12 = (1 << VAR_1);
  break;
 case 132:
  VAR_12 = (1 << VAR_2);
  break;
 case 131:
  VAR_12 = (1 << VAR_3);
  break;
 case 130:
  VAR_12 = (1 << VAR_4);
  break;
 default:
  return -VAR_6;
 }

 switch (VAR_9) {
 case 129:
  VAR_11->in_filt_en |= VAR_12;





  if (VAR_12 & VAR_11->mic_lvl_det_en)
   FUNC_0(VAR_5);
  break;
 case 128:
  VAR_11->in_filt_en &= ~VAR_12;
  break;
 default:
  return -VAR_6;
 }


 FUNC_2(VAR_10, VAR_0,
        (VAR_11->in_filt_en & VAR_11->mic_lvl_det_en));

 return 0;
}
