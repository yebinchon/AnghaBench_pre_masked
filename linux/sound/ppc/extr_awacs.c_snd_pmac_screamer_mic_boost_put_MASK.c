
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {int* awacs_reg; int reg_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_pmac*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pmac *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_4->reg_lock, VAR_8);
 VAR_6 = VAR_4->awacs_reg[0] & ~VAR_0;
 VAR_7 = VAR_4->awacs_reg[6] & ~VAR_1;
 if (VAR_3->value.integer.value[0] & 1)
  VAR_6 |= VAR_0;
 if (VAR_3->value.integer.value[0] & 2)
  VAR_7 |= VAR_1;
 if (VAR_6 != VAR_4->awacs_reg[0]) {
  FUNC_1(VAR_4, 0, VAR_6);
  VAR_5 = 1;
 }
 if (VAR_7 != VAR_4->awacs_reg[6]) {
  FUNC_1(VAR_4, 6, VAR_7);
  VAR_5 = 1;
 }
 FUNC_3(&VAR_4->reg_lock, VAR_8);
 return VAR_5;
}
