
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 u8 VAR_4 = VAR_1->private_value;
 int VAR_5 = VAR_1->private_value & (1 << 8);

 VAR_2->value.integer.value[0] =
  !!VAR_5 ^ !!(FUNC_0(VAR_3, VAR_0) & VAR_4);
 return 0;
}
