
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
struct oxygen {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 unsigned int VAR_3 = (VAR_0->private_value >> 24) & 1;
 unsigned int VAR_4 = VAR_0->private_value & 0xff;
 unsigned int VAR_5 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_6 = VAR_0->private_value & (1 << 16);
 u16 VAR_7;

 FUNC_0(&VAR_2->mutex);
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_2->mutex);
 if (!(VAR_7 & (1 << VAR_5)) ^ !VAR_6)
  VAR_1->value.integer.value[0] = 1;
 else
  VAR_1->value.integer.value[0] = 0;
 return 0;
}
