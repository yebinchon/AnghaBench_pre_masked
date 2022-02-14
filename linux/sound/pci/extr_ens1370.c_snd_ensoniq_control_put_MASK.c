
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ensoniq {int ctrl; int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct ensoniq* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct ensoniq *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_1->private_value;
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->value.integer.value[0] ? VAR_4 : 0;
 FUNC_3(&VAR_3->reg_lock);
 VAR_6 = (VAR_3->ctrl & VAR_4) != VAR_5;
 VAR_3->ctrl &= ~VAR_4;
 VAR_3->ctrl |= VAR_5;
 FUNC_1(VAR_3->ctrl, FUNC_0(VAR_3, VAR_0));
 FUNC_4(&VAR_3->reg_lock);
 return VAR_6;
}
