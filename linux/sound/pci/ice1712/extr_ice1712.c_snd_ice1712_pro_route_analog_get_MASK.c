
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = FUNC_3(VAR_2, &VAR_3->id);
 unsigned int VAR_6, VAR_7;

 FUNC_5(&VAR_4->reg_lock);
 VAR_6 = FUNC_2(FUNC_0(VAR_4, VAR_1));
 VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_0));
 FUNC_6(&VAR_4->reg_lock);

 VAR_6 >>= ((VAR_5 % 2) * 8) + ((VAR_5 / 2) * 2);
 VAR_6 &= 3;
 VAR_7 >>= ((VAR_5 / 2) * 8) + ((VAR_5 % 2) * 4);
 if (VAR_6 == 1 && VAR_5 < 2)
  VAR_3->value.enumerated.item[0] = 11;
 else if (VAR_6 == 2)
  VAR_3->value.enumerated.item[0] = (VAR_7 & 7) + 1;
 else if (VAR_6 == 3)
  VAR_3->value.enumerated.item[0] = ((VAR_7 >> 3) & 1) + 9;
 else
  VAR_3->value.enumerated.item[0] = 0;
 return 0;
}
