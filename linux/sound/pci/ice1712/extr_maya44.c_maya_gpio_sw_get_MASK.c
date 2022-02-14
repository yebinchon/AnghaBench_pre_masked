
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_maya44 {int ice; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 struct snd_maya44* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_maya44 *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_0->private_value);
 unsigned int VAR_4;

 VAR_4 = (FUNC_2(VAR_2->ice) >> VAR_3) & 1;
 if (FUNC_0(VAR_0->private_value))
  VAR_4 = !VAR_4;
 VAR_1->value.integer.value[0] = VAR_4;
 return 0;
}
