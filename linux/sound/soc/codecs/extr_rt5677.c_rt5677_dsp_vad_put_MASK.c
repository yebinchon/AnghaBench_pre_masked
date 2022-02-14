
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


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*) ;
 struct rt5677_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct rt5677_priv *VAR_4 = FUNC_3(VAR_3);

 VAR_4->dsp_vad_en = !!VAR_2->value.integer.value[0];

 if (FUNC_2(VAR_3) == VAR_0)
  FUNC_0(VAR_3, VAR_4->dsp_vad_en);

 return 0;
}
