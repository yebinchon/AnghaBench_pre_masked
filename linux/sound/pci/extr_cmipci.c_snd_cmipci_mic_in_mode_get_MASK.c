
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmipci*,int ) ;
 struct cmipci* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct cmipci *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->reg_lock);
 VAR_3->value.enumerated.item[0] =
  (FUNC_0(VAR_4, VAR_0) & VAR_1) ? 1 : 0;
 FUNC_3(&VAR_4->reg_lock);
 return 0;
}
