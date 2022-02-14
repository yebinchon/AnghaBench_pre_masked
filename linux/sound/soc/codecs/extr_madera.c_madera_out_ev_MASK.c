
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {int out_up_delay; int out_down_delay; int out_down_pending; int out_up_pending; struct madera* madera; } ;
struct madera {int type; } ;
 int FUNC_0 (int) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct madera_priv *VAR_4 = FUNC_1(VAR_3);
 struct madera *VAR_5 = VAR_4->madera;
 int VAR_6;

 switch (VAR_5->type) {
 case 141:
 case 140:
 case 142:
 case 139:
 case 138:
  VAR_6 = 6;
  break;
 default:
  VAR_6 = 17;
  break;
 }

 switch (VAR_2) {
 case 128:
  switch (VAR_0->shift) {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
   VAR_4->out_up_pending++;
   VAR_4->out_up_delay += VAR_6;
   break;
  default:
   break;
  }
  break;

 case 130:
  switch (VAR_0->shift) {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
   VAR_4->out_up_pending--;
   if (!VAR_4->out_up_pending) {
    FUNC_0(VAR_4->out_up_delay);
    VAR_4->out_up_delay = 0;
   }
   break;

  default:
   break;
  }
  break;

 case 129:
  switch (VAR_0->shift) {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
   VAR_4->out_down_pending++;
   VAR_4->out_down_delay++;
   break;
  default:
   break;
  }
  break;

 case 131:
  switch (VAR_0->shift) {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
   VAR_4->out_down_pending--;
   if (!VAR_4->out_down_pending) {
    FUNC_0(VAR_4->out_down_delay);
    VAR_4->out_down_delay = 0;
   }
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 return 0;
}
