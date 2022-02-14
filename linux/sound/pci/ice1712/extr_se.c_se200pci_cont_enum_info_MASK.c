
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {int member; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_info *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->private_value;
 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_0;
 return FUNC_1(VAR_3, 1, VAR_5, VAR_1[VAR_4].member);
}
