
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int shift_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {unsigned int* adsp_rate_cache; int rate_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct madera_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct soc_enum*,unsigned int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 =
  FUNC_4(VAR_0);
 struct madera_priv *VAR_3 = FUNC_2(VAR_2);
 struct soc_enum *VAR_4 = (struct soc_enum *)VAR_0->private_value;
 unsigned int VAR_5;
 const int VAR_6 = VAR_4->shift_l;
 int VAR_7;

 FUNC_0(&VAR_3->rate_lock);
 VAR_5 = VAR_3->adsp_rate_cache[VAR_6];
 FUNC_1(&VAR_3->rate_lock);

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 VAR_1->value.enumerated.item[0] = VAR_7;

 return 0;
}
