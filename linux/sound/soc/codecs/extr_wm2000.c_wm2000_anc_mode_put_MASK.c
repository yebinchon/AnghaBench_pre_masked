
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm2000_priv {unsigned int anc_active; int lock; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct wm2000_priv* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct wm2000_priv*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_1);
 struct wm2000_priv *VAR_4 = FUNC_0(VAR_3->dev);
 unsigned int VAR_5 = VAR_2->value.integer.value[0];
 int VAR_6;

 if (VAR_5 > 1)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);

 VAR_4->anc_active = VAR_5;

 VAR_6 = FUNC_4(VAR_4);

 FUNC_2(&VAR_4->lock);

 return VAR_6;
}
