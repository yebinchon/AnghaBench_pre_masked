
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm8994_priv {int* retune_mobile_cfg; struct wm8994* wm8994; } ;
struct wm8994_pdata {int num_retune_mobile_cfgs; } ;
struct wm8994 {struct wm8994_pdata pdata; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct wm8994_priv *VAR_4 = FUNC_0(VAR_3);
 struct wm8994 *VAR_5 = VAR_4->wm8994;
 struct wm8994_pdata *VAR_6 = &VAR_5->pdata;
 int VAR_7 = FUNC_2(VAR_1->id.name);
 int VAR_8 = VAR_2->value.enumerated.item[0];

 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_8 >= VAR_6->num_retune_mobile_cfgs)
  return -VAR_0;

 VAR_4->retune_mobile_cfg[VAR_7] = VAR_8;

 FUNC_3(VAR_3, VAR_7);

 return 0;
}
