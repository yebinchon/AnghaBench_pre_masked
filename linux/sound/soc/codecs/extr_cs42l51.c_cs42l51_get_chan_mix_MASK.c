
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4 = FUNC_0(VAR_3, VAR_0)&3;

 switch (VAR_4) {
 default:
 case 0:
  VAR_2->value.enumerated.item[0] = 0;
  break;

 case 1:
 case 2:
  VAR_2->value.enumerated.item[0] = 1;
  break;
 case 3:
  VAR_2->value.enumerated.item[0] = 2;
  break;
 }

 return 0;
}
