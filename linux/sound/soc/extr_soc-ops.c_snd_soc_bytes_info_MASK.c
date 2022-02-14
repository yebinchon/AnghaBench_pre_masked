
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_bytes {int num_regs; } ;
struct snd_soc_component {int val_bytes; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;


 int VAR_0 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;

int FUNC_1(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_info *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_0(VAR_1);
 struct soc_bytes *VAR_4 = (void *)VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_4->num_regs * VAR_3->val_bytes;

 return 0;
}
