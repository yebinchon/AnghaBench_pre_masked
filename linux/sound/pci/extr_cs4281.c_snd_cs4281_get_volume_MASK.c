
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
struct cs4281 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cs4281*,int) ;
 struct cs4281* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct cs4281 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = (VAR_1->private_value >> 16) & 0xffff;
 int VAR_5 = VAR_1->private_value & 0xffff;
 int VAR_6, VAR_7;

 VAR_6 = VAR_0 - (FUNC_0(VAR_3, VAR_4) & VAR_0);
 VAR_7 = VAR_0 - (FUNC_0(VAR_3, VAR_5) & VAR_0);

 VAR_2->value.integer.value[0] = VAR_6;
 VAR_2->value.integer.value[1] = VAR_7;
 return 0;
}
