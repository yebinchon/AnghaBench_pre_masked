
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea6330t {int bus; scalar_t__ mright; scalar_t__ mleft; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tea6330t* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct tea6330t *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->bus);
 VAR_1->value.integer.value[0] = VAR_2->mleft - 0x14;
 VAR_1->value.integer.value[1] = VAR_2->mright - 0x14;
 FUNC_1(VAR_2->bus);
 return 0;
}
