
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_emu8000 {unsigned short treble_level; unsigned short bass_level; int control_lock; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (struct snd_emu8000*) ;
 struct snd_emu8000* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_emu8000 *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 int VAR_4;
 unsigned short VAR_5;

 VAR_5 = VAR_1->value.integer.value[0] % 12;
 FUNC_2(&VAR_2->control_lock, VAR_3);
 if (VAR_0->private_value) {
  VAR_4 = VAR_5 != VAR_2->treble_level;
  VAR_2->treble_level = VAR_5;
 } else {
  VAR_4 = VAR_5 != VAR_2->bass_level;
  VAR_2->bass_level = VAR_5;
 }
 FUNC_3(&VAR_2->control_lock, VAR_3);
 FUNC_0(VAR_2);
 return VAR_4;
}
