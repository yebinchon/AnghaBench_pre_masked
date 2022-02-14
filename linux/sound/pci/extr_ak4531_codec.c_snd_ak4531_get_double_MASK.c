
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
struct snd_ak4531 {int* regs; int reg_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ak4531* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ak4531 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5 = (VAR_0->private_value >> 16) & 0x07;
 int VAR_6 = (VAR_0->private_value >> 19) & 0x07;
 int VAR_7 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_8 = (VAR_0->private_value >> 22) & 1;
 int VAR_9, VAR_10;

 FUNC_0(&VAR_2->reg_mutex);
 VAR_9 = (VAR_2->regs[VAR_3] >> VAR_5) & VAR_7;
 VAR_10 = (VAR_2->regs[VAR_4] >> VAR_6) & VAR_7;
 FUNC_1(&VAR_2->reg_mutex);
 if (VAR_8) {
  VAR_9 = VAR_7 - VAR_9;
  VAR_10 = VAR_7 - VAR_10;
 }
 VAR_1->value.integer.value[0] = VAR_9;
 VAR_1->value.integer.value[1] = VAR_10;
 return 0;
}
