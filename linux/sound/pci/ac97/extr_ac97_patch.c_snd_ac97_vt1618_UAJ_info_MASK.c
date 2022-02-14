
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {int items; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_info *VAR_2)
{
 return FUNC_0(VAR_2, 1, 4,
     VAR_0[VAR_1->private_value].items);
}
