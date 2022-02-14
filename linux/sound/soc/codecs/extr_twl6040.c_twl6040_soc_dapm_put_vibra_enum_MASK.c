
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
 struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_0(VAR_3);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_3->private_value;
 unsigned int VAR_7;


 VAR_7 = FUNC_2(VAR_5, VAR_6->reg);
 if (VAR_7 & VAR_1 && !(VAR_7 & VAR_2))
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
