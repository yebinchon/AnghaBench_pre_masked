
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct layout_dev {int switch_on_lineout; int switch_on_headphone; } ;


 int VAR_0 ;
 struct layout_dev* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct layout_dev *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_1->private_value) {
 case 0:
  VAR_2->value.integer.value[0] = VAR_3->switch_on_headphone;
  break;
 case 1:
  VAR_2->value.integer.value[0] = VAR_3->switch_on_lineout;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
