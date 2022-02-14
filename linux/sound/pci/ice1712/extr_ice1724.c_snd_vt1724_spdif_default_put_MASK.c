
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_1(&VAR_2->value.iec958);
 FUNC_4(&VAR_3->reg_lock);
 VAR_5 = FUNC_2(FUNC_0(VAR_3, VAR_0));
 if (VAR_4 != VAR_5)
  FUNC_6(VAR_3, VAR_4);
 FUNC_5(&VAR_3->reg_lock);
 return VAR_4 != VAR_5;
}
