
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ak4117 {int lock; scalar_t__* errors; } ;


 struct ak4117* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct ak4117 *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->lock);
 VAR_1->value.integer.value[0] =
         VAR_2->errors[VAR_0->private_value];
 VAR_2->errors[VAR_0->private_value] = 0;
 FUNC_2(&VAR_2->lock);
 return 0;
}
