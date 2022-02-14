
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,unsigned int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_4(VAR_2);
 struct snd_soc_dapm_context *VAR_5 = FUNC_0(VAR_4);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_2->private_value;
 unsigned int VAR_7 = VAR_3->value.enumerated.item[0] << VAR_6->shift_l;
 unsigned int VAR_8 = 1 << VAR_6->shift_l;
 unsigned int VAR_9;

 if (VAR_7 != 0 && VAR_7 != VAR_8)
  return -VAR_0;

 FUNC_5(VAR_5);

 if (FUNC_2(VAR_4, VAR_6->reg, VAR_8, VAR_7)) {

  VAR_9 = FUNC_1(VAR_4, VAR_1) & 0x4;


  FUNC_3(VAR_4, VAR_1, 0x4, 0x4);


  FUNC_3(VAR_4, VAR_6->reg, VAR_8, VAR_7);


  FUNC_3(VAR_4, VAR_1, 0x4, VAR_9);
 }

 FUNC_6(VAR_5);

 return 0;
}
