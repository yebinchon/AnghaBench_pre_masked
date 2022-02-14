
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6;

 FUNC_0(VAR_5, VAR_0, &VAR_6);
 VAR_4->value.integer.value[0] = VAR_6 << 1;

 FUNC_0(VAR_5, VAR_1, &VAR_6);
 VAR_4->value.integer.value[0] |= VAR_6 & VAR_2;

 return 0;
}
