
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 if (VAR_1 == VAR_3->value.enumerated.item[0])
  return 0;

 VAR_1 = VAR_3->value.enumerated.item[0];

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_0, 1);
  break;
 case 128:
  FUNC_0(VAR_0, 0);
 }

 return 1;
}
