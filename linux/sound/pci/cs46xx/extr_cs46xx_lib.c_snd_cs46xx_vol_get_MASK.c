
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
struct snd_cs46xx {int dummy; } ;


 unsigned int FUNC_0 (struct snd_cs46xx*,int) ;
 struct snd_cs46xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_cs46xx *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_0->private_value;
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_1->value.integer.value[0] = 0xffff - (VAR_4 >> 16);
 VAR_1->value.integer.value[1] = 0xffff - (VAR_4 & 0xffff);
 return 0;
}
