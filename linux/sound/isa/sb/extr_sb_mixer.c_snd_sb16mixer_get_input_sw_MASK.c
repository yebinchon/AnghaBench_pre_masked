
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int mixer_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned char* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_sb* FUNC_0 (struct snd_kcontrol*) ;
 unsigned char FUNC_1 (struct snd_sb*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_sb *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value & 0xff;
 int VAR_5 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 16) & 0x0f;
 int VAR_7 = (VAR_0->private_value >> 24) & 0x0f;
 unsigned char VAR_8, VAR_9;

 FUNC_2(&VAR_2->mixer_lock, VAR_3);
 VAR_8 = FUNC_1(VAR_2, VAR_4);
 VAR_9 = FUNC_1(VAR_2, VAR_5);
 FUNC_3(&VAR_2->mixer_lock, VAR_3);
 VAR_1->value.integer.value[0] = (VAR_8 >> VAR_6) & 0x01;
 VAR_1->value.integer.value[1] = (VAR_9 >> VAR_6) & 0x01;
 VAR_1->value.integer.value[2] = (VAR_8 >> VAR_7) & 0x01;
 VAR_1->value.integer.value[3] = (VAR_9 >> VAR_7) & 0x01;
 return 0;
}
