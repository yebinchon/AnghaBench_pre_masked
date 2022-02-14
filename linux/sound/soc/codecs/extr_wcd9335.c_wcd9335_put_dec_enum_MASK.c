
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int,int ,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_13,
    struct snd_ctl_elem_value *VAR_14)
{
 struct snd_soc_dapm_context *VAR_15 = FUNC_1(VAR_13);
 struct snd_soc_component *VAR_16 = FUNC_3(VAR_15);
 struct soc_enum *VAR_17 = (struct soc_enum *)VAR_13->private_value;
 unsigned int VAR_18, VAR_19, VAR_20;

 VAR_18 = VAR_14->value.enumerated.item[0];

 switch (VAR_17->reg) {
 case 136:
  VAR_19 = VAR_1;
  break;
 case 135:
  VAR_19 = VAR_2;
  break;
 case 134:
  VAR_19 = VAR_3;
  break;
 case 133:
  VAR_19 = VAR_4;
  break;
 case 132:
  VAR_19 = VAR_5;
  break;
 case 131:
  VAR_19 = VAR_6;
  break;
 case 130:
  VAR_19 = VAR_7;
  break;
 case 129:
  VAR_19 = VAR_8;
  break;
 case 128:
  VAR_19 = VAR_9;
  break;
 default:
  return -VAR_0;
 }


 VAR_20 = VAR_18 ? VAR_11 : VAR_12;
 FUNC_0(VAR_16, VAR_19,
          VAR_10,
          VAR_20);

 return FUNC_2(VAR_13, VAR_14);
}
