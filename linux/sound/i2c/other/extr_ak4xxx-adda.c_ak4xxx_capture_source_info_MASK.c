
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct snd_akm4xxx {TYPE_1__* adc_info; } ;
struct TYPE_2__ {int input_names; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct snd_akm4xxx*,int) ;
 int FUNC_2 (struct snd_ctl_elem_info*,int,unsigned int,int ) ;
 struct snd_akm4xxx* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_info *VAR_2)
{
 struct snd_akm4xxx *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_0(VAR_1->private_value);
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 return FUNC_2(VAR_2, 1, VAR_5,
     VAR_3->adc_info[VAR_4].input_names);
}
