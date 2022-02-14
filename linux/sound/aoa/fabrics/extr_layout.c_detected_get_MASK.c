
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_7__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_9__ {TYPE_3__* methods; } ;
struct layout_dev {TYPE_4__ gpio; } ;
struct TYPE_8__ {int (* get_detect ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct layout_dev* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
   struct snd_ctl_elem_value *VAR_4)
{
 struct layout_dev *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 switch (VAR_3->private_value) {
 case 0:
  VAR_6 = VAR_5->gpio.methods->get_detect(&VAR_5->gpio,
         VAR_0);
  break;
 case 1:
  VAR_6 = VAR_5->gpio.methods->get_detect(&VAR_5->gpio,
         VAR_1);
  break;
 default:
  return -VAR_2;
 }
 VAR_4->value.integer.value[0] = VAR_6;
 return 0;
}
