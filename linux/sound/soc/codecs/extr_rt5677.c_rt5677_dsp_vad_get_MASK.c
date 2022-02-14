
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
struct rt5677_priv {int dsp_vad_en; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
  struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 struct rt5677_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_1->value.integer.value[0] = VAR_3->dsp_vad_en;

 return 0;
}
