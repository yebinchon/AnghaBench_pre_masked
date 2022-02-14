
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {unsigned int direction; } ;
struct snd_ice1712 {int gpio_mutex; TYPE_3__ gpio; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;
 int VAR_4;
 FUNC_0(&VAR_2->gpio_mutex);

 VAR_3 = VAR_1->value.integer.value[0] & 0xff0f;
 VAR_4 = (VAR_3 != VAR_2->gpio.direction);
 VAR_2->gpio.direction = VAR_3;
 FUNC_1(&VAR_2->gpio_mutex);
 return VAR_4;
}
