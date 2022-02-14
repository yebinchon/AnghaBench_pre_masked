
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_emu10k1_fx8010_ctl {unsigned int vcount; int * value; } ;
struct snd_emu10k1 {int reg_lock; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_0(VAR_0);
 struct snd_emu10k1_fx8010_ctl *VAR_3 =
  (struct snd_emu10k1_fx8010_ctl *) VAR_0->private_value;
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_1(&VAR_2->reg_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_3->vcount; VAR_5++)
  VAR_1->value.integer.value[VAR_5] = VAR_3->value[VAR_5];
 FUNC_2(&VAR_2->reg_lock, VAR_4);
 return 0;
}
