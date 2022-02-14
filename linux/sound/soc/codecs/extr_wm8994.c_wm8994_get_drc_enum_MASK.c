
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm8994_priv {int * drc_cfg; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0);
 struct wm8994_priv *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = FUNC_2(VAR_0->id.name);

 if (VAR_4 < 0)
  return VAR_4;
 VAR_1->value.enumerated.item[0] = VAR_3->drc_cfg[VAR_4];

 return 0;
}
