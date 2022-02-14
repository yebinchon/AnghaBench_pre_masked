
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_ctl_elem_value *VAR_4;
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->value.integer.value[0] = VAR_3;
 VAR_4->value.integer.value[1] = VAR_3;
 VAR_2->put(VAR_2, VAR_4);
 FUNC_0(VAR_4);
 return 0;
}
