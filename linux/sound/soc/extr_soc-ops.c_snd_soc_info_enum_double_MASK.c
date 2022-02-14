
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {scalar_t__ shift_l; scalar_t__ shift_r; int texts; int items; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int ,int ) ;

int FUNC_1(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_info *VAR_1)
{
 struct soc_enum *VAR_2 = (struct soc_enum *)VAR_0->private_value;

 return FUNC_0(VAR_1, VAR_2->shift_l == VAR_2->shift_r ? 1 : 2,
     VAR_2->items, VAR_2->texts);
}
