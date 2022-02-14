
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {int* vol; } ;


 int VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_0(VAR_1);
 struct aureon_spec *VAR_4 = VAR_3->spec;
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_1->private_value >> 8;
 VAR_6 = VAR_1->private_value & 0xFF;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_2->value.integer.value[VAR_7] =
   (VAR_4->vol[VAR_6 + VAR_7] & VAR_0) ? 0 : 1;
 return 0;
}
