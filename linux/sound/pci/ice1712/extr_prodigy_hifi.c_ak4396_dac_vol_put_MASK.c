
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; struct prodigy_hifi_spec* spec; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct prodigy_hifi_spec {int* vol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_3(VAR_1);
 struct prodigy_hifi_spec *VAR_4 = VAR_3->spec;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_3->gpio_mutex);
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  if (VAR_2->value.integer.value[VAR_5] != VAR_4->vol[VAR_5]) {
   VAR_4->vol[VAR_5] = VAR_2->value.integer.value[VAR_5];
   FUNC_0(VAR_3, VAR_0 + VAR_5,
         VAR_4->vol[VAR_5] & 0xff);
   VAR_6 = 1;
  }
 }
 FUNC_2(&VAR_3->gpio_mutex);
 return VAR_6;
}
