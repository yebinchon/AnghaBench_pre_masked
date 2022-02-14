
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wm8776 {int ** volumes; } ;
struct snd_maya44 {int mutex; struct snd_wm8776* wm; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct snd_kcontrol*,int *) ;
 struct snd_maya44* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
   struct snd_ctl_elem_value *VAR_1)
{
 struct snd_maya44 *VAR_2 = FUNC_3(VAR_0);
 struct snd_wm8776 *VAR_3 =
  &VAR_2->wm[FUNC_2(VAR_0, &VAR_1->id)];
 unsigned int VAR_4 = VAR_0->private_value;

 FUNC_0(&VAR_2->mutex);
 VAR_1->value.integer.value[0] = VAR_3->volumes[VAR_4][0];
 VAR_1->value.integer.value[1] = VAR_3->volumes[VAR_4][1];
 FUNC_1(&VAR_2->mutex);
 return 0;
}
