
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_algo_control {int max; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct sst_algo_control *VAR_3 = (void *)VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->max;

 return 0;
}
