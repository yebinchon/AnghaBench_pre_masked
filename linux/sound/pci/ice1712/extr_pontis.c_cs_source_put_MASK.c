
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* saved; } ;
struct snd_ice1712 {int gpio_mutex; TYPE_3__ gpio; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int ,int,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 unsigned char VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_3->gpio_mutex);
 if (VAR_2->value.enumerated.item[0] != VAR_3->gpio.saved[0]) {
  VAR_3->gpio.saved[0] = VAR_2->value.enumerated.item[0] & 3;
  VAR_4 = 0x80 | (VAR_3->gpio.saved[0] << 3);
  FUNC_3(VAR_3, VAR_0, 0x04, VAR_4);
  VAR_5 = 1;
 }
 FUNC_1(&VAR_3->gpio_mutex);
 return VAR_5;
}
