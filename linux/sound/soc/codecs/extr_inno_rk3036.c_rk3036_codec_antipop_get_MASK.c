
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_5,
        struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_0(VAR_5);
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_0, &VAR_10);
 if (VAR_9)
  return VAR_9;
 VAR_8 = ((VAR_10 >> VAR_1) &
        VAR_3) == VAR_4;
 VAR_6->value.integer.value[0] = VAR_8;

 VAR_8 = ((VAR_10 >> VAR_2) &
        VAR_3) == VAR_4;
 VAR_6->value.integer.value[1] = VAR_8;

 return 0;
}
