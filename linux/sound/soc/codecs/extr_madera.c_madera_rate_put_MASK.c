
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_enum {unsigned int items; unsigned int shift_l; unsigned int mask; int reg; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct snd_kcontrol {TYPE_4__ id; scalar_t__ private_value; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {int rate_lock; TYPE_3__* madera; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (struct madera_priv*,int ) ;
 int FUNC_2 (struct madera_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct madera_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int*) ;
 unsigned int FUNC_7 (struct soc_enum*,unsigned int) ;
 struct snd_soc_component* FUNC_8 (struct snd_kcontrol*) ;
 int FUNC_9 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

int FUNC_10(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_8(VAR_2);
 struct madera_priv *VAR_5 = FUNC_5(VAR_4);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_2->private_value;
 unsigned int VAR_7 = VAR_3->value.enumerated.item[0];
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_7 >= VAR_6->items)
  return -VAR_1;





 FUNC_3(&VAR_5->rate_lock);

 VAR_9 = FUNC_6(VAR_4, VAR_6->reg, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->madera->dev, "Failed to read 0x%x (%d)\n",
    VAR_6->reg, VAR_9);
  goto out;
 }
 VAR_8 >>= VAR_6->shift_l;
 VAR_8 &= VAR_6->mask;
 if (FUNC_7(VAR_6, VAR_7) == VAR_8) {
  VAR_9 = 0;
  goto out;
 }

 if (!FUNC_1(VAR_5, VAR_6->reg)) {
  FUNC_0(VAR_5->madera->dev,
    "Cannot change '%s' while in use by active audio paths\n",
    VAR_2->id.name);
  VAR_9 = -VAR_0;
 } else {

  FUNC_2(VAR_5);
  VAR_9 = FUNC_9(VAR_2, VAR_3);
  FUNC_2(VAR_5);
 }
out:
 FUNC_4(&VAR_5->rate_lock);

 return VAR_9;
}
