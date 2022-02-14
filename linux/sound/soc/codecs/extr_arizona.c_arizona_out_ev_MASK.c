
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona_priv {int out_up_delay; int out_down_delay; int out_down_pending; int out_up_pending; struct arizona* arizona; } ;
struct arizona {int type; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 struct arizona_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1,
     int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_0->dapm);
 struct arizona_priv *VAR_4 = FUNC_2(VAR_3);
 struct arizona *VAR_5 = VAR_4->arizona;

 switch (VAR_2) {
 case 132:
  switch (VAR_0->shift) {
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
   VAR_4->out_up_pending++;
   VAR_4->out_up_delay += 17;
   break;
  case 137:
  case 136:
   VAR_4->out_up_pending++;
   switch (VAR_5->type) {
   case 130:
   case 129:
    break;
   default:
    VAR_4->out_up_delay += 10;
    break;
   }
   break;
  default:
   break;
  }
  break;
 case 134:
  switch (VAR_0->shift) {
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
   VAR_4->out_up_pending--;
   if (!VAR_4->out_up_pending && VAR_4->out_up_delay) {
    FUNC_0(VAR_3->dev, "Power up delay: %d\n",
     VAR_4->out_up_delay);
    FUNC_1(VAR_4->out_up_delay);
    VAR_4->out_up_delay = 0;
   }
   break;

  default:
   break;
  }
  break;
 case 133:
  switch (VAR_0->shift) {
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
   VAR_4->out_down_pending++;
   VAR_4->out_down_delay++;
   break;
  case 137:
  case 136:
   VAR_4->out_down_pending++;
   switch (VAR_5->type) {
   case 130:
   case 129:
    break;
   case 128:
   case 131:
    VAR_4->out_down_delay += 5;
    break;
   default:
    VAR_4->out_down_delay++;
    break;
   }
  default:
   break;
  }
  break;
 case 135:
  switch (VAR_0->shift) {
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
   VAR_4->out_down_pending--;
   if (!VAR_4->out_down_pending && VAR_4->out_down_delay) {
    FUNC_0(VAR_3->dev, "Power down delay: %d\n",
     VAR_4->out_down_delay);
    FUNC_1(VAR_4->out_down_delay);
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
