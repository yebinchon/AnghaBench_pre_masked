
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (struct snd_ice1712*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5, VAR_6;
 unsigned char VAR_7;

 VAR_6 = FUNC_0(VAR_1, &VAR_2->id);
 if (VAR_6 == 0) {
  for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
   VAR_5 = VAR_0 + VAR_4;
   VAR_7 = FUNC_3(VAR_3, VAR_5) & 0x0f;
   VAR_2->value.integer.value[VAR_4] = 0x0f - VAR_7;
  }
 } else {
  for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
   VAR_5 = VAR_0 + VAR_4;
   VAR_7 = FUNC_2(VAR_3, VAR_5) & 0x0f;
   VAR_2->value.integer.value[VAR_4] = 0x0f - VAR_7;
  }
 }
 return 0;
}
