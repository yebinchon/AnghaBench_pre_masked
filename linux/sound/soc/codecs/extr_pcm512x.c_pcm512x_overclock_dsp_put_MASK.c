
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pcm512x_priv {int overclock_dsp; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_soc_component*) ;
 struct pcm512x_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_1);
 struct pcm512x_priv *VAR_4 = FUNC_1(VAR_3);

 switch (FUNC_0(VAR_3)) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 VAR_4->overclock_dsp = VAR_2->value.integer.value[0];
 return 0;
}
