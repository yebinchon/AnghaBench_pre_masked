
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int num_total_dacs; struct aureon_spec* spec; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {int* master; int * vol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_2);
 struct aureon_spec *VAR_5 = VAR_4->spec;
 int VAR_6 = 0, VAR_7;

 FUNC_1(VAR_4);
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  int VAR_8 = (VAR_5->master[VAR_7] & VAR_1) ? 0 : 1;
  if (VAR_3->value.integer.value[VAR_7] != VAR_8) {
   int VAR_9;
   VAR_5->master[VAR_7] &= ~VAR_1;
   VAR_5->master[VAR_7] |=
    VAR_3->value.integer.value[VAR_7] ? 0 : VAR_1;
   for (VAR_9 = 0; VAR_9 < VAR_4->num_total_dacs; VAR_9 += 2)
    FUNC_3(VAR_4, VAR_0 + VAR_9 + VAR_7,
        VAR_5->vol[VAR_9 + VAR_7],
        VAR_5->master[VAR_7]);
   VAR_6 = 1;
  }
 }
 FUNC_0(VAR_4);

 return VAR_6;
}
