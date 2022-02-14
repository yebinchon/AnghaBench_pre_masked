
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_7__ {int* value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct control_runtime {unsigned int output_mute; TYPE_2__* chip; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct control_runtime* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct control_runtime *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_1->private_value;
 u8 VAR_5 = VAR_3->output_mute >> VAR_4;

 if (VAR_4 > 4) {
  FUNC_0(&VAR_3->chip->dev->dev,
   "Invalid channel in volume control.");
  return -VAR_0;
 }

 VAR_2->value.integer.value[0] = 1 & VAR_5;
 VAR_5 >>= 1;
 VAR_2->value.integer.value[1] = 1 & VAR_5;

 return 0;
}
