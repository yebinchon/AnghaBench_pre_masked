
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_amd7930 {int mgain; int rgain; int pgain; int lock; } ;





 int FUNC_0 (struct snd_amd7930*) ;
 struct snd_amd7930* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_amd7930 *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value;
 int *VAR_5, VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_5 = &VAR_2->mgain;
  break;
 case 130:
  VAR_5 = &VAR_2->rgain;
  break;
 case 128:
 default:
  VAR_5 = &VAR_2->pgain;
  break;
 }

 FUNC_2(&VAR_2->lock, VAR_3);

 if (*VAR_5 != VAR_1->value.integer.value[0]) {
  *VAR_5 = VAR_1->value.integer.value[0] & 0xff;
  FUNC_0(VAR_2);
  VAR_6 = 1;
 } else
  VAR_6 = 0;

 FUNC_3(&VAR_2->lock, VAR_3);

 return VAR_6;
}
