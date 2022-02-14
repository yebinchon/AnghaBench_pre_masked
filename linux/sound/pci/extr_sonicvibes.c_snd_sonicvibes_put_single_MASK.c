
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sonicvibes {int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct sonicvibes* FUNC_0 (struct snd_kcontrol*) ;
 unsigned short FUNC_1 (struct sonicvibes*,int) ;
 int FUNC_2 (struct sonicvibes*,int,unsigned short) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct sonicvibes *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_7;
 unsigned short VAR_8, VAR_9;

 VAR_8 = (VAR_1->value.integer.value[0] & VAR_5);
 if (VAR_6)
  VAR_8 = VAR_5 - VAR_8;
 VAR_8 <<= VAR_4;
 FUNC_3(&VAR_2->reg_lock);
 VAR_9 = FUNC_1(VAR_2, VAR_3);
 VAR_8 = (VAR_9 & ~(VAR_5 << VAR_4)) | VAR_8;
 VAR_7 = VAR_8 != VAR_9;
 FUNC_2(VAR_2, VAR_3, VAR_8);
 FUNC_4(&VAR_2->reg_lock);
 return VAR_7;
}
