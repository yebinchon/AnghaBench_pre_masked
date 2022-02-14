
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_1(VAR_4);
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_4->private_value;
 unsigned int VAR_8 = VAR_7->reg;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_8) & VAR_1;

 switch (VAR_9) {
 case 128:
  VAR_5->value.enumerated.item[0] = VAR_3;
  break;
 case 129:
  VAR_5->value.enumerated.item[0] = VAR_2;
  break;
 default:
  VAR_5->value.enumerated.item[0] = VAR_0;
  break;
 }

 return 0;
}
