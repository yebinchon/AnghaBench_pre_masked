
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 u32 VAR_2 = VAR_0->private_value;
 u32 VAR_3;
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (!VAR_4)
  VAR_1->value.integer.value[0] = VAR_3;
 else
  VAR_1->value.integer.value[0] = 0;
 return 0;
}
