
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 int VAR_3 = VAR_1->private_value >> 16;
 VAR_2->type = VAR_0;
 VAR_2->count = 3 * VAR_3;
 return 0;
}
