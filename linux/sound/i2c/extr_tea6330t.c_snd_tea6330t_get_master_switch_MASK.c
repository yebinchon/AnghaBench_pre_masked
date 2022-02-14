
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea6330t {scalar_t__* regs; int bus; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tea6330t* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct tea6330t *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_4->bus);
 VAR_3->value.integer.value[0] = VAR_4->regs[VAR_0] == 0 ? 0 : 1;
 VAR_3->value.integer.value[1] = VAR_4->regs[VAR_1] == 0 ? 0 : 1;
 FUNC_1(VAR_4->bus);
 return 0;
}
