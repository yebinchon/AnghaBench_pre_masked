
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_es1688 {int reg_lock; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct snd_es1688*,int ) ;
 int FUNC_1 (struct snd_es1688*,int ,unsigned char) ;
 struct snd_es1688* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_es1688 *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 unsigned char VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3->value.enumerated.item[0] > 8)
  return -VAR_0;
 FUNC_3(&VAR_4->reg_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_7 = (VAR_3->value.enumerated.item[0] & 7) | (VAR_6 & ~15);
 VAR_8 = VAR_7 != VAR_6;
 if (VAR_8)
  FUNC_1(VAR_4, VAR_1, VAR_7);
 FUNC_4(&VAR_4->reg_lock, VAR_5);
 return VAR_8;
}
