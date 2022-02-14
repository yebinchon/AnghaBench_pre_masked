
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {int dapm_mutex; int dapm; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct snd_soc_card* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,char const*) ;

int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_card *VAR_3 = FUNC_2(VAR_1);
 const char *VAR_4 = (const char *)VAR_1->private_value;

 FUNC_0(&VAR_3->dapm_mutex, VAR_0);

 VAR_2->value.integer.value[0] =
  FUNC_3(&VAR_3->dapm, VAR_4);

 FUNC_1(&VAR_3->dapm_mutex);

 return 0;
}
