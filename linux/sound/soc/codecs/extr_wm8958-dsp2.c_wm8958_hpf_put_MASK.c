
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8994_priv {int* hpf1_ena; int* hpf2_ena; scalar_t__* enh_eq_ena; int mbc_vss; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_3 (struct wm8994_priv*,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 int VAR_5 = VAR_3->private_value;
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3);
 struct wm8994_priv *VAR_7 = FUNC_1(VAR_6);

 if (VAR_5 < 3) {
  if (VAR_7->hpf1_ena[VAR_5 % 3] ==
      VAR_4->value.integer.value[0])
   return 0;
 } else {
  if (VAR_7->hpf2_ena[VAR_5 % 3] ==
      VAR_4->value.integer.value[0])
   return 0;
 }

 if (VAR_4->value.integer.value[0] > 1)
  return -VAR_1;

 if (!VAR_7->mbc_vss)
  return -VAR_2;

 if (FUNC_3(VAR_7, VAR_5 % 3)) {
  FUNC_0(VAR_6->dev, "DSP2 active on %d already\n", VAR_5);
  return -VAR_0;
 }

 if (VAR_7->enh_eq_ena[VAR_5 % 3])
  return -VAR_0;

 if (VAR_5 < 3)
  VAR_7->hpf1_ena[VAR_5 % 3] = VAR_4->value.integer.value[0];
 else
  VAR_7->hpf2_ena[VAR_5 % 3] = VAR_4->value.integer.value[0];

 FUNC_4(VAR_6, VAR_5 % 3, VAR_4->value.integer.value[0]);

 return 0;
}
