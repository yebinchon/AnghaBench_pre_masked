
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tas {int cached_volume_l; int cached_volume_r; int mtx; scalar_t__ hw_enabled; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tas* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct tas*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct tas *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->value.integer.value[0] < 0 ||
     VAR_2->value.integer.value[0] > 177)
  return -VAR_0;
 if (VAR_2->value.integer.value[1] < 0 ||
     VAR_2->value.integer.value[1] > 177)
  return -VAR_0;

 FUNC_0(&VAR_3->mtx);
 if (VAR_3->cached_volume_l == VAR_2->value.integer.value[0]
  && VAR_3->cached_volume_r == VAR_2->value.integer.value[1]) {
  FUNC_1(&VAR_3->mtx);
  return 0;
 }

 VAR_3->cached_volume_l = VAR_2->value.integer.value[0];
 VAR_3->cached_volume_r = VAR_2->value.integer.value[1];
 if (VAR_3->hw_enabled)
  FUNC_3(VAR_3);
 FUNC_1(&VAR_3->mtx);
 return 1;
}
