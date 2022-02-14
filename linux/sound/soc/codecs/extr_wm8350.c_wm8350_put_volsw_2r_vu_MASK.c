
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8350_output {int active; int right_vol; int left_vol; } ;
struct wm8350_data {struct wm8350_output out2; struct wm8350_output out1; } ;
struct soc_mixer_control {unsigned int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;




 int VAR_0 ;
 struct wm8350_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_1);
 struct wm8350_data *VAR_4 = FUNC_0(VAR_3);
 struct wm8350_output *VAR_5 = ((void*)0);
 struct soc_mixer_control *VAR_6 =
  (struct soc_mixer_control *)VAR_1->private_value;
 int VAR_7;
 unsigned int VAR_8 = VAR_6->reg;
 u16 VAR_9;




 switch (VAR_8) {
 case 129:
  VAR_5 = &VAR_4->out1;
  break;
 case 128:
  VAR_5 = &VAR_4->out2;
  break;
 default:
  break;
 }

 if (VAR_5) {
  VAR_5->left_vol = VAR_2->value.integer.value[0];
  VAR_5->right_vol = VAR_2->value.integer.value[1];
  if (!VAR_5->active)
   return 1;
 }

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_9 = FUNC_1(VAR_3, VAR_8);
 FUNC_2(VAR_3, VAR_8, VAR_9 | VAR_0);
 return 1;
}
