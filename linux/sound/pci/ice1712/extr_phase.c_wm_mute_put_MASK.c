
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct phase28_spec* spec; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct phase28_spec {int* vol; int * master; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 struct phase28_spec *VAR_4 = VAR_3->spec;
 int VAR_5 = 0, VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_1->private_value >> 8;
 VAR_7 = VAR_1->private_value & 0xFF;

 FUNC_1(VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  int VAR_9 = (VAR_4->vol[VAR_7 + VAR_8] & VAR_0) ? 0 : 1;
  if (VAR_2->value.integer.value[VAR_8] != VAR_9) {
   VAR_4->vol[VAR_7 + VAR_8] &= ~VAR_0;
   VAR_4->vol[VAR_7 + VAR_8] |=
    VAR_2->value.integer.value[VAR_8] ? 0 :
    VAR_0;
   FUNC_3(VAR_3, VAR_7 + VAR_8, VAR_4->vol[VAR_7 + VAR_8],
     VAR_4->master[VAR_8]);
   VAR_5 = 1;
  }
 }
 FUNC_0(VAR_3);

 return VAR_5;
}
