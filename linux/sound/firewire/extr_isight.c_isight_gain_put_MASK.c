
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct isight* private_data; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct isight {scalar_t__ gain_min; scalar_t__ gain_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct isight*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct isight *VAR_4 = VAR_2->private_data;

 if (VAR_3->value.integer.value[0] < VAR_4->gain_min ||
     VAR_3->value.integer.value[0] > VAR_4->gain_max)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_1,
    FUNC_0(VAR_3->value.integer.value[0]));
}
