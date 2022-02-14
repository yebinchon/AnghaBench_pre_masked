
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;

 int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int,int ,unsigned int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_1(VAR_5);
 struct soc_enum *VAR_8 = (struct soc_enum *)VAR_5->private_value;
 unsigned int VAR_9 = VAR_8->reg;
 unsigned int VAR_10 = VAR_6->value.enumerated.item[0];
 unsigned int VAR_11;

 switch (VAR_10) {
 case 130:
  VAR_11 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_2;
  break;
 default:
  return -VAR_4;
 }

 FUNC_0(VAR_7, VAR_9, VAR_1, VAR_11);

 return 0;
}
