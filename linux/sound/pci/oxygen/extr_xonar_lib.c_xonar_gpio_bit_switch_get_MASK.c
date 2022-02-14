
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,int ) ;

int FUNC_1(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 u16 VAR_5 = VAR_2->private_value;
 bool VAR_6 = VAR_2->private_value & VAR_1;

 VAR_3->value.integer.value[0] =
  !!(FUNC_0(VAR_4, VAR_0) & VAR_5) ^ VAR_6;
 return 0;
}
