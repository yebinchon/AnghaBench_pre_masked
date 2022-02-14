
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_6__ {unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_3__ gpio; int akm; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;
 unsigned int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4, VAR_5;
 VAR_4 = VAR_3->gpio.get_data(VAR_3);
 if (VAR_2->value.integer.value[0]) {

  if (VAR_1->private_value == VAR_0) {

   VAR_5 = VAR_4 & ~VAR_0;

   FUNC_0(VAR_3->akm, 0, 0x01, 0x01);
  } else

   VAR_5 = VAR_4 |
    (unsigned int) VAR_1->private_value;
 } else {

  if (VAR_1->private_value == VAR_0) {

   VAR_5 = VAR_4 | VAR_0;

   FUNC_0(VAR_3->akm, 0, 0x01, 0x03);
  } else

   VAR_5 = VAR_4 &
    ~((unsigned int) VAR_1->private_value);
 }





 if (VAR_4 != VAR_5) {
  VAR_3->gpio.set_data(VAR_3, VAR_5);
  return 1;
 }

 return 0;
}
