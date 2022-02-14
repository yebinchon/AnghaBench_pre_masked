
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 VAR_0 = VAR_2->value.integer.value[0];

 FUNC_1(FUNC_0(2), !VAR_0);

 return 0;
}
