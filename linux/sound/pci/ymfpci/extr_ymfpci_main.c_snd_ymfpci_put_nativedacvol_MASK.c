
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {int reg_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_ymfpci*,unsigned int) ;
 int FUNC_2 (struct snd_ymfpci*,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ymfpci *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = VAR_1;
 unsigned int VAR_6 = VAR_0;
 int VAR_7;
 unsigned int VAR_8, VAR_9;

 VAR_8 = VAR_3->value.integer.value[0] & 0x3fff;
 VAR_8 |= (VAR_3->value.integer.value[1] & 0x3fff) << 16;
 FUNC_3(&VAR_4->reg_lock);
 VAR_9 = FUNC_1(VAR_4, VAR_5);
 VAR_7 = VAR_8 != VAR_9;
 FUNC_2(VAR_4, VAR_5, VAR_8);
 FUNC_2(VAR_4, VAR_6, VAR_8);
 FUNC_4(&VAR_4->reg_lock);
 return VAR_7;
}
