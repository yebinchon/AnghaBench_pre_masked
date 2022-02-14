
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
struct ak4117 {int dummy; } ;


 int FUNC_0 (struct ak4117*,unsigned char) ;
 struct ak4117* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct ak4117 *VAR_2 = FUNC_1(VAR_0);
 unsigned char VAR_3 = VAR_0->private_value & 0xff;
 unsigned char VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 unsigned char VAR_5 = (VAR_0->private_value >> 31) & 1;

 VAR_1->value.integer.value[0] = ((FUNC_0(VAR_2, VAR_3) & (1 << VAR_4)) ? 1 : 0) ^ VAR_5;
 return 0;
}
