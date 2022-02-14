
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct soc_enum {int shift_l; unsigned int const items; int * values; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_10__ {int name; } ;
struct snd_kcontrol {TYPE_5__ id; scalar_t__ private_value; } ;
struct TYPE_6__ {unsigned int* item; } ;
struct TYPE_7__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {int rate_lock; int * adsp_rate_cache; TYPE_4__* madera; TYPE_3__* adsp; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct madera_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct madera_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_5(VAR_2);
 struct madera_priv *VAR_5 = FUNC_4(VAR_4);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_2->private_value;
 const int VAR_7 = VAR_6->shift_l;
 const unsigned int VAR_8 = VAR_3->value.enumerated.item[0];
 int VAR_9;

 if (VAR_8 >= VAR_6->items)
  return -VAR_1;






 FUNC_2(&VAR_5->rate_lock);

 if (!FUNC_1(VAR_5, VAR_5->adsp[VAR_7].base)) {
  FUNC_0(VAR_5->madera->dev,
    "Cannot change '%s' while in use by active audio paths\n",
    VAR_2->id.name);
  VAR_9 = -VAR_0;
 } else {

  VAR_5->adsp_rate_cache[VAR_7] = VAR_6->values[VAR_8];
  VAR_9 = 0;
 }

 FUNC_3(&VAR_5->rate_lock);

 return VAR_9;
}
