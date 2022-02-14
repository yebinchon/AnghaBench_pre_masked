
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {unsigned char** ics_regs; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;
struct TYPE_5__ {unsigned char* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 struct snd_gus_card* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_gus_card *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value & 0xff;
 unsigned char VAR_5, VAR_6;

 FUNC_1(&VAR_2->reg_lock, VAR_3);
 VAR_5 = VAR_2->gf1.ics_regs[VAR_4][0];
 VAR_6 = VAR_2->gf1.ics_regs[VAR_4][1];
 FUNC_2(&VAR_2->reg_lock, VAR_3);
 VAR_1->value.integer.value[0] = VAR_5 & 127;
 VAR_1->value.integer.value[1] = VAR_6 & 127;
 return 0;
}
