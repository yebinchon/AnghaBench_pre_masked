
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mreg_control {unsigned int regbase; unsigned int regcount; unsigned int invert; unsigned long nbits; long max; } ;
struct snd_soc_component {unsigned int val_bytes; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_0(VAR_1);
 struct soc_mreg_control *VAR_4 =
  (struct soc_mreg_control *)VAR_1->private_value;
 unsigned int VAR_5 = VAR_4->regbase;
 unsigned int VAR_6 = VAR_4->regcount;
 unsigned int VAR_7 = VAR_3->val_bytes * VAR_0;
 unsigned int VAR_8 = (1<<VAR_7)-1;
 unsigned int VAR_9 = VAR_4->invert;
 unsigned long VAR_10 = (1UL<<VAR_4->nbits)-1;
 long VAR_11 = VAR_4->max;
 long VAR_12 = VAR_2->value.integer.value[0];
 unsigned int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 if (VAR_9)
  VAR_12 = VAR_11 - VAR_12;
 VAR_12 &= VAR_10;
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_14 = (VAR_12 >> (VAR_7*(VAR_6-VAR_13-1))) & VAR_8;
  VAR_15 = (VAR_10 >> (VAR_7*(VAR_6-VAR_13-1))) & VAR_8;
  VAR_16 = FUNC_1(VAR_3, VAR_5+VAR_13,
    VAR_15, VAR_14);
  if (VAR_16 < 0)
   return VAR_16;
 }

 return 0;
}
