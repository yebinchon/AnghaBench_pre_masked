
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {int dapm; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_card* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_0(VAR_0);
 const char *VAR_3 = (const char *)VAR_0->private_value;

 if (VAR_1->value.integer.value[0])
  FUNC_2(&VAR_2->dapm, VAR_3);
 else
  FUNC_1(&VAR_2->dapm, VAR_3);

 FUNC_3(&VAR_2->dapm);
 return 0;
}
