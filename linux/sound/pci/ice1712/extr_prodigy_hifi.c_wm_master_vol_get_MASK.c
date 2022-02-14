
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {struct prodigy_hifi_spec* spec; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct prodigy_hifi_spec {int * master; } ;


 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_0(VAR_0);
 struct prodigy_hifi_spec *VAR_3 = VAR_2->spec;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  VAR_1->value.integer.value[VAR_4] = VAR_3->master[VAR_4];
 return 0;
}
