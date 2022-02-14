
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda7419_vol_control {unsigned int reg; unsigned int rreg; unsigned int mask; int min; int thresh; unsigned int invert; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {void** value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int*) ;
 void* FUNC_2 (int,unsigned int,int,int,unsigned int) ;
 scalar_t__ FUNC_3 (struct tda7419_vol_control*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 struct tda7419_vol_control *VAR_3 =
  (struct tda7419_vol_control *)VAR_0->private_value;
 unsigned int VAR_4 = VAR_3->reg;
 unsigned int VAR_5 = VAR_3->rreg;
 unsigned int VAR_6 = VAR_3->mask;
 int VAR_7 = VAR_3->min;
 int VAR_8 = VAR_3->thresh;
 unsigned int VAR_9 = VAR_3->invert;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_4, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_1->value.integer.value[0] =
  FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);

 if (FUNC_3(VAR_3)) {
  VAR_11 = FUNC_1(VAR_2, VAR_5, &VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_1->value.integer.value[1] =
   FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
 }

 return 0;
}
