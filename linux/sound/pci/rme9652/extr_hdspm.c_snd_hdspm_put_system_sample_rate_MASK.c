
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int) ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *
         VAR_2)
{
 struct hdspm *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_2->value.integer.value[0];

 if (VAR_4 < 27000 || VAR_4 > 207000)
  return -VAR_0;
 FUNC_0(VAR_3, VAR_2->value.integer.value[0]);
 return 0;
}
