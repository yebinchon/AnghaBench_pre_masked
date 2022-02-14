
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fm801 {int reg_lock; } ;


 int FUNC_0 (struct fm801*,int) ;
 struct fm801* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct fm801 *VAR_2 = FUNC_1(VAR_0);
        int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0x0f;
 int VAR_5 = (VAR_0->private_value >> 12) & 0x0f;
 int VAR_6 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_7 = (VAR_0->private_value >> 24) & 0xff;
 long *VAR_8 = VAR_1->value.integer.value;

 FUNC_2(&VAR_2->reg_lock);
 VAR_8[0] = (FUNC_0(VAR_2, VAR_3) >> VAR_4) & VAR_6;
 VAR_8[1] = (FUNC_0(VAR_2, VAR_3) >> VAR_5) & VAR_6;
 FUNC_3(&VAR_2->reg_lock);
 if (VAR_7) {
  VAR_8[0] = VAR_6 - VAR_8[0];
  VAR_8[1] = VAR_6 - VAR_8[1];
 }
 return 0;
}
