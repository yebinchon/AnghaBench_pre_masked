
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8962_priv {int dsp2_ena; int dsp2_ena_lock; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wm8962_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_component*,int) ;
 int FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 int VAR_4 = VAR_2->private_value;
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_2);
 struct wm8962_priv *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_6->dsp2_ena;
 int VAR_8 = 0;
 int VAR_9 = FUNC_3(VAR_5, VAR_1) &
  VAR_0;

 FUNC_0(&VAR_6->dsp2_ena_lock);

 if (VAR_3->value.integer.value[0])
  VAR_6->dsp2_ena |= 1 << VAR_4;
 else
  VAR_6->dsp2_ena &= ~(1 << VAR_4);

 if (VAR_6->dsp2_ena == VAR_7)
  goto out;

 VAR_8 = 1;

 if (VAR_9) {
  if (VAR_6->dsp2_ena)
   FUNC_5(VAR_5, VAR_6->dsp2_ena);
  else
   FUNC_6(VAR_5);
 }

out:
 FUNC_1(&VAR_6->dsp2_ena_lock);

 return VAR_8;
}
