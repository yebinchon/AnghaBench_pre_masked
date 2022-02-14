
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;
struct TYPE_3__ {unsigned short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_2);
 unsigned short VAR_5;

 FUNC_0(&VAR_4->gpio_mutex);
 VAR_5 = FUNC_3(VAR_4, VAR_1) & 0xff;
 VAR_5 = VAR_5 > VAR_0 ? (VAR_5 - VAR_0) : 0;
 VAR_3->value.integer.value[0] = VAR_5;
 FUNC_1(&VAR_4->gpio_mutex);
 return 0;
}
