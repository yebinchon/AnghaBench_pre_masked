
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct qtet_kcontrol_private {unsigned int (* get_register ) (struct snd_ice1712*) ;unsigned int bit; int (* set_register ) (struct snd_ice1712*,unsigned int) ;} ;


 struct qtet_kcontrol_private* VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_value *VAR_2)
{
 struct qtet_kcontrol_private VAR_3 =
  VAR_0[VAR_1->private_value];
 struct snd_ice1712 *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5, VAR_6;
 VAR_5 = VAR_3.get_register(VAR_4);
 if (VAR_2->value.integer.value[0])
  VAR_6 = VAR_5 | VAR_3.bit;
 else
  VAR_6 = VAR_5 & ~VAR_3.bit;
 if (VAR_5 != VAR_6) {
  VAR_3.set_register(VAR_4, VAR_6);
  return 1;
 }

 return 0;
}
