
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
 int VAR_4 = (VAR_0->private_value >> 16) & 1;
 unsigned int VAR_5 = VAR_0->private_value & 0xff;
 u16 VAR_6;

 FUNC_0(&VAR_2->mutex);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_5);
 FUNC_1(&VAR_2->mutex);
 if (!VAR_4) {
  VAR_1->value.integer.value[0] = 31 - (VAR_6 & 0x1f);
 } else {
  VAR_1->value.integer.value[0] = 31 - ((VAR_6 >> 8) & 0x1f);
  VAR_1->value.integer.value[1] = 31 - (VAR_6 & 0x1f);
 }
 return 0;
}
