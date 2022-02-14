
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm8994_priv {int vss_hpf_cfg; struct wm8994* wm8994; } ;
struct TYPE_4__ {int num_vss_hpf_cfgs; } ;
struct wm8994 {TYPE_1__ pdata; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
       struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_4);
 struct wm8994_priv *VAR_7 = FUNC_0(VAR_6);
 struct wm8994 *VAR_8 = VAR_7->wm8994;
 int VAR_9 = VAR_5->value.enumerated.item[0];
 int VAR_10;


 VAR_10 = FUNC_1(VAR_6, VAR_3);
 if (VAR_10 < 0 || VAR_10 & VAR_2)
  return -VAR_0;

 if (VAR_9 >= VAR_8->pdata.num_vss_hpf_cfgs)
  return -VAR_1;

 VAR_7->vss_hpf_cfg = VAR_9;

 return 0;
}
