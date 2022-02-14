
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; int max; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_7,
       struct snd_ctl_elem_value *VAR_8)
{
 struct soc_mixer_control *VAR_9 =
  (struct soc_mixer_control *)VAR_7->private_value;
 int VAR_10 = VAR_8->value.integer.value[0];
 unsigned int VAR_11 = VAR_9->reg;
 int VAR_12 = VAR_9->max;

 if (VAR_10 > VAR_12)
  return -VAR_0;

 switch (VAR_11) {
 case 129:
  FUNC_0(VAR_2, VAR_10 & 1);
  FUNC_0(VAR_3, VAR_10 >> 1);
  VAR_1 = VAR_10;
  break;
 case 128:
  FUNC_0(VAR_5, VAR_10 & 1);
  FUNC_0(VAR_6, VAR_10 >> 1);
  VAR_4 = VAR_10;
  break;
 }
 return 0;
}
