
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,short*) ;
 short* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 u32 VAR_4 = VAR_2->private_value;
 short VAR_5[VAR_0], VAR_6;
 u16 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_7) {
   VAR_3->value.integer.value[VAR_6] = 0;
  } else if (VAR_5[VAR_6] >= 0) {
   VAR_3->value.integer.value[VAR_6] =
    VAR_5[VAR_6] << 16;
  } else {



   VAR_3->value.integer.value[VAR_6] =
     VAR_1[VAR_5[VAR_6] / -1000];
  }
 }
 return 0;
}
