
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8994_priv {int* mbc_ena; scalar_t__* enh_eq_ena; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_3 (struct wm8994_priv*,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 int VAR_4 = VAR_2->private_value;
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2);
 struct wm8994_priv *VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->mbc_ena[VAR_4] == VAR_3->value.integer.value[0])
  return 0;

 if (VAR_3->value.integer.value[0] > 1)
  return -VAR_1;

 if (FUNC_3(VAR_6, VAR_4)) {
  FUNC_0(VAR_5->dev, "DSP2 active on %d already\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_6->enh_eq_ena[VAR_4])
  return -VAR_0;

 VAR_6->mbc_ena[VAR_4] = VAR_3->value.integer.value[0];

 FUNC_4(VAR_5, VAR_4, VAR_6->mbc_ena[VAR_4]);

 return 0;
}
